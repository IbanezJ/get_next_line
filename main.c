/*
** main.c for test in /home/ibanez_j/CPE_2016_getnextline
** 
** Made by Jean-Alexandre IBANEZ
** Login   <ibanez_j@epitech.net>
** 
** Started on  Fri Jan  6 15:58:19 2017 Jean-Alexandre IBANEZ
** Last update Sat Jan 14 10:40:36 2017 Jean-Alexandre IBANEZ
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int	main(int ac, char **av)
{
  char	*s;
  int	fd;

  fd = open(av[1], O_RDONLY);
  while((s = get_next_line(fd)))
    {
      my_putstr(s);
      my_putchar('\n');
      free(s);
    }
  /*s = get_next_line(fd);
  my_putstr(s);
  my_putchar('\n');
  free(s);*/
  return (0);
}
