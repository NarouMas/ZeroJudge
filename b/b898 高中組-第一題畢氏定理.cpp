#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,len[3];
	string a[3];
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a[0]>>a[1]>>a[2];
			for(int i=0;i<3;i++)
				len[i]=a[i].size();
				
			for(int i=0;i<3;i++)
				for(int j=i+1;j<3;j++)
					if(len[i]<len[j])
					{
						swap(len[i],len[j]);
						swap(a[i],a[j]);
					}
			if(len[0]!=len[1])
			{
				cout<<a[0]<<endl;
			}
			else if(len[0]==len[1]&&len[1]!=len[2])
			{
				sort(a,a+2);
				cout<<a[1]<<endl;
			}
			else
			{
				sort(a,a+3);
				cout<<a[2]<<endl;
			}
		}
	}
} 
