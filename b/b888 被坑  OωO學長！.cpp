#include<iostream>
using namespace std;

int main()
{
	long long a[3],b[3],c[3],e[3];
	long long d,dx,dy,dz,f;
	bool dis;
	c[0]=c[1]=c[2]=1;
	while(cin>>a[0]>>b[0]>>e[0])
	{
		cin>>a[1]>>b[1]>>e[1];
		cin>>a[2]>>b[2]>>e[2];
		dis=true;
		d=a[0]*b[1]*c[2]+a[1]*b[2]*c[0]+a[2]*b[0]*c[1]-c[0]*b[1]*a[2]-c[1]*b[2]*a[0]-c[2]*b[0]*a[1];
		dx=e[0]*b[1]*c[2]+e[1]*b[2]*c[0]+e[2]*b[0]*c[1]-c[0]*b[1]*e[2]-c[1]*b[2]*e[0]-c[2]*b[0]*e[1];
		dy=a[0]*e[1]*c[2]+a[1]*e[2]*c[0]+a[2]*e[0]*c[1]-c[0]*e[1]*a[2]-c[1]*e[2]*a[0]-c[2]*e[0]*a[1];
		dz=a[0]*b[1]*e[2]+a[1]*b[2]*e[0]+a[2]*b[0]*e[1]-e[0]*b[1]*a[2]-e[1]*b[2]*a[0]-e[2]*b[0]*a[1];
		
		f=1000;
		for(int i=0;i<3;i++)
		{
			if(e[i]>160)
				f-=160;
			else
				f-=e[i];
		}
		if(a[0]==a[1]&&a[0]==a[2]&&a[0]==b[0]&&a[0]==b[1]&&a[0]==b[2]&&a[0]==c[0]&&a[0]==c[1]&&a[0]==c[2]&&e[0]!=e[1])
			dis=false;
		if(d!=0&&dx/d>0&&dy/d>0&&dz/d>0&&e[0]+e[1]+e[2]<=1000)
		{
			cout<<"RiceBurger: "<<dx/d<<" , Cola: "<<dz/d<<" , ChickenNugget: "<<dy/d<<" , ";
			cout<<"Snail: "<<f<<endl;
		}
		else if(d==0&&dx==0&&dy==0&&dz==0&&e[0]+e[1]+e[2]<=1000&&dis)
		{
			cout<<"££oo many !! , Snail: "<<f<<endl;
		}
		else
		{
			cout<<"Are you kidding me ??\n";
		}
	}
}
