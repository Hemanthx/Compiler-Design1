// lexical analyser using c++ without space 
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int i=0,j=0,k=0;
	char a[100];
	cout<<"\n Enter a string \n";
	fgets(a,100,stdin);
	for(i =0 ;i<strlen(a);i++)
	{
		if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='%')
			{
				cout<<a[i]<<endl;
			}
			else
			{
				cout<<a[i]<<endl;
			}
	}
	return 0;

}