#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	long long n[30],e[30],o[30];
	int k,t;
	while(cin>>s)
	{
		for(int i=0;i<s.size();i++)
			if(s[i]==',')
				s[i]=' ';
		k=0;
		stringstream ss(s);
		while(ss>>n[k++]);
		k--;
		/*cout<<"k:"<<k<<endl;
		cout<<"n:";
		for(int i=0;i<k;i++)
			cout<<n[i]<<" ";
		cout<<endl;*/
		t=0;
		for(int j=0;j<=k;t++,j+=2)
			o[t]=n[j];
		/*cout<<"o:";
		for(int i=0;i<t;i++)
			cout<<o[i]<<" ";
		cout<<"  t:"<<t<<endl;*/
		sort(o,o+t);
		t=0;
		for(int j=1;j<=k;t++,j+=2)
			e[t]=n[j];
		/*cout<<"e:";
		for(int i=0;i<t;i++)
			cout<<e[i]<<" ";
		cout<<"  t:"<<t<<endl;*/
		sort(e,e+t);
		t=0;
		for(int i=0;t<k;i++)
		{
			if(t<k)
			{
				if(t!=k-1)
					cout<<o[i]<<',';
				else
					cout<<o[i];
				t++;
			}
			if(t<k)
			{
				if(t!=k-1)
					cout<<e[i]<<',';
				else
					cout<<e[i];
				t++;
			}
		}
		cout<<endl;
	}
}
