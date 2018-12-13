#include<iostream>
#include<fstream>
using namespace std;

bool d(long long n)
{
	long long a,b,c;
	for(a=1;a<n;a++)
	for(b=1;b<n;b++)
	for(c=1;c<n;c++)
	if(a*b+b*c+a*c==n&&a!=b&&a!=c&&b!=c)
	{
		//cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<" n:"<<n<<endl; 
		return true;
	}
		
	return false;
}
int main()
{
	fstream file;
	file.open("b230.txt",ios_base::app);
	long long a,b,c,n,i,ans[100];
	n=1;
	i=0;
	while(n<100000)
	{
		if(!d(n))
		{
			ans[i]=n;
			file<<ans[i]<<endl;
			//cout<<"i="<<i<<" ans:"<<ans[i]<<endl;
			i++;
		}
		//cout<<"n="<<n<<endl;			
		n++;
	}
	for(int i=0;i<66;i++)
		file<<"i:"<<"  "<<ans[i]<<endl;
}
