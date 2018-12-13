#include<iostream>
using namespace std;

bool year4(int i)
{
	if(i%400==0)
		return true;
	else if(i%100==0)
		return false;
	else if(i%4==0)
		return true;
	else
		return false;
}
int main()
{
	int year[10000];
	year[1]=365;
	for(int i=2;i<10000;i++)	
	{
		if(year4(i))
			year[i]+=year[i-1]+366;
		else
			year[i]+=year[i-1]+365;
		
	}
	int y1,m1,d1,y2,m2,d2;
	int t1,t2;
	while(cin>>y1>>m1>>d1>>y2>>m2>>d2)
	{
		t1=t2=0;
		if(y1!=0)
			t1+=year[y1-1];
		for(int i=1;i<m1;i++)		
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
				t1+=31;
			else if(i==2)
			{
				if(year4(y1))
					t1+=29;
				else
					t1+=28;
			}
			else
				t1+=30;
		}
		for(int i=1;i<d1;i++)
			t1++;
		if(y2!=0)
			t2+=year[y2-1];
		for(int i=1;i<m2;i++)		
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
				t2+=31;
			else if(i==2)
			{
				if(year4(y2))
					t2+=29;
				else
					t2+=28;
			}
			else
				t2+=30;
		}
		for(int i=1;i<d2;i++)
			t2++;
		
		int d;
		d=t1-t2;
		if(d>0)
			cout<<d<<endl;
		else
			cout<<d*-1<<endl;
	}
}
