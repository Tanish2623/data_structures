#include<stdio.h>
#include<stdlib.h>
int highest_freq(int arr[],int size)
{
	int arr1[10]={0};
	int i,element=0,max=0;
	for(i=0;i<size;i++)
	{
		arr1[arr[i]]++;
	}
	max=arr1[0];
	for(i=1;i<10;i++)
	{
		if(max<arr1[i]){
			max=arr[i];
			element=i;
		}
	}
	return element;
}
int main(int argc,const char *argv[])
{
	int i,arr[argc-1],j=0,element;
	for(i=1;i<argc;i++){
		arr[j]=atoi(argv[i]);
		j++;
	}
	element=highest_freq(arr,j);
	printf("highest frequency of element is %d",element);
	return 0;
}
