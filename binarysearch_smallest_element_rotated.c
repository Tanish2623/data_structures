#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[],int start,int end,int find)
{
	int small=find;
        if(start>end)
                return small;
        int mid=start+(end-start)/2;
	if(arr[mid]<small)
		small=arr[mid];
        if(arr[start]<=arr[mid])
        {
                if(small>arr[start]&&small<=arr[mid])
                 return binary_search(arr,start,mid-1,small);
                return binary_search(arr,mid+1,end,small);
        }
        if(small>arr[mid+1]&&small<=arr[end])
        {
                return binary_search(arr,mid+1,end,small);
        }
                  return binary_search(arr,start,mid-1,small);

}
int main(int argc,const char *argv[])
{
        int arr[argc-1],find,i,j=0,result;
        for(i=1;i<argc;i++)
        {
                arr[j]=atoi(argv[i]);
                j++;
        }
	find=atoi(argv[argc-1]);
        result=binary_search(arr,0,j-1,find);
        printf("%d",result);
        return 0;
}
