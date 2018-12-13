#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;

int main()
{
	int even[30],odd[30];
	int n,ne,no;
	string s;
	while(cin>>s)
	{
		for(int i=0;i<s.size();i++)
			if(s[i]==',')
				s[i]=' ';
		stringstream ss(s);
		n=0,ne=0,no=0;
		while(ss>>n)
		{
			if((no+ne)%2==0)
				odd[no]=n,no++;
			else
				even[ne]=n,ne++;
		}
		
		sort(odd,odd+no);
		sort(even,even+ne);
		
		for(int i=0,j=0,k=0;i<no+ne;i++)
		{
			if(i%2==0)
			{
				cout<<odd[j];
				j++;
			}
			else
			{
				cout<<even[k];
				k++;
			}
			if(i!=no+ne-1)
				cout<<",";
		}
		cout<<endl;
	}
}
