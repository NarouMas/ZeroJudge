#include<iostream>
using namespace std;

int main()
{
	int n;
	int x[100000],y[100000];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>x[i]>>y[i];
		
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(x[i]>x[j])
			{
				int temp;
				temp=x[j];
				x[j]=x[i];
				x[i]=temp;
				
				temp=y[j];
				y[j]=y[i];
				y[i]=temp;			
			}
		
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(x[i]==x[j]&&y[i]>y[j])
			{
				int temp;
				temp=x[j]; 
				x[j]=x[i];
				x[i]=temp;
				
				temp=y[j];
				y[j]=y[i];
				y[i]=temp;			
			}
		
		for(int i=0;i<n;i++)
			cout<<x[i]<<" "<<y[i]<<endl;

	}
}
