#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int M=2000000000;
	unsigned long long hu[6000];
	for(int i=0,m=0;i<31;i++)
		for(int j=0;j<21;j++)
			for(int k=0;k<15;k++)
				for(int l=0;l<12;l++)
				{
					hu[m]=pow(2,i);
					if(hu[m]<=M)
					{
						hu[m]*=pow(3,j);
						if(hu[m]<=M)
						{
							hu[m]*=pow(5,k);
							if(hu[m]<=M)
							{
								hu[m]*=pow(7,l);
								if(hu[m]<=M&&hu[m]>0)
								{
									//cout<<hu[m]<<endl;
									//system("pause");
									m++;
								}
							}
						}
					}
					
				}
	sort(hu,hu+5842);
	while(cin>>n)
	{
		if(n==0)
			break;
		if(n%10==1&&n%100!=11)
			cout<<"The "<<n<<"st humble number is ";
		else if(n%10==2&&n%100!=12)
			cout<<"The "<<n<<"nd humble number is ";
		else if(n%10==3&&n%100!=13)
			cout<<"The "<<n<<"rd humble number is ";
		else
			cout<<"The "<<n<<"th humble number is ";
		cout<<hu[n-1]<<"."<<endl;
	}
}
