#include<iostream>
#define size 100000
using namespace std;

int main()
{
	char a[size];
	int n,b[10];
	while(cin.getline(a,size))
	{
		cout<<"___________\n";
		for(int i=0,t;a[i]!='\0';i++)
		{
			n=int(a[i]);
			//cout<<"n:"<<n<<endl;
			t=0;
			for(int j=0;j<8;j++)
				b[j]=0;
			while(n>1)
			{
				if(n%2==0)
					b[t]=0;
				else
					b[t]=1;
				n/=2;
				t++;
			}
			b[t]=1;
			cout<<"|";
			for(int j=7;j>=0;j--)
			{
				if(b[j]==1)
					cout<<"o";
				else
					cout<<" ";
				if(j==3)
					cout<<".";
			}
			cout<<"|\n";
		}
		cout<<"|    o. o |\n"
			<<"___________\n";
	}
}
