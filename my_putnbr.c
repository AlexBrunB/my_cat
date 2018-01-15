/*
** my_put_nbr.c for my_put_nbr in /home/abrun/delivery/CPool_Day09
** 
** Made by Alexandre Brun
** Login   <abrun@epitech.net>
** 
** Started on  Mon Oct 10 16:22:52 2016 Alexandre Brun
** Last update Wed Oct 19 08:13:40 2016 Alexandre Brun
*/

void	my_putchar(char c);

int 	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb > 9)
    my_putnbr(nb / 10);
  my_putchar(48 + nb % 10);
  return (0);
}
