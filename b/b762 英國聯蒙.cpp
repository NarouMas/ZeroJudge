#include<iostream>
using namespace std;

int main()
{
	int k,a,d,t1,t2;
	int n;
	string cmd;
	while(cin>>n)
	{
		t1=t2=0;
		k=a=d=0;
		while(n--)
		{
			cin>>cmd;
			if(cmd=="Get_Kill")
			{
				if(t1<2)
					cout<<"You have slain an enemie.\n";
				else if(t1==2)
					cout<<"KILLING SPREE!\n";
				else if(t1==3)
					cout<<"RAMPAGE~\n";
				else if(t1==4)
					cout<<"UNSTOPPABLE!\n";
				else if(t1==5)
					cout<<"DOMINATING!\n";
				else if(t1==6)
					cout<<"GUALIKE!\n";
				else
					cout<<"LEGENDARY!\n";
				t1++,k++;
			}
			else if(cmd=="Get_Assist")
			{
				a++;
			}
			else if(cmd=="Die")
			{
				if(t1>2)
					cout<<"SHUTDOWN.\n";
				else
					cout<<"You have been slained.\n";
				t1=0,d++;
			}
		}
		cout<<k<<'/'<<d<<'/'<<a<<endl; 
	}
}
