#include<iostream>
using namespace std;

int main()
{
	char a[9];
	int sum;
	int head[26]={1,10,19,28,37,46,55,64,39,73,82,2,11,20,38,29,38,47,56,65,74,83,21,3,12,30};
	while(cin>>a)
	{
		sum=0;
		for(int i=0;i<8;i++)
		{
			sum+=int(a[i]-'0')*(8-i);
		}
		for(int i=0;i<26;i++)
			if((sum+head[i]+int(a[8]-'0'))%10==0)
			{
				cout<<char(i+65);
			}
		cout<<endl;
	}
} 
