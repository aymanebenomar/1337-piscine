void ft_rev_int_tab(int *tab, int size)
{
	int		first;
	int		last;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		int		temp;

		temp = tab[first];
		tab[first] = tab[last];
		tab[last] = temp;
		first++;
		last--; 
	}
}

#include <stdio.h>
int main(){
	int tab[] = {2, 3, 5, 0};
	int size = 4;
	int i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf ("%d", tab[i]);
		i++;
	}
	return 0;
}