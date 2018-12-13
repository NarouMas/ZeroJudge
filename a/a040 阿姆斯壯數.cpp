#include<iostream>
#include<cmath>
using namespace std;

int pow(int in0 ,int in1){
    int out=1 ;
    while (in1--){
          out*=in0 ;
    }
    
    return out ;
    
}

int main()
{
	int a,b;
	int c[100];
	int n;
	bool count;
	while(cin>>a>>b)
	{
		count=false;
		n=0;
		for(int i=a;i<b;i++)
		{
			int temp=i,k=1;
			while(temp=temp/10)
				k++;
			temp=i;
			int sum=0;
			while(temp)
			{
				sum+=pow(temp%10,k);
				temp/=10;
			}
			if(sum==i)
			{
				cout<<i<<" ";
				count=true;
			}
			
		}
		if(count) cout<<endl;
		
		if(count==false)
			cout<<"none\n";
	}
}



