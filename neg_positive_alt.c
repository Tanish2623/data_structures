#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int i,j=0,arr[argc-1],arr1[argc-1],arr2[argc-1],k=0,l=0,zero=0;
	for(i=1;i<argc;i++)
	{
		arr[j]=atoi(argv[i]);

		if(arr[j]>0){
		  	arr1[k]=arr[j];
			k++;
		}
		else if(arr[j]<0){
			arr2[l]=arr[j];
			l++;
		}
		else{
			zero++;
		}
		j++;
	}
	int m=0,n=0;
	for(i=0;i<j-zero;)
	{
	        if(i<k)
		{
			arr[i]=arr1[m];
			m++;
			l++;
			i++;
		}
		if(i<l)
		{
			arr[i]=arr2[n];
			n++;
			i++;
			k++;
		}
	}
	for(i=j-zero;i<j;i++)
	{
		arr[i]=0;
	}

	for(i=0;i<j;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;

}

