proyecto : funciones1.o funciones2.o funciones3.o numtonum.o
	gcc funciones1.o funciones2.o funciones3.o numtonum.o -o proyecto

numtonum.o : numtonum.c rush02.h
	gcc -c numtonum.c
funciones1.o : funciones1.c rush02.h
	gcc -c funciones1.c
funciones2.o : funciones2.c rush02.h
	gcc -c funciones2.c
funciones3.o : funciones3.c rush02.h
	gcc -c funciones3.c
clean:
	rm -f *.o proyecto
fclean: clean
	rm -f $(proyecto)
