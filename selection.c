#include<stdio.h>
void main()
{
	int a[30],i,j,n,temp;
	printf("enter size of an array:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("sorted list of elements:\n");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);
}
	

