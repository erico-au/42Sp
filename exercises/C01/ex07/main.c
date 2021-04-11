void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int n[] = {1, 2, 3, 4, 5, 6, 7};
	int size, i;

	i = 0;
	size = 7;
	printf("before\n");
	while (i < size)
	{
		printf("%d", n[i]);
		i++;
	}
	ft_rev_int_tab(n, size);

	i = 0;
	printf("\nAfter\n");
	while (i < size)
	{
		printf("%d", n[i]);
		i++;
	}
	return (0);
}