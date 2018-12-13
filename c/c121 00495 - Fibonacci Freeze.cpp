#include<iostream>
#define size 100000
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	//cin.tie(0);
	int f1[size],f2[size];
	int n,l1,l2;
	while(cin>>n)
	{
		f1[0]=0,f1[1]=-1;
		f2[0]=1,f2[1]=-1;
		l1=1,l2=1;
		cout<<"The Fibonacci number for "<<n<<" is ";
		
		if(n==0)
			cout<<"0\n";
		else if(n==1)
			cout<<"1\n";
		else
		{
			for(int i=0;i<n-1;i++)
			{
				if(i%2==0)
				{
					for(int j=0;j<l1||j<l2;j++)
					{
						if(j<l1)
						{
							if(j<l2)
								f1[j]+=f2[j];
						}
						else
						{
							f1[l1]=0,f1[l1+1]=-1;
							l1++;
							//cout<<"f1+f2:"<<f1[j]<<" + "<<f2[j]<<endl;
							f1[j]+=f2[j];
						}
					}
					//for(int j=1;j>=0;j--)
					//	cout<<j<<":"<<f1[j]<<endl;
					for(int j=0;j<l1;j++)
					{
						if(f1[j]>=10)
						{
							if(j==l1-1)
								f1[l1]=0,f1[l1+1]=-1,l1++;
							f1[j+1]+=f1[j]/10;
							f1[j]=f1[j]%10;
						}
					}
				}
				else
				{
					for(int j=0;j<l1||j<l2;j++)
					{
						if(j<l2)
						{
							if(j<l1)
								f2[j]+=f1[j];
						}
						else
						{
							f2[l2]=0,f2[l2+1]=-1;
							l2++;
							f2[j]+=f1[j];
						}
					}
					for(int j=0;j<l2;j++)
					{
						if(f2[j]>=10)
						{
							if(j==l2-1)
								f2[l2]=0,f2[l2+1]=-1,l2++;
							f2[j+1]+=f2[j]/10;
							f2[j]=f2[j]%10;
						}
					}
				}
			}
			//cout<<endl<<"l1:"<<l1<<" l2:"<<l2<<endl;
			if(n%2==0)
				for(int i=l1-1;i>=0;i--)
					cout<<f1[i];
			else
				for(int i=l2-1;i>=0;i--)
					cout<<f2[i];
			cout<<"\n";
		}
	}
}
