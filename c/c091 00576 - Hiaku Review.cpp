#include<iostream>
#include<sstream>
using namespace std;

int rn(string s)
{
	int n=0;
	bool dis;
	dis=false;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
		{
			if(!dis)
				n++,dis=true;
		}
		else
			dis=false;
	}
	return n;
}

int main()
{
	string s;
	char a[200],b[200],c[200];
	int la,lb,lc,len;
	int na,nb,nc;
	while(getline(cin,s))
	{
		if(s=="e/o/i")
			break;
		la=lb=lc=len=0;
		for(int i=0;s[i]!='/';i++)
			a[la]=s[i],la++,len++;
		for(int i=len+1;s[i]!='/';i++)
			b[lb]=s[i],lb++,len++;
		for(int i=len+2;i<s.size();i++)
			c[lc]=s[i],lc++,len++;
		a[la]=b[lb]=c[lc]='\0';
		
		/*cout<<"a:"<<a<<endl;
		cout<<"b:"<<b<<endl;
		cout<<"c:"<<c<<endl;*/
		na=nb=nc=0;
		stringstream sa(a);
		stringstream sb(b);
		stringstream sc(c);
		
		while(sa>>s)
			na+=rn(s);			
		while(sb>>s)
			nb+=rn(s);
		while(sc>>s)
			nc+=rn(s);
		
		if(na==5&&nb==7&&nc==5)
			cout<<"Y";
		else if(na!=5)
			cout<<"1";
		else if(nb!=7)
			cout<<"2";
		else
			cout<<"3";
		cout<<endl;
	}
}
