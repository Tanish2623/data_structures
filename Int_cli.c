#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[argc-1],j=0;
	for(int i=1;i<argc;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
   	printf("Integer value are: \n");
	for(int i=0;i<j;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}

