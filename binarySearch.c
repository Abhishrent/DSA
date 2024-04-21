#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int binary_search(int key, int a[], int l, int r);
int main()
{
	int n, m, i, j, key, is_found,temp;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Element%d : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
			
		}
	}

	printf("\nEnter the element to search : ");
	scanf("%d",&key);
	
	is_found = binary_search(key, a, 0, n-1);
	if(is_found != 0)
	{
		printf("Element doesn't found.");
	}

}
int binary_search(int key, int a[], int l, int r)
{
	int mid;
	if(l<r)
	{
		mid = floor((l+r)/2);
		if(a[mid] == key)
		{
			printf("Element found at index %d", mid);
			return 0;
		}
		else if( a[mid] > key)
		{
			r = mid-1;
			binary_search(key,a, l ,r);
		}
		else
		{
			l = mid+1;
			binary_search(key, a, l ,r);
		}
	}	
}

