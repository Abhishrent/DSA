#include<stdio.h>
#include<math.h>

void bubble_sort(int unsorted_array[], int array_size );

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
	
	bubble_sort(array, array_size);
	return 0;
}

void bubble_sort(int unsorted_array[], int array_size)
{
	int i,j,k,temp;
	
	for(i=0;i<array_size;i++)
	{
		if(i<array_size-1)
		printf("\n\nPass %d", i+1);
		for(j=0;j<array_size-1-i;j++)
		{
			if(unsorted_array[j]>unsorted_array[j+1])
			{
				temp = unsorted_array[j+1];
				unsorted_array[j+1] = unsorted_array[j];
				unsorted_array[j] = temp;
			}
			printf("\n");
			for(k=0;k<array_size;k++)
			{
				if(k==j||k==j+1)
				printf("[");
				if(unsorted_array[k] == temp)
				{
					printf("%d",unsorted_array[k]);
					temp = -10;
					if(k==j||k==j+1)
					printf("]");
					printf("<-->\t");
				}
				


else
				{
					printf("%d",unsorted_array[k]);
					if(k==j||k==j+1)
					printf("]");
					printf("\t");
				}
			}
		}
	}
}


