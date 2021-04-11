void	ft_ultimate_div_mod(int *a, int *b);

void main(void)
{
	int z;
	int w;
	int *k;
	int *j;

	z = 5;
	w = 2;
	k = &z;
	j = &w;
	ft_ultimate_div_mod(k, j);
}
