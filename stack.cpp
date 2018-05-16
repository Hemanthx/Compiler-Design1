// stack storage allocation 
// implementation through c++ struct array data structure
#include<bits/stdc++.h>
using namespace std;
#define max 100
class Stack 
{
		
	public:
		int top;
		int array[max];
		Stack()
		{	
			top =-1;
		}
		int push(int x)
		{
			if(top >= max)
			{
				cout<<"\n Overflow";
				return 0;
			}
			else
			{
				array[++top] = x;
				cout<<"\n Element pushed";
				return 1;
			}
		}
		int pop()
		{
			if(top ==-1)
			{
				cout<<"\n Underflow";
				return 0;
			}
			else
			{
				int element = array[top--];
				cout<<"\n Element deleted";
				return element;
			}
		}
		int display()
		{
			int i=0;
			while(i<=top)
			{
				cout<<array[i]<<"-->";
				i++;
			}
	return 0;
		}
}s;
int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(348);
	s.pop();
	s.display();
}