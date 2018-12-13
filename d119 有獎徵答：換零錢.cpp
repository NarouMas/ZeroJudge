#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;

int main()
{
	string str;
	int ans,num;
	int s[10]={1,5,10,20,50,100,200,500,1000,2000};
	long long dp[50100];
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(int i=0;i<10;i++)
		for(int j=s[i];j<50100;j++)
			dp[j]+=dp[j-s[i]];
	while(getline(cin,str))
	{
		stringstream ss(str);
		ans=0;
		while(ss>>num)
			ans+=num;
		if(ans==0)
			break;
		cout<<dp[ans]-1<<endl;
	}
}
