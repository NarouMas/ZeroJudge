#include<iostream>
using namespace std;

int main()
{
	float ar,br,ag,bg,ab,bb;
	int w,h;
	float a,b,c;
	while(cin>>ar>>br>>ag>>bg>>ab>>bb)
	{
		cin>>w>>h;
		cout<<w<<" "<<h<<endl;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				cin>>a>>b>>c;
				a=a*ar+br;
				b=b*ag+bg;
				c=c*ab+bb;
				if(a>255)
					cout<<"255 ";
				else if(a-int(a)>=0.5)
					cout<<int(a+0.5)%256<<" ";
				else
					cout<<int(a)%256<<" ";
				if(b>255)
					cout<<"255 ";
				else if(b-int(b)>=0.5)
					cout<<int(b+0.5)%256<<" ";
				else
					cout<<int(b)%256<<" ";
				if(c>255)
					cout<<"255 ";
				else if(c-int(c)>=0.5)
					cout<<int(c+0.5)%256<<" ";
				else
					cout<<int(c)%256<<" ";
			}
			cout<<endl;
		}
	}
}
