#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int b[SIZE] = { 0 };
	int pass=1,c=0,d=0,e;
	size_t i;
	int hold;
	puts("Data items in original order");

	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	while (c!=1)
	{
	  d = d + 1;
	  c = 0;
	  e = 0;
			
		

			for (i = 0; i < SIZE - d; ++i)
			{   
				e = e + 1;
				if (a[i]>a[i + 1])
				{
					c = c + 1;
					hold = a[i];
					a[i] = a[i + 1];
					a[i + 1] = hold;
					
				}
			
			}
			printf("\n第%d回合:換%d次  比較%d次", d, c, e);
			
		
		
	} 

	puts("\nData items in ascending order");

	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}

	puts("");

	system("pause");
	return 0;
}