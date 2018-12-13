#include<iostream>
using namespace std;

int main()
{
	int a[10],b,n;
	while(cin>>a[0])
	{
		for(int i=1;i<10;i++)
			cin>>a[i];
		cin>>b;
		b+=30,n=0;
		for(int i=0;i<10;i++)
			if(b>=a[i])
				n++;
		cout<<n<<endl;
	}
}
