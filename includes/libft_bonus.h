#ifndef LIBFT_BONUS_H
#define LIBFT_BONUS_H
char    *ft_strrev(char *str);
int		ft_atoi_base(char *str, char *base);
void	ft_putnbr_base(int nbr, char *base);
int		ft_strlen_base(int nb, int base_to);
int		is_base_valid(char *str);
int		is_in_base(char c, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
void	ft_swap_int(int *a, int *b);
void	ft_swap_char(char **ptr1, char **ptr2);
int		ft_factorial(int nb);
int		ft_power(int nb, int power);
int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);
#endif
