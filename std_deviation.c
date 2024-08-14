#include<stdio.h>
#include<math.h>
float cal_mean(int n,int a[])
{
    float mean;
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}

	return (float)sum/n;
}
float variance(float mean,int a[],int n)
{
	int i;
	float x,y,vari;
	float variance=0;
	for(i=0;i<n;i++)
	{
	    x=a[i]-mean;
	    y=x*x;
		vari=vari+y;
	}
	variance=vari/n;
	return variance;
}
float sd(float variance)
{
	return sqrt(variance);
}

int main()
{
	int i,n;
	printf("Enter Size of array :");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	float mean,var,std_dev;
	 mean=cal_mean(n, a);
	 var=variance( mean,a,n);
	 std_dev=sd(var);
	 printf("Mean : %.2f\n",mean);
	 printf("Variance : %.2f\n",var);
	 printf("Standard Deviation : %.2f\n",std_dev);
}
