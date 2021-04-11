void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int ret_div;
	int ret_mod;

	a = 6;
	b = 4;
	ft_div_mod(a, b, &ret_div, &ret_mod);
	printf("%d\n", ret_div);
	printf("%d\n", ret_mod);
	return (0);
}
