#include<iostream>
using namespace std;

int main()
{
	string a,b;
	int k,l;
	k=l=0;
	while(cin>>a>>b)
	{
		if(a=="Game")
		{
			//cout<<"k:"<<k<<" l:"<<l<<endl;
			if(k>l)
				cout<<"�ä����ܸ�\n";
			else
				cout<<"�d�G���w���_���o��\n";
			k=l=0;
		}
		if(a=="Scissors")
		{
			if(b=="Stone")
			{
				cout<<"�F�����\n";
				l++;
			}
			else if(b=="Paper")
			{
				cout<<"�����\n";
				k++;
			}
		}
		else if(a=="Stone")
		{
			if(b=="Scissors")
			{
				cout<<"�����\n";
				k++;
			}
			else if(b=="Paper")	
			{
				cout<<"�F�����\n";
				l++;
			}
		}
		else if(a=="Paper")
		{
			if(b=="Scissors")
			{
				cout<<"�F�����\n";
				l++;
			}
			else if(b=="Stone")
			{
				cout<<"�����\n";
				k++;
			}
		}
	}
}
