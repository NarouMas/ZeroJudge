#include<iostream>
#include<queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	priority_queue <long long,vector<long long>,greater<long long> > pq;
	long long n,num,ans,t1,t2;
	while(cin>>n)
	{
		if(n==0)
			break;
		while(pq.size()!=0)
			pq.pop();
		for(int i=0;i<n;i++)
		{
			cin>>num;
			pq.push(num);
		}
		ans=0;
		while(pq.size()!=1)
		{
			t1=pq.top();
			pq.pop();
			t2=pq.top();
			pq.pop();
			t1+=t2;
			ans+=t1;
			pq.push(t1);
		}
		cout<<ans<<"\n";
	}
}
