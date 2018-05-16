// tokenisation using lexical analyser with spaces 
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
	char a[100];
	char b[100][100];
	int i=0,j=0,k=0;
	cout<<"\n Enter the string\n ";
	fgets(a,100,stdin);
	for(i=0;i<strlen(a);i++)
		{
			if(a[i]==' ')
			{
				if(a[i+1]!= ' ')
				{
					b[k][j] = '\0';
					j=0;
					k++;
				}
				continue;
			}
			else
			{
				b[k][j++] = a[i];
			}
		}
		for(i=0;i<=k;i++)
		{
			cout<<b[i]<<endl;
		}
		return 0;
}