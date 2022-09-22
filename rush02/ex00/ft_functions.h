/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprahin <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:31:44 by aprahin           #+#    #+#             */
/*   Updated: 2022/09/18 23:02:45 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_FUNCTIONS_H
# define FT_FUNCTIONS_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_strcat(char *dest, char *src);
unsigned long	ft_atoi(char *str);
void			ft_sort(char **tab);
void			ft_clean(char **tab);
void			ft_sortclean(char **tab);
int				ft_isint(char *arg);
int				ft_isdict(char *dict);
char			**ft_split(char *str, char *charset);
char			*ft_putnbr(char **dict, unsigned long nbr);
char			*get_element(unsigned long n, char **dict_table);
void			trim_dict(char **dict_table);
int				get_file_len(int filedes, char *buf);
void			ft_print_error(int errorcode);

#endif
