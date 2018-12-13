#include<iostream>
using namespace std;

int main()
{
	double h,u,d,f,day,a;
	while(cin>>h>>u>>d>>f)
	{
		if(h==0)
			break;
		f=(f/100)*u;
		a=0,day=0;
		if(u<0)
			u=0;
		day++;
		a+=u;
		if(a>h)
			goto end;
		a-=d;
		if(a<0)
			goto end;
		u-=f;
	
		while(true)
		{
			if(u<0)
				u=0;
			day++;
			a+=u;
			if(a>h)
				break;
			a-=d;
			if(a<0)
				break;
			
			u-=f;
			
			//cout<<"a="<<a<<endl;
			//system("pause");
			
		}
		//day++;
		end:
		if(a>=h)
			cout<<"success on day "<<day<<endl;
		else
			cout<<"failure on day "<<day<<endl;
	}
}
