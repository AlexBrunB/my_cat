/*
** my_putstr.c for my_putstr in /home/abrun/delivery/CPool_Day04
** 
** Made by Alexandre Brun
** Login   <abrun@epitech.net>
** 
** Started on  Thu Oct  6 10:27:31 2016 Alexandre Brun
** Last update Tue Oct 18 16:22:54 2016 Alexandre Brun
*/

void	my_putchar(char c);

int	my_putstr(char *str)
{
  int	sentence;

  sentence = 0;
  while (str[sentence] != '\0')
    {
      my_putchar(str[sentence]);
      sentence++;
    }
  return (0);
}
