#include<stdio.h>
int insert(int arr[], int data, int pos, int size, int *last)
{
	if(*last==-1)
	{
		if(pos==0)
		{
			arr[pos]=data;
			(*last)++;
		}
		else
		{
			printf("Error");
		}
	}
	else
	{
		  if(pos==*last+1)
		  {
			arr[pos]=data;
			(*last)++;
		  }
		  else
		  {
			if(pos<=*last)
			{
			   
			    shiftdown(arr,pos,*last);
			    arr[pos]=data;
			   	(*last)++;
			}
			else
	     	{
			    printf("Error");
		    }
		  }
	}
}
int shiftdown(int arr[], int pos, int last)
{
	int cur_pos;
	cur_pos=last;
	while(cur_pos>=pos)
	{
		arr[cur_pos+1]=arr[cur_pos];
		cur_pos--;
	}
}
int delet(int arr[], int pos, int *last)
{
	if(*last==-1)
	{
		return 0;
	}
	else
	{
		if(pos==*last)
		{
			*last--;
			return 1;
		}
		else
		{
			if(pos<*last)
			{
				arr[pos]--;
			    shiftup(arr,pos,*last);
				*last--;
				return 1;
			}
		}
	}
}
int shiftup(int arr[], int pos, int last)
{
	int cur_pos=last;
	while(cur_pos>=pos)
	{
		arr[pos]=arr[pos+1];
		pos++;
	}
}
int main()
{
	int arr[100]={1,2,3,4,5};
	int size=5;
	int last=4;
	int status,i;
	int data,pos;
	printf("Array elements are :");
	for(i=0;i<=last;i++)
	{
		printf("\t%d",arr[i]);
	}
	printf("\nEnter Data :");
	scanf("%d",&data);
	printf("Enter Position :");
	scanf("%d",&pos);
	pos=pos-1;
	status=insert(arr,data,pos,size,&last);
	{
		printf("Updated Array :");
		for(i=0;i<=last;i++)
		{
		  	printf("\t%d",arr[i]);	
		}
	}
	printf("\nEnter Position do you want delete :");
	scanf("%d",&pos);
	pos=pos-1;
	status=delet(arr,pos,&last);
	{
		printf("After deletion Updated Array :");
		for(i=0;i<last;i++)
		{
		  	printf("\t%d",arr[i]);	
		}
	}
}
