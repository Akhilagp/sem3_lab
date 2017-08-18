#include<iostream>
#include<cstdlib>
#include<list>

using namespace std;
void display_list(list<int> lis)
{
	list<int> l=lis;
	list<int>::iterator it;
	if(l.empty())
	{
		cout<<"\n list empty\n";
	}

	for(it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<'	';
	}
}
int main()
{
int ch,ch_1,x;
list<int> l;
while(1)
{
cout<<"\n1.insert\n2.delete\n3.display\n4.reverse\n5.sort\nyour choice:";
cin>>ch;
switch(ch)
{
case 1:
	cout<<"\n1.at beginning\n2.at end\nyour choice:";
	cin>>ch_1;
	switch(ch_1)
	{
	case 1:
		cout<<"\n enter element:";
		cin>>x;
		l.push_front(x);
		break;
	//case 2:
		
	//	break;
	case 2:
		cout<<"\n enter element:";
		cin>>x;
		l.push_back(x);
		break;
	default:
		exit(0);
	}
	break;
case 2:
	cout<<"\n1.at beginning\n2.at end\nyour choice:";
	cin>>ch_1;
	switch(ch_1)
	{
	case 1:
		l.pop_front();
		break;
	//case 2:
		
	//	break;
	case 2:
		l.pop_back();
		break;
	default:
		exit(0);
	}
	break;
case 3:
	display_list(l);
	break;
case 4:
	l.reverse();
	display_list(l);
	break;
case 5:
	l.sort();
	display_list(l);
	break;
default:
	exit(0);
}
}
}
