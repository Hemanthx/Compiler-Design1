#include<iostream>
#include<stdio.h>
#include<string.h>
#include<fstream>
using namespace std;
struct code
{
	char line[20];
	bool keep;
}c[50];
char lines[15][20];
int count=0;
bool check(char var, int index)
{
	int i=index+1;
	bool used=false;
	while(i<count)
	{
		bool assign=false;
		for(int j=0;lines[i][j]!='\0';j++)
		{
			if(lines[i][j]=='=' || lines[i][j]=='(')
			{
				assign=true;
				continue;
			}
			if(assign==true&& lines[i][j]==var)
				used=true;
		}
		if(lines[i][0]==var)
			break;
		i++;
	}
	if(used)
		return true;
	else
		return false;
}
int main()
{
	ifstream fin("sample.txt");
	while(fin)
	{
		fin.getline(lines[count++],20);
	}
	char curVar;
	int varInd=0;
	int curr=0;
	while(curr<count-1)
	{
		strcpy(c[curr].line,lines[curr]);
		curVar=lines[curr][0];
		for(int i=0;i<strlen(lines[curr]);i++)
		{
			if(lines[curr][i]=='(')
			{
				c[curr].keep=true;
				varInd=0;
				break;
			}
			if(lines[curr][i]=='=')
			{
				if(check(curVar,curr))
				{
					c[curr].keep=true;
					break;
				}
				else
				{
					c[curr].keep=false;
					break;
				}
			}
		}
		curr++;
	}
	c[count-2].keep=true;
	for(int i=0;i<count;i++)
	{
		if(c[i].keep==true)
			cout<<c[i].line<<endl;
	}
	return 0;
}
