#include<iostream>
using namespace std;

int main()
{
	float ax,ay,bx,by,cx,cy;
	float abx,aby,acx,acy,bcx,bcy;
	float lenab,lenac;
	while(cin>>ax>>ay>>bx>>by>>cx>>cy)
	{
		abx=bx-ax;
		aby=by-ay;
		acx=cx-ax;
		acy=cy-ay;
		//bcx=cx-bx;
		//bcy=cy-by;
		lenab=abx*abx+aby*aby;
		lenac=acx*acx+acy*acy;
		if(lenab==lenac)
		{
			cout<<(abx+acx)+ax<<' '<<(aby+acy)+ay;
		}
		else if(lenac>lenab)
		{
			cout<<(acx-abx)+ax<<' '<<(acy-aby)+ay;
		}
		else
		{
			cout<<(abx-acx)+ax<<' '<<(aby-acy)+ay;
		}
		cout<<endl;
	}
}
