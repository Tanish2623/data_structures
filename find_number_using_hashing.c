#include<stdio.h>
#include<stdlib.h>
int find_exist(int arr[],int size,int find)
{
        int arr1[10]={0};
        int i,flag=0;
        for(i=0;i<size;i++)
        {
                arr1[arr[i]]=1;
        }
        if(arr1[find]==1)
	{
		flag=1;
	}
        if(flag==1)
		printf("found");
	else
		printf("not found");
}
int main(int argc,char *argv[])
{
        int i,arr[argc-2],j=0,element;
        for(i=1;i<argc-1;i++){
                arr[j]=atoi(argv[i]);
                j++;
        }
	element=atoi(argv[argc-1]);
//	printf("%d %d",element,arr[3]);
        find_exist(arr,j,element);
        return 0;
}

