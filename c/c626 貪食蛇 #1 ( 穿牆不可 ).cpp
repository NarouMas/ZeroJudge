#include<iostream>
#include<sstream>
#include<list>
using namespace std;

struct xy
{
	int x;
	int y;
};
list<xy> q;
list<xy>::iterator it;
char p[15][21];

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool collide(xy a)
{
	xy b;
	it=q.begin();
	for(int i=0;i<q.size();i++)
	{
		b=*it;
		if(a.x==b.x&&a.y==b.y)
			return true;
		else
			it++;
	}
	return false;
}
int main()
{
	int x,y,n,index;
	xy a;
	char d;
	string str;
	for(int i=0;i<15;i++)
		for(int j=0;j<21;j++)
		{
			cin>>p[i][j];
			if(p[i][j]=='s')
				x=j,y=i;
		}
	a.x=x,a.y=y;
	q.clear();
	q.push_front(a);
	cin.ignore();
	getline(cin,str);
	stringstream ss(str);
	while(ss>>d)
	{
		ss>>n;
		//cout<<"test  d:"<<d<<" n:"<<n<<endl;
		switch(d)
		{
			case 'E': index=0; break;
			case 'W': index=1; break;
			case 'S': index=2; break;
			case 'N': index=3; break;
		}
		while(n--)
		{
			x+=dx[index],y+=dy[index];
			a.x=x,a.y=y;
			if(a.x<0||a.y<0||a.x>20||a.y>14)
			{
				goto output;
			}
			else if(p[a.y][a.x]=='x')
			{
				goto output;
			}
			else if(collide(a))
			{
				goto output;
			}
			else if(p[a.y][a.x]=='$')
			{
				q.push_front(a);
			}
			else if(p[a.y][a.x]=='o')
			{
				q.push_front(a);
				q.pop_back();
			}
		}
	}
output:
	it=q.begin();
	for(int i=0;i<q.size();i++)
	{
		a=*it;
		cout<<a.x<<" "<<a.y<<endl;
		it++;
	}
}
