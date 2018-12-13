#include<iostream>
#define size 100000
using namespace std;

int main()
{
	char a[size],b[size],c[size],d[size];
	char stack[10000];
	int len,l1,l2,l3,s,dis;
	while(cin.getline(a,size))
	{
		//l1=l2=l3=0;
		s=0,dis=1;
		for(int i=0;dis!=0;i++)
		{
			if(a[i]=='(')
			{
				stack[s]='(';
				s+=1;
				//if(dis==-1)
				//	dis=1;
			}
			else if(a[i]==')')
			{
				//if(stack[s-1]=='(')
				//{
					s--;
					if(s==0)
						dis=0;
				//}
					
				/*else
				{
					stack[s]=')';
					s++;
				}*/
			}
			b[i]=a[i];
			//cout<<"b["<<i<<"]:"<<b[i]<<" dis:"<<dis<<endl;
			//system("pause");
			l1=i;
			len=i;
		}
		//l1++;
		/*b[l1]=a[l1];
		cout<<"b";
		for(int i=0;i<=l1;i++)
			cout<<b[i];
		cout<<endl;
		system("pause");*/
		len+=2;
		for(int i=len,j=0;a[i]!=';';i++,j++)
		{
			c[j]=a[i];
			l2=j;
			len=i;
		}
		/*out<<"c";
		for(int i=0;i<=l2;i++)
			cout<<c[i];
		cout<<endl;
		system("pause");*/
		/*len+=3;
		for(int i=len,j=0;a[i]!=';';i++,j++)
		{
			d[j]=a[i];
			l3=j;
			len=i;
		}*/
		/*cout<<"d";
		for(int i=0;i<=l3;i++)
			cout<<d[i];
		cout<<endl;
		system("pause");*/
		for(int i=0;i<=l2;i++)
			cout<<c[i];
		/*cout<<" =";
		for(int i=0;i<=l3;i++)
			cout<<d[i];*/
		cout<<" ";
		for(int i=0;i<=l1;i++)
			cout<<b[i];
		cout<<";\n";
	}
}
