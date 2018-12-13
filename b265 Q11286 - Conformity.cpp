#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,cla[5],max,ans;
	long long int key,t,t2;
	map<long long int,int> hash;
	map<long long int,int>::iterator it;
	while(cin>>n)
	{
		if(n==0)
			break;
		//hash.erase(hash.begin(),hash.end());
		hash.clear();
		max=1,ans=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<5;j++)
			{
				cin>>cla[j];
			}
			sort(cla,cla+5);
			t=1,key=0;
			for(int j=0;j<5;j++)
			{
				key+=cla[j]%10*t;
				cla[j]/=10,t*=10;
				key+=cla[j]%10*t;
				cla[j]/=10,t*=10;
				key+=cla[j]%10*t;
				t*=10;
			}
			//cout<<"k:"<<key<<endl;
			it=hash.find(key);
			if(it!=hash.end())
			{
				hash[key]++;
				if(hash[key]>max)
					max=hash[key];
			}
				
			else
				hash[key]=1;
		}
		for(it=hash.begin();it!=hash.end();it++)
			if(max==it->second)
				ans+=it->second;
		cout<<ans<<"\n";
	}
}
