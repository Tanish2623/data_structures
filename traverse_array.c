#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,'\0'};
	int *ptr=arr;
/*	for(int i=0;i<4;i++)
		printf("%d",*(ptr+i));*/
	while(*ptr!='\0')
	{
		printf("%d",*ptr);
		ptr++;
	}
	return 0;
}

