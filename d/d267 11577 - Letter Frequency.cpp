#include<iostream>
using namespace std;

int main()
{
	char a[300];
	int n,len,c[26],m;
	while(cin>>n)
	{
		cin.ignore();
		while(n--)
		{
			for(int i=0;i<26;i++)
				c[i]=0;
			cin.getline(a,300);
			for(int i=0;a[i]!='\0';i++)
			{
				if(a[i]>='A'&&a[i]<='Z')
					c[int(a[i]-'A')]++;
				else if(a[i]>='a'&&a[i]<='z')
					c[int(a[i]-'a')]++;
			}
			m=0;
			for(int i=0;i<26;i++)
				if(c[i]>m)
					m=c[i];
			for(int i=0;i<26;i++)
				if(m==c[i])
					cout<<char(i+'a');
			cout<<endl;
		}
	}
}
