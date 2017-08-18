#include<iostream>
#include<queue>
using namespace std;
void showqueue(queue<int> que)
{
	queue<int> qu=que;
	if(qu.empty())
		{
			cout<<"\n queue empty";
		}
	while(!qu.empty())
		{
			cout<<qu.front()<<'	';
			qu.pop();
		}
}

int main()
{
	int ch,x;
	queue<int> que;	
	while(1)	
	{
		cout<<"\n1.enqueue\n2.dequeue\n3.front\n4.back\n5.size\n6.display\nyour choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n enter element:";
				cin>>x;
				que.push(x);
				break;
			case 2:
				que.pop();
				break;
			case 3:
				cout<<"\nthe front element:"<<que.front();
				break;
			case 4:
				cout<<"\nthe back element:"<<que.back();
				break;
			case 5:
				cout<<"the size is:"<<que.size();
				break;
			case 6:
				showqueue(que);
				break;
		}
	}
}
