#include<stdio.h>
#include<stdlib.h>
#define M 5
#define N 4
void rotate1(int rows,int cols,int m,int n,int arr[M][N])
{
	if(rows>=m ||cols>=n)
		return;
	if(rows+1==m||cols+1==n)
		return;
	int curr;
	int prev=arr[rows+1][cols];
	 for (int i=cols;i<n;i++)
        {
            curr=arr[rows][i];
            arr[rows][i]=prev;
            prev=curr;
        }
        rows++;
        for(int i=rows;i<m;i++)
        {
            curr=arr[i][n-1];
            arr[i][n-1]=prev;
            prev=curr;
        }
	n--;
	for(int i=n-1;i>=cols;i--)
	{
		curr=arr[m-1][i];
		arr[m-1][i]=prev;
		prev=curr;
	}
	m--;
	for(int i=m-1;i>=rows;i--)
	{
		curr=arr[i][cols];
		arr[i][cols]=prev;
		prev=curr;
	}
	cols++;
	rotate1(rows,cols,m,n,arr);

}
int main(int argc,const char *argv[])
{
	int arr[M][N],i,j,k=1;
	for(i=0;i<M;i++){
		for(j=0;j<N;j++)
		{
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
	for(i=0;i<1;i++)
		rotate1(0,0,M,N,arr);
	 for(i=0;i<M;i++)
        {
                for(j=0;j<N;j++)
                {
                        printf("%d ",arr[i][j]);
                }
                printf("\n");
        }

	return 0;
}
