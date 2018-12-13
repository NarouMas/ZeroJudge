#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

long double d(long double a,long double a2,long double b,long double b2,long double c,long double c2)
{
	long double d1,d2,d3,s,area;
	d1=sqrt((a-b)*(a-b)+(a2-b2)*(a2-b2)),d2=sqrt((b-c)*(b-c)+(b2-c2)*(b2-c2)),d3=sqrt((c-a)*(c-a)+(c2-a2)*(c2-a2)),s=(d1+d2+d3)/2;
	area=sqrt(s*(s-d1)*(s-d2)*(s-d3));
	return area;
}
int main()
{
	int n;
	long double a[10],y[10],area;
	while(cin>>n)
	{
		area=0;
		for(int i=0;i<n;i++)
			cin>>a[i]>>y[i];
		switch(n)
		{
			case 3:area+=d(a[0],y[0],a[1],y[1],a[2],y[2]);break;
			case 4:area+=d(a[0],y[0],a[1],y[1],a[2],y[2])+d(a[2],y[2],a[3],y[3],a[0],y[0]);break;
			case 5:area+=d(a[0],y[0],a[1],y[1],a[2],y[2])+d(a[2],y[2],a[3],y[3],a[4],y[4])+d(a[0],y[0],a[2],y[2],a[4],y[4]);break;
			case 6:area+=d(a[0],y[0],a[1],y[1],a[2],y[2])+d(a[2],y[2],a[3],y[3],a[4],y[4])+d(a[4],y[4],a[5],y[5],a[0],y[0])+d(a[0],y[0],a[2],y[2],a[4],y[4]);break;
			case 7:area+=d(a[0],y[0],a[1],y[1],a[2],y[2])+d(a[2],y[2],a[3],y[3],a[4],y[4])+d(a[4],y[4],a[5],y[5],a[6],y[6])+d(a[0],y[0],a[2],y[2],a[4],y[4])+d(a[0],y[0],a[6],y[6],a[4],y[4]);break;
			case 8:area+=d(a[0],y[0],a[1],y[1],a[2],y[2])+d(a[2],y[2],a[3],y[3],a[4],y[4])+d(a[4],y[4],a[5],y[5],a[6],y[6])+d(a[6],y[6],a[7],y[7],a[0],y[0])+d(a[0],y[0],a[2],y[2],a[4],y[4])+d(a[0],y[0],a[5],y[5],a[6],y[6]);break;
			case 9:area+=d(a[0],y[0],a[1],y[1],a[2],y[2])+d(a[2],y[2],a[3],y[3],a[4],y[4])+d(a[4],y[4],a[5],y[5],a[6],y[6])+d(a[6],y[6],a[7],y[7],a[8],y[8])+d(a[0],y[0],a[2],y[2],a[8],y[8])+d(a[2],y[2],a[4],y[4],a[6],y[6])+d(a[2],y[2],a[6],y[6],a[8],y[8]);break;
			case 10:area+=d(a[0],y[0],a[1],y[1],a[2],y[2])+d(a[2],y[2],a[3],y[3],a[4],y[4])+d(a[4],y[4],a[5],y[5],a[6],y[6])+d(a[6],y[6],a[7],y[7],a[8],y[8])+d(a[8],y[8],a[9],y[9],a[0],y[0])+d(a[0],y[0],a[2],y[2],a[4],y[4])+d(a[0],y[0],a[4],y[4],a[6],y[6])+d(a[0],y[0],a[6],y[6],a[8],y[8]);break;			
		}
		cout<<fixed<<setprecision(2)<<area<<endl;
	}
}
