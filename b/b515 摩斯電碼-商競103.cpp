#include<iostream>
using namespace std;

int main()
{
	int n,temp;
	string mo[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--",
					"-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	//string s;
	char a[20],b[5];
	int lena,lenb;
	bool dlen;
	while(cin>>n)
	{
		temp=n;
		while(n--)
		{
			if(temp==n)
				cin.getline(a,20);
			//cout<<n;
			for(int i=0;i<20;i++)
				a[i]=' ';
			cin.getline(a,20);
			dlen=true;
			for(int i=0;i<20;i++)
				if(a[i]==' ')
				{
					for(int j=i+1;j<20;j++)
						if(a[j]!=' ')
							dlen=false;
					if(dlen)
					{
						lena=i;
						goto p;
					}
					else
						dlen=true;	
				}
		p:
			//cout<<lena<<endl;
			for(int i=0,j=0;i<lena;i++)
			{
				if(a[i]!=' ')
				{
					b[j]=a[i];
					j++;
				}
				else
				{
					for(int k=0;k<5;k++)
						cout<<b[k];
					//cout<<endl;
					//system("pause");
					string s(b);
					for(int l=0;l<26;l++)
					{
						if(s==mo[l])
						{
							cout<<char(char(l)+'A');
							for(int k=0;k<5;k++)
								b[k]=' ';
						}
							
					}
					j=0;
				}
			}
			cout<<endl;
		}
	}
}
