#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,ans[10000],max,n2,sum;
	string a[5];
	char b[20];
	string s[10000];
	b[15]='\0';
	for(int i=0;i<10000;i++)
		ans[i]=1;
	while(cin>>n)
	{
		if(n==0)
			break;	
		max=1;
		for(int z=0,y=0;z<n;z++,y++)
		{
			for(int i=0;i<5;i++)
				cin>>a[i];
			sort(a,a+5);
			for(int i=0;i<5;i++)
			{
				b[i*3]=a[i][0];
				b[i*3+1]=a[i][1];
				b[i*3+2]=a[i][2];
				/*b[i*3+2]=char(a[i]%10)+'0';
				a[i]/=10;
				b[i*3+1]=char(a[i]%10)+'0';
				a[i]/=10;
				b[i*3]=char(a[i]%10)+'0';*/
			}
			s[y].assign(b);
			//cout<<"s["<<z<<"]:"<<s[z]<<endl;
			for(int i=0;i<y;i++)
				if(s[y]==s[i])
				{
					ans[i]++;
					if(ans[i]>max)
						max=ans[i];
					y--;
					//cout<<"in\n";
					break;
				}
			//cout<<"out\n";
			n2=y;
		}
		/*max=0;
		for(int i=0;i<=n2;i++)
			if(ans[i]>max)
				max=ans[i];*/
		sum=0;
		for(int i=0;i<=n2;i++)
			if(ans[i]==max)
				sum+=max;
		cout<<sum<<endl;;
		for(int i=0;i<=n2;i++)
			ans[i]=1;
	}
	return 0;
}
