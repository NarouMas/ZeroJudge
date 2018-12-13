#include<iostream>
using namespace std;

int main()
{
	string a[101];
	int k=0,ml,len[101];
	//a[0]="Rene Decartes once said,";
	//a[1]="\"I think, therefore I am.\"";
	while(getline(cin,a[k++]));
	ml=0;
	for(int i=0;i<k;i++)
	{
		len[i]=a[i].length();
		if(len[i]>ml)
			ml=len[i];
		/*for(int j=0;a[k][j]!='\0';j++)
		{
			len[i]=j;
			if(len[i]>ml)
				ml=len[i];
		}*/
	}
	//cout<<"L:"<<len[0]<<" "<<len[1]<<endl;
	//cout<<"ml:"<<ml<<endl;
	for(int i=0;i<ml;i++)
	{
		for(int j=k-1;j>=0;j--)
		{
			if(len[j]>i)
				cout<<a[j][i];
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
