/*
** Easter.h for header in /Users/olivie_a/Desktop/Easter
** 
** Made by OLIVIER Steven
** Login   <olivie_a@etna-alternance.net>
** 
** Started on  Mon Apr 25 13:24:29 2016 OLIVIER Steven
** Last update Fri Apr 29 10:14:18 2016 OLIVIER Steven
*/
#ifndef __Easter_h__
#define __Easter_h__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <fcntl.h>

int win;

void    my_putchar(char c);
void    my_putstr(char *str);
void    my_put_nbr(int n);
void	aff_tab(char** tab, int j);
void	my_menu();
void    jeux(char** route);
void    my_init(char** tab, char* strg);
void    aff();

int     my_choice(char* c, int i, int j, int win, char** route);
int     my_w(char** tab, int h, int w);
void     my_s(char** tab, int h, int w);
int     my_a(char** tab, int h, int w);
int 	my_d(char** tab, int h, int w);

char**	my_easter();
char**  my_creat();

char    *get_str();

int	my_strcmp(char *s1, char *s2);
int	my_strlen(char *str);
int posh(int h, int w, char** route);
int posw(int h, int w, char** route);
#endif
