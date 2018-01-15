/*
** my_putchar.c for my_putchar in /home/abrun/delivery/CPool_Day11/task01
** 
** Made by Alexandre Brun
** Login   <abrun@epitech.net>
** 
** Started on  Mon Oct 17 17:21:55 2016 Alexandre Brun
** Last update Wed Oct 19 08:20:09 2016 Alexandre Brun
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
