#include<stdio.h>
#include<math.h>

void shell_sort(int unsorted_array[], int array_size );

int main()
{
	int array_size,i;
	printf("Enter the size of array: ");
	scanf("%d", &array_size);
	
	int array[array_size];
	for(i=0;i<array_size;i++)
	{
		printf("Element %d: ", i);
		scanf("%d", &array[i]);
	}
	
	shell_sort(array, array_size);
	return 0;
}

void shell_sort(int unsorted_array[], int array_size)
{
	int i,j,k,temp,pass=1, gap;
	gap = floor(array_size/2);
	while(gap>0)
	{
		printf("\n\nPass %d", pass);
		for(i=gap;i<array_size;i++)
		{
			temp = unsorted_array[i];
			j=i;
			while(j>=gap && unsorted_array[j-gap]>temp)
			{
				unsorted_array[j] = unsorted_array[j-gap];
				j = j-gap;
			}
			unsorted_array[j] = temp;
			printf("\n");
			for(k=0;k<array_size;k++)
			{
				printf("%d\t",unsorted_array[k]);
			}
		}
		gap = gap/2;
		pass++;
	}
}

