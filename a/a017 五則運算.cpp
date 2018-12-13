#include<iostream>
#include<sstream> 
#include<stack>
using namespace std; 

int main()
{
	stack<char> st;
	stack<int> stn;
	char a[10000];
	int n1,n2,n;
	char cnum[20];
	while(cin.getline(a,10000))
	{
		while(st.size()!=0)
			st.pop();
		while(stn.size()!=0)
			stn.pop();
		for(int i=0;a[i]!='\0';i++)
		{
			//cout<<"i:"<<i<<" a:"<<a[i]<<endl;
			if(a[i]=='\(')
				st.push('\(');
			else if(a[i]=='*'||a[i]=='/'||a[i]=='%')
			{
			do0:
				if(st.size()==0)
					st.push(a[i]);
				else if(st.top()=='+'||st.top()=='-'||st.top()=='\(')
					st.push(a[i]);
				else
				{
					n1=stn.top();
					stn.pop();
					n2=stn.top();
					stn.pop();
					if(st.top()=='*')
					{					
						stn.push(n2*n1);				
					}
					else if(st.top()=='/')
					{	
						stn.push(n2/n1);					
					}
					else if(st.top()=='%')
					{
						stn.push(n2%n1);
					}
					st.pop();
					goto do0;
				}
				/*if(a[i]=='*')
					st.push('*');
				else if(a[i]=='%')
					st.push('%');
				else
					st.push('/');*/
			}
			else if(a[i]=='+'||a[i]=='-')
			{
			do1:
				if(st.size()==0)
				{
					if(a[i]=='+')
						st.push('+');
					else
						st.push('-');
				}
				else if(st.top()=='\(')
				{
					st.push(a[i]);
				}
				else
				{
					n1=stn.top();
					stn.pop();
					n2=stn.top();
					stn.pop();
					if(st.top()=='*')
					{					
						stn.push(n2*n1);				
					}
					else if(st.top()=='/')
					{	
						stn.push(n2/n1);					
					}
					else if(st.top()=='%')
					{
						stn.push(n2%n1);
					}
					else if(st.top()=='+')
					{
						stn.push(n2+n1);
					}
					else if(st.top()=='-')
					{
						stn.push(n2-n1);
					}
					st.pop();
					goto do1;
				}
			}
			else if(a[i]==')')
			{
				while(st.top()!='\(')
				{
					n1=stn.top();
					stn.pop();
					n2=stn.top();
					stn.pop();
					if(st.top()=='*')
					{					
						stn.push(n2*n1);				
					}
					else if(st.top()=='/')
					{	
						stn.push(n2/n1);					
					}
					else if(st.top()=='%')
					{
						stn.push(n2%n1);
					}
					else if(st.top()=='+')
					{
						stn.push(n2+n1);
					}
					else if(st.top()=='-')
					{
						stn.push(n2-n1);
					}
					st.pop();
				}
				st.pop();
			}
			else if(a[i]>='0'&&a[i]<='9')
			{
				//cout<<"a\n";
				int l=0;
				for(int j=i;a[i]!=' '&&a[i]!='\0';i++,l++)
					cnum[l]=a[i];
				i--;
				//cout<<a[i]<<endl;
				cnum[l]='\0';
				stringstream ss(cnum);
				ss>>n;
				//cout<<n<<endl;
				stn.push(n);
			}
		}
		while(stn.size()!=1)
		{
			n1=stn.top();
			stn.pop();
			n2=stn.top();
			stn.pop();
			if(st.top()=='*')
			{					
				stn.push(n2*n1);				
			}
			else if(st.top()=='/')
			{	
				stn.push(n2/n1);					
			}
			else if(st.top()=='%')
			{
				stn.push(n2%n1);
			}
			else if(st.top()=='+')
			{
				stn.push(n2+n1);
			}
			else if(st.top()=='-')
			{
				stn.push(n2-n1);
			}
			st.pop();
		}
		cout<<stn.top()<<endl;	
	}
}
