#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int i,k,j=0,arr[argc-1];
	for(i=1;i<argc;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	printf("Enter number of rotation:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		int temp=arr[j-1];
		for(int u=j-2;u>=0;u--)
		{
			arr[u+1]=arr[u];
		}
		arr[0]=temp;
	}
	for(i=0;i<j;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

