#include<iostream>
using namespace std;

int main()
{
	long long n,m,k;
	while(cin>>n>>m)
	{
		k=0;
		if(m==0)
		{
			cout<<"Go Kevin!!\n";
			goto end;
		}			
		else
			while(n-1-(m*k)>0)
			{
				k++;
			}
		if(n-1-(m*k)==0)
			cout<<"Go Kevin!!\n";
		else
			cout<<"No Stop!!\n";
		end:
			k=0;
		//2*n*(k+1)-2-2*k*(m+m*k)	
	}
}
