#include<iostream>
using namespace std;

int main()
{
	string s[25];
	int n[4];
	int sn[4]={4,9,14,19};
	int so[5]={5,10,15,20,23};
	int ans;
	bool d; 
	while(cin>>s[1])
	{
		for(int i=2;i<=23;i++)
			cin>>s[i];
		for(int i=0;i<4;i++)
		{
			if(s[sn[i]]=="ONE")
				n[i]=1;
			else if(s[sn[i]]=="TWO")
				n[i]=2;
			else if(s[sn[i]]=="THREE")
				n[i]=3;
			else if(s[sn[i]]=="FOUR")
				n[i]=4;
			else if(s[sn[i]]=="FIVE")
				n[i]=5;
			else if(s[sn[i]]=="SIX")
				n[i]=6;
			else if(s[sn[i]]=="SEVEN")
				n[i]=7;
			else if(s[sn[i]]=="EIGHT")
				n[i]=8;
			else if(s[sn[i]]=="NINE")
				n[i]=9;
			else if(s[sn[i]]=="TEN")
				n[i]=10;
			else if(s[sn[i]]=="ELEVEN")
				n[i]=11;
			else if(s[sn[i]]=="TWELVE")
				n[i]=12;
			else if(s[sn[i]]=="THRITEEN")
				n[i]=13;
		/*	switch(s[sn[i]])
			{
				case "ONE": n[i]=1; break;
				case "TWO": n[i]=2; break;
				case "THREE": n[i]=3; break;
				case "FOUR": n[i]=4; break;
				case "FIVE": n[i]=5; break;
				case "SIX": n[i]=6; break;
				case "SEVEN": n[i]=7; break;
				case "EIGHT": n[i]=8; break;
				case "NINE": n[i]=9; break;
				case "TEN": n[i]=10; break;
				case "ELEVEN": n[i]=11; break;
				case "TWELVE": n[i]=12; break;
				case "THRITEEN": n[i]=13; break;
			}*/
		}
		for(int i=0;i<4;i++)
		{
			d=true;
			for(int j=0;j<s[so[i]].size();j++)
				if(s[23][j]!=s[so[i]][j])
					d=false;
			if(s[23].size()-1!=s[so[i]].size())
				d=false;
			if(d)
			{
				switch(i)
				{
					case 0: ans=n[0]; cout<<ans<<" "<<s[so[i]]<<endl; break;
					case 1: ans=n[0]*n[1]; cout<<ans<<" "<<s[so[i]]<<endl; break;
					case 2: ans=n[0]*n[1]*n[2]; cout<<ans<<" "<<s[so[i]]<<endl; break;
					case 3: ans=n[0]*n[1]*n[2]*n[3]; cout<<ans<<" "<<s[so[i]]<<endl; break;
				}
			}
		}
	}
}
