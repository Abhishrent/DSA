#include<stdio.h>
#include<math.h>

int loop_run = 0, array_size;

void quick_sort(int unsorted_array[], int left_index, int right_index);
int partition(int array[], int partition_position, int right_index);

int main()
{
	int i;
	printf("Enter the size of array: ");
	scanf("%d", &array_size);
	
	int array[array_size];
	for(i=0;i<array_size;i++)
	{
		printf("Element %d: ", i);
		scanf("%d", &array[i]);
	}
	
	quick_sort(array, 0, array_size-1);
	return 0;
}

void quick_sort(int unsorted_array[], int left_index, int right_index)
{
	int n,k=0,i,p;

	if(left_index<right_index)
	{
		loop_run += 1;
		p=partition(unsorted_array, left_index, right_index);
		printf("\n\nPass %d\n", loop_run);
		for(i=0;i<array_size;i++)
		{
			printf("%d\t", unsorted_array[i]);
		}
		quick_sort(unsorted_array, left_index, p-1);
		quick_sort(unsorted_array, p+1,right_index);


	}
		
}



int partition(int array[], int partition_position, int right_index)
{
	int x,j,i,temp,k;
	x=array[partition_position];
	i=partition_position+1;
	j=right_index;
	while(i<=j)
	{
		while(array[i]<x && i<=right_index)
		{
			i++;
		}
		while(array[j]>x && j>=partition_position)
		{
			j--;
		}
		if(i<j)
		{
			temp = array[i];
			array[i]=array[j];
			array[j] = temp;
			printf("\n\nPass %d\n", loop_run);
			printf("\n");
			for(k=0;k<array_size;k++)
			{
				printf("%d\t", array[k]);
			}
			loop_run +=1;
		}
	}
	temp = array[partition_position];
	array[partition_position]=array[j];
	array[j] = temp;
	return j;
}

