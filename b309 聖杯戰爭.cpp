#include<iostream>
using namespace std;

int main()
{
	string s;
	int a[7],m;
	for(int i=0;i<7;i++)
		a[i]=0;
	while(getline(cin,s))
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='a'&&s[i]<='z')
				s[i]-=' ';
			if(s[i]>='A'&&s[i]<='Z')
				a[(int(s[i]-'A'))%7]++;
		}
	}
	m=-1;
	for(int i=0;i<7;i++)
		if(a[i]>m)
			m=a[i];
	for(int i=0;i<7;i++)
		if(a[i]==m)
		{
			switch(i)
			{
				case 0:cout<<"Saber\n";break;
				case 1:cout<<"Lancer\n";break;
				case 2:cout<<"Archer\n";break;
				case 3:cout<<"Rider\n";break;
				case 4:cout<<"Caster\n";break;
				case 5:cout<<"Assassin\n";break;
				case 6:cout<<"Berserker\n";break;
			}
		}
}
