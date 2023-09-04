#include "rush.h"

int		verif(char *str) // Esta función verifica si la cadena de entrada str cumple con ciertas condiciones.
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (is_space(str[i])) //Comienza ignorando los espacios en blanco al principio de la cadena.
		i++;
	while (str[i] == '0') //Luego, verifica si la cadena comienza con '0' y contiene al menos un número válido.

	{
		if (!is_num(str[i + 1]))
			break;
		i++;
	}
	while (str[i] && is_num(str[i])) //LOS NUMEROS
	{
		num++;
		i++;
	}
	while (str[i]) //Finalmente, verifica que la cadena consista solo en espacios en blanco al final (después de los números)
	{
		if (!is_space(str[i]))
			return (0);
		i++;
	}
	if (num == 0)
		return (0);
	return (1); //Devuelve 1 si todas las condiciones se cumplen; de lo contrario, devuelve 0 cuando se incumpla alguna.
}

int		find_word(char *str) //Esta función busca una palabra en la cadena str hasta encontrar un carácter de nueva línea ('\n') o el final de la cadena.
{
	int i;

	i = 0;
	while (str[i] && str[i] != '\n') //Verifica si la palabra contiene caracteres diferentes a los espacios en blanco.
	{
		if (!is_space(str[i]))
			return (1); //Devuelve 1 si encuentra una palabra; de lo contrario, devuelve 0.
		i++;
	}
	return (0);
}

void	print(char *s, int count) //Esta función imprime palabras de la cadena s
{
	while (is_space(*s)) //omitiendo los espacios en blanco al principio.
		s++;
	while (!is_space(*s) && *s != '\n')
	{
		ft_putchar(*s);
		s++;
		count++; //La variable count lleva un registro del número de caracteres impresos.
	}
	if (find_word(s))
	{
		ft_putchar(' '); //coloca un espacio (' ') entre las palabras.
		return (print(s, count + 1)); //Utiliza una llamada recursiva para imprimir todas las palabras en la cadena.
	}
	else
		return;
}

int		ft_dico(char *s, char *dictionary) //Esta función principal coordina la ejecución del programa.
{
	char	*str;
	char 	buffer[10001];
	char	*tmp;
	int		fd;
	
	if (!verif(s))   // Verifica si la entrada s es válida utilizando la función verif.
		return (0);
	if (!(str = ft_strdup(ft_itoa(ft_atoi(s))))) // Luego, convierte el número contenido en s en una cadena y la almacena en str.
		return (0);
	if ((fd = open(dictionary, O_RDONLY)) == -1) //Abre y lee un archivo de diccionario especificado en dictionary, almacenando su contenido en buffer.
		return (0);
	if (read(fd, buffer, 10000) == -1)
		return (0);
	buffer[10000] = '\0';
	//printf("%s", buffer);   // Muestro el búfer aquí para ver claramente que el diccionario está abierto, leído y almacenado en él.
	if ((tmp = ft_strstr(buffer, str)) != NULL) //Luego, busca la cadena str en el buffer del diccionario y, si la encuentra
		if ((tmp = ft_strstr(tmp, ":")) != NULL)
			print(tmp + 1, 0); //imprime las palabras que siguen a la cadena encontrada.
	return (1); //Devuelve 1 si se completó con éxito; de lo contrario, devuelve 0.
}

int		main(int ac, char **av) //es el punto de entrada del programa. Comprueba la cantidad de argumentos pasados en la línea de comandos
{
	if (ac < 2 || ac > 3) //Si se proporcionan menos de 2 o más de 3 argumentos, imprime "Error".
		ft_putstr("Error\n");
	if (ac == 2)   // Si se proporcionan exactamente 2 argumentos, llama a ft_dico con el primer argumento (av[1]) y un archivo de diccionario predeterminado ("default.txt").
		if (!ft_dico(av[1], "default.txt"))
			ft_putstr("Error\n");
	if (ac == 3)   // Si se proporcionan 3 argumentos, llama a ft_dico con el primer argumento (av[1]) y el segundo argumento (av[2]) como el archivo de diccionario especificado.
		if (!ft_dico(av[1], av[2]))
			ft_putstr("Error\n");
	return (0); //Imprime "Error" si ft_dico devuelve 0.
}
