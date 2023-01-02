#include<stdio.h>
void main()
{
	int a[30],i,j,n,temp;
	printf("enter size of an array:");
	scanf("%d",&n);
	printf("enter the elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>0 &&a[j-1]>a[j])
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
	printf("sorted list of elements:\n");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);
}

