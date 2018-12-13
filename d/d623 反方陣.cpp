#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a,b,c,d;
	double e;
	while(cin>>a>>b>>c>>d)
	{
		if(a==0&&b==0&&c==0&&d==0)
			break;
			
		e=(a*d)-(b*c);
		if(e==0)
		{
			cout<<"cheat!\n";
			break;
		}
		
		cout<<fixed<<setprecision(5)<<d/e<<" "<<(b*-1)/e<<endl
			<<(c*-1)/e<<" "<<a/e<<endl;
	}
}
