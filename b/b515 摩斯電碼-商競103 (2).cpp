#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	string mos[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--",
					"-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	int n;
	char c[10];
	string s;
	while(cin>>n)
	{
		cin.ignore();
		while(n--)
		{
			s.clear();
			getline(cin,s);
			//cout<<s<<endl;
			stringstream ss(s);
			s.clear();
			while(ss>>c)
			{
				//cout<<"c[0]:"<<c[0]<<" ";
				for(int i=0;i<26;i++)
				{
					if(c==mos[i])
					{
						//cout<<"s:"<<c<<" mos:"<<mos[i]<<endl;
						cout<<char('A'+i);
						break;
					}
				}
			}
			cout<<endl;
		}
	}
}
/*A .- B -... C -.-. D -..
E . F ..-. G --. H ....
I .. J .--- K -.- L .-..
M -- N -. O --- P .--.
Q --.- R .-. S ... T -
U ..- V ...- W .-- X -..-
Y -.-- Z --..*/
