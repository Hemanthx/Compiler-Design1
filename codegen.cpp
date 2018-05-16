#include <bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
	char str[100];
	int flag =0;
	cout<<"\n Enter an expression";
	cin.getline(str,100);
	for(int i=0;i<strlen(str);i++)
		{
			if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
			{
				int j=(i-1);
				cout<<str[i];
			//first operand 
		
		while(str[j]!= '=')
		{
			j--;
		}
		j++;
		cout<<j;
		cout<<"\n MOV AX ,";
		while(j!=i)
		{
			if(str[j]!= ' ')
				cout<<str[j];
			if(isalpha(str[j]))
				flag=1;
			j++;
		}
		if(flag==0)
			cout<<"H";
		flag =0;
		j=i+1;
		//second operand
		cout<<"\n MOV BX , ";
		while(str[j]!=';')
		{
			if(str[j]!= ' ')
				cout<<str[j];
			if(isalpha(str[j]))
				flag=1;
			j++;
		}
		if(flag==0)
			cout<<"H";
		switch(str[i])
		{
			case '+': { cout<<"\n ADD AX,BX"; break;}
			case '-': {cout<<"\n SUB AX,BX"; break;}
			case '*': {cout<<"\n MUL AX"; break;}
			case '/': {cout<<"\n DIV AX"; break;}
		}
		}
	}
		// final value stored in AX
	cout<<"\nMOV ";
	for(int i=0;str[i]!= '=';i++)
	{
		if(str[i]!= ' ')
			cout<<str[i];
	}
	cout<<",AX";
}