#include<iostream>
#define size 30005
using namespace std;

long long int dp[size];
long long int s[5]={1,5,10,25,50};

int main()
{	
	int n;
	for(int i=1;i<size;i++)
		dp[i]=0;
	dp[0]=1;
	for(int i=0;i<5;i++)
		for(int j=s[i];j<size;j++)
			dp[j]+=dp[j-s[i]];
	while(cin>>n)
	{
		if(dp[n]==1)
			cout<<"There is only 1 way to produce "<<n<<" cents change.\n";
		else
			cout<<"There are "<<dp[n]<<" ways to produce "<<n<<" cents change. \n";	
	}
		
}
