#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char a[3];
	int ans,x[3];
	cout<<"十六進位表示法??相對應的十進位表示法\n";
	while(cin>>a)
	{
		for(int i=0;i<2;i++)
		{
			switch(a[i])
			{
				case '0':x[i]=0;break;
				case '1':x[i]=1;break;
				case '2':x[i]=2;break;
				case '3':x[i]=3;break;
				case '4':x[i]=4;break;
				case '5':x[i]=5;break;
				case '6':x[i]=6;break;
				case '7':x[i]=7;break;
				case '8':x[i]=8;break;
				case '9':x[i]=9;break;
				case 'A':x[i]=10;break;
				case 'B':x[i]=11;break;
				case 'C':x[i]=12;break;
				case 'D':x[i]=13;break;
				case 'E':x[i]=14;break;
				case 'F':x[i]=15;break;
			}
		}
		ans=x[0]*16+x[1];
		cout<<"      "<<a[0]<<a[1]<<"                 "<<ans<<endl;
	}
}
