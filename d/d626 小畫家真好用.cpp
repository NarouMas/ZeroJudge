#include<iostream>
using namespace std;

int n;
char a[150][150];
int n1,n2;
	
void d(int,int);
int main()
{
	
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		cin>>n1>>n2;
		
		d(n1,n2);
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<a[i][j]; 
			}
			cout<<endl;
		} 
			
	}
}

void d(int c,int e)
{
	a[c][e]='+';
	if(a[c+1][e]=='-')
		d(c+1,e);
	if(a[c][e+1]=='-')
		d(c,e+1);
	if(a[c-1][e]=='-')
		d(c-1,e);
	if(a[c][e-1]=='-')
		d(c,e-1);
}
