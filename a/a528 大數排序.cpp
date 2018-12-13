#include<iostream>
using namespace std;

bool big(char a[],char b[])
{
	int la,lb;
	bool na=false,nb=false;
	for(int i=0;a[i]!='\0';i++)
		la=i;
	for(int i=0;b[i]!='\0';i++)
		lb=i;
	/*for(int i=0;i<=la;i++)
		cout<<a[i];
	cout<<endl;
	for(int i=0;i<=lb;i++)
		cout<<b[i];
	cout<<endl;
	system("pause");*/
	if(a[0]=='-')
		na=true;
	if(b[0]=='-')
		nb=true;
	if(na xor nb)
	{
		if(na)
			return false;
		else
			return true;
	}
	
	if(la>lb)
	{
		if(!na)
			return true;
		else
			return false;
	}
	else if(la<lb)
	{
		if(!na)
			return false;
		else
			return true;
	}
	else
	{
		for(int i=0;i<=la;i++)
		{
			if(a[i]>b[i])
			{
				if(!na)
					return true;
				else
					return false;
			}
			else if(a[i]<b[i])
			{
				if(!na)
					return false;
				else
					return true;
			}
		}
	}
	return false;
}
int main()
{
	int n;
	char a[2000][200];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(big(a[i],a[j]))
				{
					//cout<<"t1 "<<a[i][0]<<" "<<a[j][0]<<endl;
					swap(a[i],a[j]);
					//cout<<"t2 "<<a[i][0]<<" "<<a[j][0]<<endl;
				}
		for(int i=0;i<n;i++)
		{
			for(int j=0;a[i][j]!='\0';j++)
				cout<<a[i][j];
			cout<<endl;
		}
	}
}
