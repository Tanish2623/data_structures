#include<stdio.h>
#include<stdlib.h>
void binary_search(int arr[],int size,int find,int count);
void reverse_array(int arr[],int size,int find)
{
	int i,count=1,pos=-1;
	for(i=0;i<size-1;i++)
	{
		if(arr[i]<arr[i+1])
		{
			count++;
			pos=i+1;
		}
		else
			break;

	}
	int temp[count],j=0;
	for(i=0;i<=pos;i++)
	{
		temp[j]=arr[i];
		j++;
	}
	for(i=pos+1;i<size;i++)
	{
		arr[i-count]=arr[i];
	}
	j=0;
	for(i=size-count;i<size;i++)
	{
		arr[i]=temp[j];
		j++;
	}

/*	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}*/
	 binary_search(arr,size,find,count);

}
void binary_search(int arr[],int size,int find,int count)
{
	int mid,start=0,end=size;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(find==arr[mid])
		{
			mid=mid+count;
			if(mid>=5)
			{
				mid=mid-size;
			}
			printf("index of %d is %d",find,mid);
			break;
		}
		else if(find<arr[mid])
		{
			end=mid;
		}
		else
		{
			start=mid+1;
		}
	}
}
int main(int argc,char *argv[])
{
	int i,j=0,arr[argc-1],find;
	for(i=1;i<argc-1;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	find=atoi(argv[argc-1]);
	reverse_array(arr,j,find);
	return 0;
}
