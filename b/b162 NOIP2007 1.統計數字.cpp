#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int num[200001];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>num[i];
		
		sort(num,num+n);
		//for(int i=0;i<n;i++)
		//	cout<<num[i]<<" ";
		//cout<<endl;
		int k=1;
		for(int i=0;i<n;i++)
		{
			//int k=1;
			if(num[i]==num[i+1])
				k++;
			else if(k!=0)
			{
				cout<<num[i]<<" "<<k<<endl;
				k=1;
			}
		}
	}
}
