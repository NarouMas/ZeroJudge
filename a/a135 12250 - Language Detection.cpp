#include<iostream>
using namespace std;

int main()
{
	string s[6]={"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
	string input;
	int n;
	n=1;
	while(cin>>input)
	{
		if(input=="#")
			break;
		
		if(input==s[0])		
			cout<<"Case "<<n<<": ENGLISH\n";
		else if(input==s[1])
			cout<<"Case "<<n<<": SPANISH\n";
		else if(input==s[2])
			cout<<"Case "<<n<<": GERMAN\n";
		else if(input==s[3])
			cout<<"Case "<<n<<": FRENCH\n";
		else if(input==s[4])
			cout<<"Case "<<n<<": ITALIAN\n";
		else if(input==s[5])
			cout<<"Case "<<n<<": RUSSIAN\n";
		else
			cout<<"Case "<<n<<": UNKNOWN\n";
		n++;
	}
}
