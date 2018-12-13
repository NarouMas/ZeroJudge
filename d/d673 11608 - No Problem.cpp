#include<iostream>
using namespace std;

int main()
{
	int a[12],b[12];
	int s,c,n;
	n=1;
	while(cin>>s)
	{
		if(s==-1)
			break;
		for(int i=0;i<12;i++)
			cin>>a[i];
		for(int i=0;i<12;i++)
			cin>>b[i];
		 c=s;
		 cout<<"Case "<<n<<":"<<endl;
		 for(int i=0;i<12;i++)
		 {
		 	if(i>0)
		 		c+=a[i-1];
		 	if(b[i]>c)
		 		cout<<"No problem. :(\n";
		 	else
		 	{
		 		cout<<"No problem! :D\n";
		 		c-=b[i];
			}
		 		
		 }
		 n++;
	}
}
