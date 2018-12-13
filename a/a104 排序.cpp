#include<iostream>
using namespace std;

int main()
{
	int n;
	int num[1000];
	int temp;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>num[i];
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(num[i]>num[j])
				{
					temp=num[i];
					num[i]=num[j];
					num[j]=temp;
				}
		for(int i=0;i<n;i++)
			cout<<num[i]<<" ";
		cout<<endl;
	}
}
