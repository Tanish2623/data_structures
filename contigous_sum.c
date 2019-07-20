#include <stdio.h>
#include <stdlib.h>
int main(int argc,const char *argv[])
{
   int n,i,j=0,k,max=0,sum=0,start,end;
   int arr[argc-1];
   for(i=1;i<argc;i++)
   {
	arr[j]=atoi(argv[i]);
	j++;
   }
   n=argc-1;
    for(k=0;k<n;k++)
    {
  //  printf(" k=%d\n",arr[k]);
        for(i=k;i<n;i++)
        {
            for(j=k;j<=i;j++)
            {
                sum=sum+arr[j];
            }
  //               printf("%d\n",sum);
                if(sum>max)
                {
                    start=k;
                    end=i;
                    max=sum;
                }
                sum=0;
           
        }
    }
    printf("%d %d %d",max,start,end);
    return 0;
}
