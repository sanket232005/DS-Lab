#include<stdio.h>
int main()
{
	int n,temp,i,j;
	printf("Enter Size of array :");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{   
		for(j=0;j<n-1-i;j++)
		{
		   if(a[j]>a[j+1])
		   {
		   	  temp=a[j];
		   	  a[j]=a[j+1];
		   	  a[j+1]=temp;
		   	  
		   }	
		}
		
	}
    printf("The Sortted Array :");
    for(i=0;i<n;i++)
    {
    	printf(" %d\t",a[i]);
	}
}
