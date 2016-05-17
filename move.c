/*
** move.c for header in /Users/olivie_a/Desktop/Easter
** 
** Made by OLIVIER Steven
** Login   <olivie_a@etna-alternance.net>
** 
** Started on  Mon Apr 25 13:24:47 2016 OLIVIER Steven
** Last update Wed May  4 16:11:51 2016 OLIVIER Steven
*/
#include "Easter.h"

int 	my_a(char **tab, int h, int w)
{
  if (w != 0)
    {
      if (tab[h][w - 1] == ' ')
	{
	  tab[h][w] = ' ';
	  tab[h][w - 1] = 'X';
	}
      else
	{
	  tab[h][w] = ' ';
	  return (0);
	}
    }
  return (1);
}

int 	my_d(char **tab, int h, int w)
{
  if (w != 2)
    {
      if (tab[h][w + 1] == ' ')
	{
	  tab[h][w] = ' ';
	  tab[h][w + 1] = 'X';
	}
      else
	{
	  tab[h][w] = ' ';
	  return (0);
	}
    }
  return (1);
}

int 	my_w(char **tab, int h, int w)
{
  if (h == 0)
    {
      tab[11][w] = tab[h][w];
      tab[h][w] = ' ';
    }
  else
    {
      if (tab[h - 1][w] == ' ')
	{
	  tab[h][w] = ' ';
	  tab[h - 1][w] = 'X';
	}
      else
	{
	  tab[h][w] = ' ';
	  return (0);
	}
    }
  return (1);
}

void	my_s(char** tab, int h, int w)
{
  if (h < 11 && tab[h + 1][w] == ' ')
    {
      tab[h][w] = ' ';
      tab[h + 1][w] = 'X';
    }
  else
    my_putstr("Départ raté !\n");
}
