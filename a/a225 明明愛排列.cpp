#include<iostream>
using namespace std;

int main()
{
	int n;
	int num[1000];
	int a[1000];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{		
			cin>>num[i];
			a[i]=num[i]%10;
		}
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(a[i]>a[j])
				{
					int tempa,tempn;
					tempa=a[i],tempn=num[i];
					a[i]=a[j],num[i]=num[j];
					a[j]=tempa,num[j]=tempn;
				}

		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(a[i]==a[j]&&num[i]<num[j])
				{
					int temp;
					temp=num[i];
					num[i]=num[j];
					num[j]=temp;
				}
		for(int i=0;i<n;i++)
			cout<<num[i]<<" ";
		cout<<endl;		
	}
}
