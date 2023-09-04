/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:51:03 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/26 19:55:13 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_espacio(char c);
int		ft_numero(char c);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_strstr(char *str, char *buscar);
int		ft_atoi(char *s);
int		ft_digit_num(int n);
void	ft_motor_itoa(char *str, int n);
char	*ft_itoa(int n);
#endif
/*
ifndef verifica si ya se ha incluido el simbolo RUSH02, para evitar duplicados
fcntl.h contiene open close O_RDONLY etc
read() esta contenida dentro de unistd.h

 */
