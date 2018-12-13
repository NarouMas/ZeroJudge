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
				cout<<"¿Ã¤õªºÂÜ¸ñ\n";
			else
				cout<<"´dºGªºÄw±¹°_­»ªo¿ú\n";
			k=l=0;
		}
		if(a=="Scissors")
		{
			if(b=="Stone")
			{
				cout<<"ÆF¹ÚÀò³Ó\n";
				l++;
			}
			else if(b=="Paper")
			{
				cout<<"µµÀò³Ó\n";
				k++;
			}
		}
		else if(a=="Stone")
		{
			if(b=="Scissors")
			{
				cout<<"µµÀò³Ó\n";
				k++;
			}
			else if(b=="Paper")	
			{
				cout<<"ÆF¹ÚÀò³Ó\n";
				l++;
			}
		}
		else if(a=="Paper")
		{
			if(b=="Scissors")
			{
				cout<<"ÆF¹ÚÀò³Ó\n";
				l++;
			}
			else if(b=="Stone")
			{
				cout<<"µµÀò³Ó\n";
				k++;
			}
		}
	}
}
