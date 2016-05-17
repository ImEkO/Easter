/*
** fonction2.c for header in /Users/olivie_a/Desktop/Easter
** 
** Made by OLIVIER Steven
** Login   <olivie_a@etna-alternance.net>
** 
** Started on  Mon Apr 25 13:25:12 2016 OLIVIER Steven
** Last update Wed May  4 16:54:11 2016 OLIVIER Steven
*/
#include "Easter.h"

void aff_tab(char** tab, int j)
{
  int	i;
  int	y;

  for (i = j; i < j + 4; i++)
    {
      for (y = 0; tab[i][y] != '\0'; y++)
	{
	  if (y != 0)
	    my_putchar('|');
	  my_putchar(tab[i][y]);
	}
      my_putstr("\n");
    }
}

int  my_choice(char* c, int i, int j, int win, char** route)
{
  int	w;
  int	h;
  int	v;

  h = i;
  w = j;
  v = 1;
  if (c[0] == 'w')
    v = my_w(route, h, w);
  else  if (c[0] == 'a')
    v = my_a(route, h, w);
  else  if (c[0] == 'd')
    v = my_d(route, h, w);
  else if (c[0] == 's')
    my_s(route, h, w);
  else
  {
    my_putstr("Wrong direction !\n");
    win = 0;
    win--;
  }
  return (v);
}

void jeux(char** route)
{
  char*	c;
  int	h;
  int	i;
  int	j;
  int	w;
  int	compt;
  int	a;

  h = 0;
  w = 0;
  compt = 16;
  win = 0;
  a = 1;
  my_putstr("\n");
  aff_tab(route, compt / 2);
  my_putstr("\nEntrer une direction : ");
  while (a == 1)
  {
    i = posh(h, w, route);
    j = posw(h, w, route);
    if (i == 11)
      compt = 16;
    c = get_str();
    a = my_choice(c, i, j, win, route);
    aff_tab(route, compt / 2);
    if (compt > 0)
      compt--;
  }
}

char *get_str()
{
  char*	input;
  int	i;
  char	a;

  i = 0;
  if ((input = malloc(sizeof(char) * (51 + 1))) == NULL)
    return (NULL);
  while ((a = getchar()) != '\n')
    {
      input[i] = a;
      i++;
    }
  input[i] = '\0';
  return (input);
}
