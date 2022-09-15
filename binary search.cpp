#include<stdio.h>
int main()
{
	int a[100],i,n,j,e;
	printf("Enter no of ele:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array is:");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	printf("Enter element to search:");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(n%2!=0)
	    {
		    if(a[i+1/2]==e)
		    {
		    	printf("%d",i+1);
			}
			else if(e<(a[i+1/2]))
			{
				for(j=0;j<i/2;i++)
	            {
		            if(a[j]==e)
		            {
			            printf("Position is: %d",j+1);
		            }
	            }
			}
	    }
	}
	
}
