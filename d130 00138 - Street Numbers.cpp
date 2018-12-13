#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double k,n,t,f,b;
	double x,ix;
	t=0,n=8;
	while(t<10)
	{
		x=sqrt((n*n+n)/2.0);
		ix=int(x);
		if(ix==x)
		{
			printf("%10.0f%10.0f\n",ix,n);
			t++;
		}
		/*for(int i=n/2+1;i<n;i++)
		{
			f=(1+i-1)*(i-1)/2;
			b=(i+1+n)*(n-i)/2;
			//cout<<"i:"<<i<<" f:"<<f<<" b:"<<b<<endl;
			//system("pause");
			if(f==b)
			{
				
				t++;
				break;
			}
		}*/
		n++;
	}
}
//1 2 3 4 5 6 7 8
