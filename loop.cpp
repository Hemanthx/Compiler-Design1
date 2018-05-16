#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"\n Enter the number of expressions";
	int n,i;
	char decl[20][20];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\n Enter expression"<<(i+1);
		if(i==0)
			cin.ignore();
		cin.getline(decl[i],20,'\n');
	}
	for(i=0;i<n;i++)
	{
		cout<<decl[i];
	}
}