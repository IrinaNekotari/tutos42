/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmascrie <nmascrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 02:43:22 by nmascrie          #+#    #+#             */
/*   Updated: 2024/03/09 02:43:27 by nmascrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_hero
{
  char  *name;
  int   power;
  struct s_hero  *next;
  struct s_hero  *previous;
}	t_hero;

void  hero_init(t_hero *hero, char *name, int power);
void  hero_print(t_hero *hero);
void  hero_add(t_hero *hero, char *name, int power);
void  hero_print_all(t_hero *hero);
void  hero_init_alt(t_hero *hero, t_hero *add);
void  hero_add_alt(t_hero *hero, t_hero *add);
t_hero *hero_get_tail(t_hero *hero);
void   hero_push(t_hero **hero, char *name, int power);
void   hero_cut(t_hero **hero, int n);
void   hero_cut_if(t_hero **hero, int (*f)(int));
void   hero_modify_all(t_hero *hero, int (*f)(int));
void   hero_attack(t_hero **hero, int n, int pow);

//UTILS
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void  free_memory(t_hero *h);
int     double_truc(int a);
int     is_big(int a);

#endif