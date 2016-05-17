/*
** Easter.c for header in /Users/olivie_a/Desktop/Easter
** 
** Made by OLIVIER Steven
** Login   <olivie_a@etna-alternance.net>
** 
** Started on  Mon Apr 25 13:24:11 2016 OLIVIER Steven
** Last update Wed May  4 16:00:17 2016 OLIVIER Steven
*/
#include "Easter.h"

char	**my_easter()
{
  int	c;
  char	**tab;
  char	*strg;

  c = 0;
  strg = malloc(sizeof(char) * 52);
  tab = NULL;
  if ((c = open("map.txt", O_RDONLY, 0)) == -1)
    {
      my_putstr("open error\n");
      return (NULL);
    }
  read(c, strg, 51);
  tab = my_creat();
  my_init(tab, strg);
  close(c);
  return (tab);
}

void my_menu()
{
  char	*c;
  int	i;
  char	**route;

  route = my_easter();
  aff();
  c = get_str();
  while (my_strcmp(c, "exit") != 0)
  {
    if (my_strcmp(c, "go") == 0)
    {
      route[11][1] = 'X';
      jeux(route);
    }
    aff();
    c = get_str();
  }
  i = 0;
  while (route[i] != NULL)
  {
    free(route[i]);
    i++;
  }
  free(c);
  free(route);
}

int main()
{
  my_menu();
  return 0;
}
