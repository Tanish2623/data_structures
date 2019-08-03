#include<stdio.h>
#include<stdlib.h>
void minimal_rotation(int arr[],int size)
{
	int pivot,shift=0,i;
	for(i=0;i<size-1;i++)
	{
		if(arr[i]>arr[i+1])
			break;
	}
	pivot=i+1;
	if(pivot>size/2)
	{
		shift=size-pivot;
		printf("right shift\n");
		printf("shift require : %d",shift);
	}
	else
	{
		if(size%2==0)
		{
			shift=size/2;
			printf("left and right rotation is same\n");
			printf("shift require :%d",shift);
		}
		else
		{
			shift=pivot;
			printf("left rotate");
		 	printf("shift require :%d",shift);
		}
	}
}
int main(int argc,const char *argv[])
{
        int arr[argc-1],i,j=0;
        for(i=1;i<argc;i++)
        {
                arr[j]=atoi(argv[i]);
                j++;
        }
        minimal_rotation(arr,j);
        return 0;
}

