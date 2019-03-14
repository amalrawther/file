#include<stdio.h>
#define MAX 20
void main()
{
	int a[MAX],i,j,k,n;
	printf("Enter the number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element %d ",i+1);
		scanf("%d",&a[i]);
	}
	printf("unsorted list:\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	for(j=1;j<n;j++)
	{
		k=a[j];
		for(i=j-1;i>=0&&k<a[i];i--)
		{
			a[i+1]=a[i];
		}
		a[i+1]=k;
		printf("Pass %d\n",j);
		for(int m=0;m<n;m++)
		printf("%d\n",a[m]);
	}
	printf("Sorted list:\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
