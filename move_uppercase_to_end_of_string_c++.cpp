#include<iostream>
using namespace std;
void upper_aside(string str)
{
	int i,size;
	string str1="",str2="";
	size=str.length();
	char ch;
	for(i=0;i<size;i++)
	{
		ch=str[i];
		if(ch>='a'&&ch<='z')
			str1=str1+ch;
		if(ch>='A'&&ch<='Z')
			str2=str2+ch;
	}
	str="";
	str=str1+str2;
	cout<<str;
}
int main(int argc,char *argv[])
{
	string str(argv[1]);
	upper_aside(str);
	return 0;
}

