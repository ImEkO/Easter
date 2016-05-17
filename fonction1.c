/*
** fonction.c for header in /Users/olivie_a/Desktop/Easter
** 
** Made by OLIVIER Steven
** Login   <olivie_a@etna-alternance.net>
** 
** Started on  Mon Apr 25 13:24:47 2016 OLIVIER Steven
** Last update Wed May  4 16:01:56 2016 OLIVIER Steven
*/
#include "Easter.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}

void	my_put_nbr(int n)
{
  int d;
  int no;
  
  no = n;
  d = 1;
  if (no == -2147483648)
    {
      my_putstr("-2147483648");
      return ;
    }
  else if (n < 0)
    {
      my_putchar('-');
      no = - n;
    }
  while ((no / d) >= 10)
    {
      d = d * 10;
    }
  while (d > 0)
    {
      my_putchar((no / d) % 10 + 48);
      d = d / 10;
    }
}


int	my_strlen(char *str)
{
  int a;
  
  a = 0;
  while (*str != '\0')
    {
      str = str + 1;
      a = a + 1;
    }
  return (a);
}
