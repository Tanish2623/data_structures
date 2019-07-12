#include<stdio.h>
int main()
{
	int find,i,n,arr[10];
        printf("Enter number of element\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\nEnter Number:");
	scanf("%d",&find);
	int l=0,r=n;
        while(l<=r)
	{
		int mid;
		 mid=(l+r)/2;
		if(arr[mid]==find)
		{
			printf("position is %d",mid+1);
			break;
		}
		else if(find<arr[mid])
		{
			r=mid-1;
		}
		else
		{
			l=mid;
		}
	}
	if(l>r)
		printf("Element not found");

}

