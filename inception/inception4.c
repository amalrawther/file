#include<stdio.h>
int sort(int a[10],int b);
void main()
{
	int n,i,a[10],temp;
	printf ("Enter the number of array\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The given array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<(n-i-1);j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
			printf("\nPass: %d\n",i+1);
			for(int k=0;k<n;k++)
			printf("%d\t",a[k]);
		}
		printf("\nsorted array\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
}
