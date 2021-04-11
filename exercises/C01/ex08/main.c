int main(void)
{
	int n[] = {1, 2, 7, 0, 5, 6, 3};
	int size, i;

	i = 0;
	size = 7;
	printf("before\n");
	while (i < size)
	{
		printf("%d", n[i]);
		i++;
	}
	ft_sort_int_tab(n, size);
	i = 0;
	printf("\nAfter\n");
	while (i < size)
	{
		printf("%d", n[i]);
		i++;
	}
	return (0);
}
