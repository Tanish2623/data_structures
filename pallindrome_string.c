#include<string.h>
#include<stdio.h>
int pallindrome(char *str)
{
	int i,num,size,count=0;
	size=strlen(str);
	num=size;
	for(i=0;i<size;i++)
	{
		if(str[i]==str[num-1])
			count++;
	}
	if(count==size/2)
		return 1;
	else
		return 0;
}
int main(int argc,char *argv[])
{
	char str[20];
	int i;
	strcpy(str,argv[1]);
	i=pallindrome(str);
	if(i==1)
		printf("string is pallidrome");
	else
		printf("string is not pallindrome");
	return 0;
}
