#include<stdio.h>
void main()
{
	int k,i,n,a[20],j,small,pos,temp;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the element of the array:\t");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The sorted array is:\n");
	for(i=0;i<(n-1);i++)
	{
	        small=a[i];
	        pos=i;
	        printf("\nPass %d\n",i+1);
	        for(k=0;k<n;k++)
	        {
	                printf("%d\t",a[k]);
	                printf("\n");
                }
	        for(j=i+1;j<n;j++)
	        {
	                if(small>a[j])
	                {
	                        small=a[j];
	                        pos=j;
	                }
	        }
	        temp=a[i];
	        a[i]=a[pos];
	        a[pos]=temp;
        }
        
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
}
