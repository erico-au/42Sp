void ft_rev_int_tab(int *tab, int size)
{
	int x;
	int j;

	j = 0;
	size = size  - 1;
	while (j <= size)
	{
		x = tab[j];
		tab[j] = tab[size];
		tab[size] = x;
		j++;
		size--;
	}
}
