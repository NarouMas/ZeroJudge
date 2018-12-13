#include<iostream>
using namespace std;

int main()
{
	int w,v1,v2,len,x,y;
	char s[1000];
	x=0,y=100;
	cin>>w>>v1>>v2;
	for(int i=0,j=v1;i<w;i++,j++)
	{
		for(len=0;len<j;len++)
		{
			x=(x+4)*3+1+y;
			y=y*3-1;
			if(len%2==0)
				s[len]=char('a'+(x%24));
			else
				s[len]=char('A'+(x%24));
			if(x>1000000)
				x=x%6541;
			if(y>10000)
				y=y%4586;
		}
		for(int k=0;k<len;k++)
			cout<<s[k];
		cout<<": hello, ";
		for(int k=0;k<len;k++)
			cout<<s[k];
		cout<<endl;
		if(j>=v2)
			j=v1;
		
	}	
}
