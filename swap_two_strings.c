#include<stdio.h>
#include<string.h>
void swap(char *str1,char *str2)
{
	char str[10];
	strcpy(str,str1);
	strcpy(str1,str2);
	strcpy(str2,str);
	printf("%s %s",str1,str2);

}
int main(int argc,char *argv[])
{
	char str1[10],str2[10];
	strcpy(str1,argv[1]);
	strcpy(str2,argv[2]);
	swap(str1,str2);
	return 0;
}

