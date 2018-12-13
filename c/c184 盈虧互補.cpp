#include<iostream>
using namespace std;

int dosum(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
		if(n%i==0)
			sum+=i;
	return sum;
}
int main()
{
	int n;
	int sum;
	while(cin>>n)
	{
		if(n==0)
			break;
	
		if(dosum(n)==n)
			cout<<"="<<n<<endl;
		else if(dosum(n)==dosum(dosum(dosum(n))))
			cout<<dosum(n)<<endl;
		else
			cout<<"0\n";
	}
}
