#include<iostream>
using namespace std;

int main()
{
	char in1[300],in2[300],in3[300],a[26];
	int n;
	bool dis;
	while(cin>>in1>>in2>>in3)
	{
		dis=true;
		for(int i=0;i<26;i++)
			a[i]='0';
		for(int i=0;in1[i]!='\0';i++)
		{
			n=int(in1[i]-'A');
			if(a[n]=='0')
			{
				a[n]=in2[i];
				for(int j=0;j<26;j++)
					if(n!=j&&a[n]==a[j])
						dis=false;
			}
				
			else if(in2[i]!=a[n])
			{
				dis=false;
				break;
			}
		}
		for(int i=0;i<26;i++)
			if(a[i]=='0')
				dis=false;
		if(dis)
		{
			for(int i=0;in3[i]!='\0';i++)
			{
				n=int(in3[i]-'A');
				cout<<a[n];
			}
		}
		else
			cout<<"Failed";
		cout<<endl;
	}
}
