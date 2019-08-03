#include<stdio.h>
#include<stdlib.h>
void reverse_the_rotation(int arr[],int size)
{
	int i,j,count=1;
	for(i=0;i<size-1;i++)
	{
		if(arr[i]<arr[i+1])
		{
			count++;
		}
		else
		{
			break;
		}
	}
	for(i=0;i<count;i++)
	{
			int temp;
			temp=arr[0];
			for(j=1;j<size;j++)
			{
				arr[j-1]=arr[j];
			}
			arr[size-1]=temp;
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
	int i,j=0,n,arr[argc-1];
	for(i=1;i<argc;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	reverse_the_rotation(arr,j);
	print_array(arr,j);
	return 0;
}
