#include<stdio.h>
void main()
{

	int n,i,arr[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);}
	int find;
	scanf("%d",&find);
	for(i=0;i<n;i++)
	{
		if(find==arr[i])
		{
			printf("position is %d",i);
			break;

		}
	}
}
