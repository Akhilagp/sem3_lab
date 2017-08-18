#include<iostream>
#include<stack>
using namespace std;
void showstack(stack<int> stk)
{
	stack<int> st=stk;
	if(st.empty())
		{
			cout<<"\n stack empty";
		}
	while(!st.empty())
		{
			cout<<st.top()<<'	';
			st.pop();
		}
}

int main()
{
	int ch,x;
	stack<int> stk;	
	while(1)	
	{
		cout<<"\n1.push\n2.pop\n3.top\n4.size\n5.display\nyour choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n enter element:";
				cin>>x;
				stk.push(x);
				break;
			case 2:
				stk.pop();
				break;
			case 3:
				cout<<"the top element:"<<stk.top();
				break;
			case 4:
				cout<<"the size is:"<<stk.size();
				break;
			case 5:
				showstack(stk);
				break;
		}
	}
}
