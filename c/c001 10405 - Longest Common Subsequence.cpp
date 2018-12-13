#include<iostream>
#include<cstring>
using namespace std;

int lcs[100][100];

int main()
{
	string s1,s2;
	int l1,l2;
	while(getline(cin,s1))
	{
		getline(cin,s2);
		l1=s1.size();
		l2=s2.size();
		memset(lcs,0,sizeof(lcs));
		
		for(int i=0;i<l1;i++)
		{
			for(int j=0;j<l2;j++)
			{
				if(s1[i]==s2[j])
					lcs[i+1][j+1]=lcs[i][j]+1;
				else
				{
					if(lcs[i+1][j]>lcs[i][j+1])
						lcs[i+1][j+1]=lcs[i+1][j];
					else
						lcs[i+1][j+1]=lcs[i][j+1];
				}
			}
		}
		cout<<lcs[l1][l2]<<endl;
	}
}
