/*
** fonction3.c for header in /Users/olivie_a/Desktop/Easter
** 
** Made by OLIVIER Steven
** Login   <olivie_a@etna-alternance.net>
** 
** Started on  Mon Apr 25 13:24:47 2016 OLIVIER Steven
** Last update Wed May  4 16:02:45 2016 OLIVIER Steven
*/
#include "Easter.h"

int posh(int h, int w, char** route)
{
  int i;
  int j;

  for (i = 0; i < 12; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  if (route[i][j] == 'X'){
	    h = i;
	    w = j;
	  }
        }
    }
  w++;
  if (h > 12 && w > 3)
    return (-1);
  else
    return (h);
}

int posw(int h, int w, char** route)
{
  int i;
  int j;
  
  for (i = 0; i < 12; i++)
    {
      for (j = 0; j < 3; j++)
        {
	  if (route[i][j] == 'X')
            {
	      h = i;
	      w = j;
            }
        }
    }
  h++;
  return (w);
}

int  my_strcmp(char *s1, char *s2)
{
  int  w;
  
  w = 0;
  while (s1[w] != '\0' || s2[w] != '\0')
    {
      if (s1[w] < s2[w])
        {
          return (-1);
        }
      if (s1[w] == s2[w])
        {
          w = w + 1;
        }
      if (s1[w] > s2[w])
        {
          return (1);
	}
    }
  return (0);
}

char**  my_creat()
{
  char** tab;
  int   i;

  i = 0;
  tab = malloc(sizeof(char*) * 13);
  while (i != 12)
    {
      tab[i] = malloc(sizeof(char) * 4);
      i++;
    }
  tab[i] = NULL;
  return (tab);
}

void  my_init(char** tab, char* strg)
{
  int   i;
  int   j;
  int   o;
  
  o = 0;
  j = 0;
  i = 0;
  while (strg[o] != '\0')
    {
      j = 0;
      while (strg[o] != '\n')
      	{
	  tab[i][j] = strg[o];
	  j++;
	  o++;
	}
      tab[i][j] = '\0';
      i++;
      o++;
    }
  free(strg);
}
