#include<iostream>
using namespace std;

int main()
{
	int dp[7500];
	int s[5]={1,5,10,25,50},n;
	dp[0]=1;
	for(int i=1;i<7500;i++)
		dp[i]=0;
	for(int i=0;i<5;i++)
		for(int j=s[i];j<7500;j++)
			dp[j]=dp[j]+dp[j-s[i]];
	while(cin>>n)
		cout<<dp[n]<<endl;
}
