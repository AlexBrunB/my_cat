/*
** main.c for main in /home/abrun/delivery/CPool_Day12/include
** 
** Made by Alexandre Brun
** Login   <abrun@epitech.net>
** 
** Started on  Tue Oct 18 11:09:01 2016 Alexandre Brun
** Last update Wed Oct 19 08:43:33 2016 Alexandre Brun
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int     my_putnbr(int nb);
void    my_putchar(char c);
int     my_putstr(char *str);

int	main(int ac, char *av[])
{
  int	cmd;
  char	buffer[30000];
  int	i;
  int	l;

  i = 1;
  if (ac == 1)
    while ((l = read(0, buffer, 29000)) > 0)
      {
	buffer[l] = '\0';
	write(1, buffer, l);
      }
  while (i < ac)
    {
      cmd = open(av[i], O_RDONLY);
      if (cmd == -1)
	{
	  my_putstr("Error with open\n");
	  return (1);
	}
      while ((l = read(cmd, buffer, 29000)) > 0)
	{
	  buffer[l] = '\0';
	  write(1, buffer, l);
	}
      close(cmd);
      i++;
    }
  return (0);
}
