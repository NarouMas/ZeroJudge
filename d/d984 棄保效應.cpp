#include<iostream>
using namespace std;

int main()
{
	long long n[3];
	int max,min,center;
	while(cin>>n[0]>>n[1]>>n[2])
	{
		max=min=center=0;
		for(int i=0;i<3;i++)
		{
			if(n[i]>n[max])
				max=i;
			else if(n[i]<n[min])
				min=i;
		}
		switch(max+min)
		{
			case 1:center=2;break;
			case 2:center=1;break;
			case 3:center=0;break;
		}
		if(n[min]+n[center]>n[max])
		{
			switch(center)
			{
				case 0:cout<<"A\n";break;
				case 1:cout<<"B\n";break;
				case 2:cout<<"C\n";break;
			}
		}
		else
		{
			switch(max)
			{
				case 0:cout<<"A\n";break;
				case 1:cout<<"B\n";break;
				case 2:cout<<"C\n";break;
			}
		}
	}
}
