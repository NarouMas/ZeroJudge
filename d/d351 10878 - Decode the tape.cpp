#include<iostream>
using namespace std;

int main()
{
	char a[15];
	int n=-1;
	while(cin.getline(a,15))
	{
		if(a[0]!='_')
		{
			n=0;
			for(int i=9,t=1;i>0;i--,t*=2)
			{
				//cout<<"a["<<i<<"]:"<<a[i]<<endl;
				if(a[i]=='o')
				{
					n+=t;
					//cout<<"t:"<<t<<endl;
				}
				if(a[i]=='.')
				{
					t/=2;
				}
			}
			
			//cout<<"n:"<<n<<endl;
			cout<<char(n);
			//cin.getline(a,15);
		}
		else
		{
			cout<<endl;
			//cin.getline(a,15);
			/*for(int i=0;a[i]!='\0';i++)
				cout<<a[i];
			cout<<endl;
			system("pause");*/
		}
	}
}
