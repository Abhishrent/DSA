#include<stdio.h>
#include<conio.h>
int linearsearch(int A[100],int n,int key)
{
	int i,temp;
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(A[i]==key)
		{
			flag=1;
			temp=i;
		}
	}
		if(flag==1)
		      printf("Search %d is at location %d\n",key,temp);
			else
			printf("Search not found");
}
int main()
{
	int A[100],i,n,key;
	printf("\t\t****************************************\n");
      printf("\t\t\t     Linear Search\n");
      printf("\t\t**************************************\n");
      printf("Enter the number of elements in an array:\n");
	scanf("%d",&n);
	printf("Enter %d numbers \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the value to serach:");
	scanf("%d",&key);
	linearsearch(A,n,key);
}

