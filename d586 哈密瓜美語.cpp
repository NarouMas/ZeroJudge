#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	string s;
	int n,m,a;
	char c;
	while(cin>>n)
	{
		cin.ignore();
		while(n--)
		{
			getline(cin,s);
			stringstream ss(s);
			ss>>m;
			for(int i=0;s[i]!=' ';i++)
				a=i+2;
			//cout<<"a:"<<a<<endl;
			if(s[a]>='0'&&s[a]<='9')
			{
				while(ss>>a)
				{
					switch(a)
					{
						case 1: cout<<"m"; break;
						case 2: cout<<"j"; break;
						case 3: cout<<"q"; break;
						case 4: cout<<"h"; break;
						case 5: cout<<"o"; break;
						case 6: cout<<"f"; break;
						case 7: cout<<"a"; break;
						case 8: cout<<"w"; break;
						case 9: cout<<"c"; break;
						case 10: cout<<"p"; break;
						case 11: cout<<"n"; break;
						case 12: cout<<"s"; break;
						case 13: cout<<"e"; break;
						case 14: cout<<"x"; break;
						case 15: cout<<"d"; break;
						case 16: cout<<"k"; break;
						case 17: cout<<"v"; break;
						case 18: cout<<"g"; break;
						case 19: cout<<"t"; break;
						case 20: cout<<"z"; break;
						case 21: cout<<"b"; break;
						case 22: cout<<"l"; break;
						case 23: cout<<"r"; break;
						case 24: cout<<"y"; break;
						case 25: cout<<"u"; break;
						case 26: cout<<"i"; break;
						//mjqhofawcpnsexdkvgtzblryui
					}
				}
				cout<<endl;
			}
			else
			{
				a=0;
				while(ss>>c)
				{
					switch(c)
					{
						case 'u': a+=1; break;
						case 'z': a+=2; break;
						case 'r': a+=3; break;
						case 'm': a+=4; break;
						case 'a': a+=5; break;
						case 't': a+=6; break;
						case 'i': a+=7; break;
						case 'f': a+=8; break;
						case 'x': a+=9; break;
						case 'o': a+=10; break;
						case 'p': a+=11; break;
						case 'n': a+=12; break;
						case 'h': a+=13; break;
						case 'w': a+=14; break;
						case 'v': a+=15; break;
						case 'b': a+=16; break;
						case 's': a+=17; break;
						case 'l': a+=18; break;
						case 'e': a+=19; break;
						case 'k': a+=20; break;
						case 'y': a+=21; break;
						case 'c': a+=22; break;
						case 'q': a+=23; break;
						case 'j': a+=24; break;
						case 'g': a+=25; break;
						case 'd': a+=26; break;
						//uzrmatifxopnhwvbslekycqjgd
					}
				}
				cout<<a<<endl;
			}
		}
	}
}
