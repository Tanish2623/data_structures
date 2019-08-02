#include<stdio.h>
#include<stdlib.h>
void right_rotate_array(int arr[],int rotation,int size)
{
	int i,temp[rotation],size_of_temp=0;
	 for(i=size-rotation;i<size;i++)
        {
                temp[size_of_temp]=arr[i];
                size_of_temp++;
        }
        for(i=size-rotation-1;i>=0;i--)
        {
                arr[i+rotation]=arr[i];
        }
        for(i=0;i<size_of_temp;i++)
        {
                arr[i]=temp[i];
        }

}
void print(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
                printf("%d",arr[i]);

}
int main(int argc,char *argv[])
{
	int arr[argc-1],i,j=0,k,f=0;
	for(i=1;i<argc-1;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	k=atoi(argv[argc-1]);
	right_rotate_array(arr,k,j);
	for(i=0;i<j;i++)
		printf("%d",arr[i]);
	return 0;
}
