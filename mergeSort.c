#include<stdio.h>
#include<math.h>

void merge_sort(int unsorted_array[], int left_index, int right_index);
int merge(int array[], int left_index, int m, int right_index);


int main()
{
	int i, array_size;
	printf("\t \t ******************************\n ");
    printf(" \t \t \t Merge Sort\n ");
	printf("\t \t ******************************\n\n");
	printf("Enter the size of array: ");
	scanf("%d", &array_size);
	
	int array[array_size];
	for(i=0;i<array_size;i++)
	{
		printf("Element %d: ", i);
		scanf("%d", &array[i]);
	}
	
	merge_sort(array, 0, array_size-1);
	printf("\nSorted Array :\n");
	for(i=0;i<array_size;i++)
	{
		printf("%d\t",array[i]);
	}
	return 0;
}

void merge_sort(int unsorted_array[], int left_index, int right_index)
{
	int m;

	if(left_index<right_index)
	{
		m=floor((left_index+right_index)/2);
		merge_sort(unsorted_array, left_index, m);
		merge_sort(unsorted_array, m+1, right_index);
		merge(unsorted_array, left_index, m+1, right_index);
	}
		
}

int merge(int array[], int left_index, int m, int right_index)
{
	int x,y,i,temp,k;
	int B[right_index+1];
	x=left_index;
	y=m;
	k=left_index;

	
while(x<m && y<=right_index)
	{
		if(array[x]<array[y])
		{
			B[k++]=array[x++];
		}
		else
		{
			B[k++] = array[y++];
		}
	}
	while(x<m)
	{
		B[k++]=array[x++];
	}
	while(y<=right_index)
	{
		B[k++] = array[y++];
	}
	for(i=left_index;i<=right_index;i++)
	{
		array[i]=B[i];
	}
}
	
		
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

