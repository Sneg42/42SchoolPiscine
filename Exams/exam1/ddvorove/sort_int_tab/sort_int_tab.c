void swap(int *tab, int fst, int sec)
{
	int temp;
	temp = tab[fst];
	tab[fst] = tab[sec];
	tab[sec] = temp;
}

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int fst_i;
	unsigned int sec_i;
	
	fst_i = 0;	
	while (fst_i < size - 1)
	{
		sec_i = fst_i + 1;
		while (sec_i < size)
		{
			if (tab[fst_i] > tab[sec_i])
				swap(tab, fst_i, sec_i);
			sec_i++;
		}
		fst_i++;
	}
}
