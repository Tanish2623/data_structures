#include<stdio.h>
#include<stdlib.h>
int main(int argc ,const char *argv[])
{
	int i,j=0;
	int arr[argc-1];
	for(i=1;i<argc;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	int num=j;
	for(i=0;i<j/2;i++)
	{
	        int temp=arr[i];
		  arr[i]=arr[num-1];
		  arr[num-1]=temp;
		  num--;
	}
	for(i=0;i<j;i++)
	{
		printf("%d",arr[i]);
	}

	return 0;

}
