#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int i,arr[argc-1],j=0;
	for(i=1;i<argc;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	int *ptr=arr;
 	int num=j-1;
	for(i=0;i<j/2;i++)
	{
	  	int temp=*(ptr+i);
		*(ptr+i)=*(ptr+num);
		*(ptr+num)=temp;
		num--;
	}
	for(i=0;i<j;i++)
		printf("%d ",*(ptr+i));
	return 0;
}
