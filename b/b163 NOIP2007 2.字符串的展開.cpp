#include<iostream>
#define size 10000
using namespace std;

bool da(char a)
{
	if(a>='a'&&a<='z')
		return true;
	else if(a>='A'&&a<='Z')
		return true;
	return false;
}
int main()
{
	int p1,p2,p3;
	char a[size];
	while(cin>>p1>>p2>>p3>>a)
	{
		for(int i=0;a[i]!='\0';i++)
		{
			if(a[i]!='-')
				cout<<a[i];
			else
			{
				if(i==0||a[i+1]=='\0'||a[i-1]=='-'||a[i+1]=='-')
					cout<<"-";
				else if(a[i-1]==a[i+1])
					cout<<"-";
				else if(da(a[i-1])!=da(a[i+1]))
					cout<<"-";
				else if(int(a[i-1])>int(a[i+1]))
					cout<<"-";
				else if(p3==1)
				{
					for(int j=int(a[i-1])+1;j<int(a[i+1]);j++)
					{
						for(int l=0;l<p2;l++)
						{
							//cout<<"p1:"<<p1<<endl;
							if(p1==3)
								cout<<"*";
							else if(a[i-1]>='0'&&a[i-1]<='9')
							{
								cout<<char(j);
								//cout<<"n:"<<j<<endl;;
							}
							else
							{								
								if(p1==1)
								{
									if(a[i-1]>='A'&&a[i-1]<='Z')
									{
										cout<<char(j+32);
									}
									else
										cout<<char(j);
								}
								else
								{
									if(a[i-1]>='A'&&a[i-1]<='Z')
									{
										cout<<char(j);
									}
									else
										cout<<char(j-32);
								}
								
							}
						}
					}
				}
				else
				{
					//for(int j=int(a[i-1]-'0')+1;j<int(a[i+1]-'0');j++)
					for(int j=int(a[i+1])-1;j>int(a[i-1]);j--)
					{
						for(int l=0;l<p2;l++)
						{
							if(p1==3)
								cout<<"*";
							else if(a[i-1]>='0'&&a[i-1]<='9')
							{
								cout<<char(j);
							}
							else
							{
								
									if(p1==1)
								{
									if(a[i-1]>='A'&&a[i-1]<='Z')
									{
										cout<<char(j+32);
									}
									else
										cout<<char(j);
								}
								else
								{
									if(a[i-1]>='A'&&a[i-1]<='Z')
									{
										cout<<char(j);
									}
									else
										cout<<char(j-32);
								}
								
							}
						}
					}
				}
				
			}
		}
		cout<<endl;
	}
}
