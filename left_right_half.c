#include<stdio.h>
#include<stdlib.h>
void left_right_rotate(int arr[], int k,int size)
{
	int i,j,temp;
	for(i=0;i<k;i++)
	{
		temp=arr[0];
		for(j=1;j<size/2;j++)
		{
			arr[j-1]=arr[j];
		}
		arr[size/2-1]=temp;
	
		temp=arr[size-1];
		for(j=size-1;j>size/2;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[size/2]=temp;
	}
}
void print_array(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main(int argc,const char *argv[])
{
	int i,j=0,arr[argc-2],k;
	for(i=1;i<argc-1;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	k=atoi(argv[argc-1]);
	left_right_rotate(arr,k,j);
	print_array(arr,j);
	return 0;
}
