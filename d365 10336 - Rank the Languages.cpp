#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
using namespace std;

class letter
{
public:
	int n;
	int index;
};

char p[100][100];
letter l[26];

void f(int h,int w,char a,bool d)
{
	if(d)
		l[int(a-'a')].n++,d=false;
	if(p[h][w]==a)
	{
		p[h][w]='.';		
		f(h-1,w,a,d);
		f(h+1,w,a,d);
		f(h,w+1,a,d);
		f(h,w-1,a,d);
	}
	
}

bool cmp(letter a,letter b)
{
	if(a.n!=b.n)
		return a.n>b.n;
	else
		return a.index<b.index;
}

int main()
{
	int n,h,w,nn;
	bool d;
	nn=1;
	cin>>n;
	while(n--)
	{
		for(int i=0;i<26;i++)
			l[i].index=i,l[i].n=0;
		memset(p,'.',sizeof(p));
		cin>>h>>w;
		for(int i=1;i<=h;i++)
			for(int j=1;j<=w;j++)
				cin>>p[i][j];
		for(int i=1;i<=h;i++)
		{
			for(int j=1;j<=w;j++)
			{
				d=true;
				if(p[i][j]!='.')
					f(i,j,p[i][j],d);
			}
		}
		sort(l,l+26,cmp);
		cout<<"World #"<<nn<<endl;
		for(int i=0;l[i].n!=0;i++)
			cout<<char(l[i].index+'a')<<": "<<l[i].n<<endl;
		nn++;
	}
}
