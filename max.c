int        max(int* tab, unsigned int len)
{
	int i;
	int max;
	
	i = 0;
	max = 0;

	if (tab)
	{
		max = tab[i];
		while( ++i < tab[i])
			if (tab[i] > max)
				max = tab[i];
	}
	return (max);
}
