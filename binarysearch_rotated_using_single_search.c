#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[],int start,int end,int find)
{
	if(start>end)
		return -1;
        int mid=start+(end-start)/2;
        if(find==arr[mid])
                return mid;
	if(arr[start]<=arr[mid])
	{
		if(find>=arr[start]&&find<=arr[mid])
                 return binary_search(arr,start,mid-1,find);
                return binary_search(arr,mid+1,end,find);
	}
	if(find>=arr[mid+1]&&find<=arr[end])
	{
		return binary_search(arr,mid+1,end,find);
	}
		  return binary_search(arr,start,mid-1,find);
      
}
int main(int argc,const char *argv[])
{
        int arr[argc-2],find,i,j=0,result;
        for(i=1;i<argc-1;i++)
        {
		arr[j]=atoi(argv[i]);
                j++;
        }
        find=atoi(argv[argc-1]);
        result=binary_search(arr,0,j-1,find);
	printf("%d",result);
        return 0;
}
