#include<iostream>
using namespace std;

int main()
{
	float s,d,n;
	float a,b,ca,cb;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>s>>d;
			a=(s+d)/2;
			b=(s-d)/2;
			ca=int(a),cb=int(b);
			if(a<0||b<0)
				cout<<"impossible\n";
			else if(a!=ca||b!=cb)
				cout<<"impossible\n";
			else
				cout<<a<<" "<<b<<endl;
		}
	}
}
