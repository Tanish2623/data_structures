#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[],int start,int end,int find);
int find_pivot(int arr[],int size);
void pivot_binary(int arr[],int size,int find)
{
	int i,pivot,result1,result2;
	pivot=find_pivot(arr,size);
	result1=binary_search(arr,0,pivot,find);
	if(result1==-1)
	{
		result2=binary_search(arr,pivot+1,size-1,find);
	}
	if(result1!=-1)
		printf("index is %d",result1);
	else
		printf("index is %d",result2);
}
int binary_search(int arr[],int start,int end,int find)
{
	if(start <= end)
	{
	int mid=start+(end-start)/2;
	if(find==arr[mid])
		return mid;
	else if(find<arr[mid])
		return binary_search(arr,start,mid-1,find);
	else
		return binary_search(arr,mid+1,end,find);
	}
	return -1;
}
int find_pivot(int arr[],int size)
{
	int i;
	for(i=0;i<size-1;i++)
	{
		if(arr[i]>arr[i+1])
				break;
	}
	return i;
}
int main(int argc,const char *argv[])
{
	int arr[argc-2],find,i,j=0;
	for(i=1;i<argc-1;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	find=atoi(argv[argc-1]);
	pivot_binary(arr,j,find);
	return 0;
}
