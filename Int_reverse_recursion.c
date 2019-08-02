#include<stdio.h>
#include<stdlib.h>
void reverse(int *arr,int i,int j){
	if(i>=j)
		return;
	else
	{
		int temp=arr[i];
		    arr[i]=arr[j-1];
		    arr[j-1]=temp;
		    reverse(arr,i+1,j-1);
	}
}
int main(int argc,const char *argv[])
{
	int arr[argc-1],j=0,i;
	for(i=1;i<argc;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	reverse(arr,0,j);
       for(i=0;i<argc-1;i++)
	       printf("%d ",arr[i]);
       return 0;
}
