#include<iostream>
using namespace std;

int main()
{
	int n,t;
	int a,b;
	bool ne;
	string c1[20]={"¥Ò","¤A","¤þ","¤B","¥³","¤v","©°","¨¯","¤Ð","¬Ñ"};
	string c2[20]={"¤l","¤¡","±G","¥f","¨°","¤x","¤È","¥¼","¥Ó","¨»","¦¦","¥è"};
	while(cin>>n)
	{
		t=n-1744;
		if(t<0)
			ne=true,t*=-1;
		else
			ne=false;
		t%=60;
		a=t%10,b=t%12;
		if(!ne)
			cout<<c1[a]<<c2[b]<<endl;
			//cout<<c1[a*2]<<c1[a*2+1]<<c2[b*2]<<c2[b*2+1]<<endl;
		else
			cout<<c1[10-a]<<c2[12-b]<<endl;  //wrong
	}
}
