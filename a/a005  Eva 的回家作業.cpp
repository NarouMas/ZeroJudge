#include<iostream>
using namespace std;

int main()
{
	int n;
	int time=1;
	int re[5];
	cin>>n;
	while(time<=n)
	{
		for(int i=0;i<4;i++)
			cin>>re[i];
	
		if(re[3]-re[2]==re[2]-re[1]&re[2]-re[1]==re[1]-re[0]){
			for(int i=0;i<4;i++)
				cout<<re[i]<<" ";
			cout<<re[3]+(re[3]-re[2])<<endl;
			}
		
		if(re[3]/re[2]==re[2]/re[1]&re[2]/re[1]==re[1]/re[0]){
			for(int i=0;i<4;i++)
				cout<<re[i]<<" ";
			cout<<re[3]*(re[3]/re[2]);
			}
		time++;
	}
}
