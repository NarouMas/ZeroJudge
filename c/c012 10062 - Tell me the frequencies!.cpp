#include<iostream>
using namespace std;

int main()
{
	char a[1000];
	int len,b[1000];
	bool space;
	for(int i=0;i<1000;i++)
	{
		a[i]=' ';
		b[i]=0;
	}
	while(cin.getline(a,1000))
	{
		//cout<<a[0]<<"\n";
		len=0;
		
			
		for(int i=0;i<1000;i++)
		{
			space=true;
			if(len!=0)
				break;
			if(a[i]==' ')
			{
				for(int j=i;j<1000;j++)
					if(a[j]!=' ')
						space=false;
				if(space)
					len=i;
			}
		}
		//for(int i=0;i<100;i++)
		//	cout<<a[i];
		//cout<<endl<<len<<endl;
		len--;
		for(int i=0;i<len;i++)
		{
			b[int(a[i])]++;
		}
		for(int i=999;i>=0;i--)
			if(b[i]!=0)
				cout<<i<<" "<<b[i]<<endl;
		for(int i=0;i<1000;i++)
		{
			a[i]=' ';
			b[i]=0;
		}
	}
}
