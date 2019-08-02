#include <stdio.h>
#include <stdlib.h>
void sub_array(int arr[],int size)
{
	int i,j,k,max=0,sum=0,start,end;
         for(k=0;k<size;k++)
   	 {
       	 for(i=k;i<size;i++)
       	 {
            for(j=k;j<=i;j++)
            {
		printf("%d ",arr[j]);
                sum=sum+arr[j];
            }
	    	printf("\n");	
  	    //    printf("%d\n",sum);
                if(sum>max)
                {
                    start=k;
                    end=i;
                    max=sum;
                }
                sum=0;
        }
    }
    printf("The largest sum is %d starting with index %d and ending with %d",max,start,end);
	
}
int main(int argc,const char *argv[])
{
   int n,i,j=0,k,max=0,sum=0,start,end;
   int arr[argc-1];
   for(i=1;i<argc;i++)
   {
	arr[j]=atoi(argv[i]);
	j++;
   }
   sub_array(arr,j);
    return 0;
}
