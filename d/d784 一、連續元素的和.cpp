#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	string s;
	int n,a[1000],k;
	int sum,ma;
	while(cin>>n)
	{
		//cin.ignore();
		while(n--)
		{
			cin>>k;
			for(int i=0;i<k;i++)
				cin>>a[i];
			//getline(cin,s);
			//stringstream ss(s);
			//k=-1;
			//while(ss>>a[++k]);
			/*for(int i=0;i<k;i++)
				cout<<a[i]<<" ";
			cout<<endl;*/
			ma=a[0];
			for(int i=0;i<k;i++)
			{
				for(int j=1;j<=k;j++)
				{
					sum=0;
					for(int l=i,t=0;t<j&&l<k;l++,t++)
					{
						sum+=a[l];
					}
					if(sum>ma)
						ma=sum;
				}
			}
			cout<<ma<<endl;
		}
	}
}
