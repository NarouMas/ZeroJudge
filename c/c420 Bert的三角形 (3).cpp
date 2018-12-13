#include<iostream>
using namespace std;

int main()
{
	float n;
	int k;
	while(cin>>n)
	{
		k=1;
		int t=n;
		int m=n-1;
		for(int i=0;i<t;i++)
		{
			for(int j=0;j<m;j++)
				cout<<"_";
			for(int j=0;j<k;j++)
				cout<<"*";
			for(int j=0;j<m;j++)
				cout<<"_";
			cout<<endl;
			n-=2;
			k+=2;
			m--;
		}
	}
}



/*---*---       
--***-- 
-*****- 
******* 







------*------
-----***-----
----*****----
---*******---
--*********--
-***********-
*************

3 2,5 4 ,7 4

2=3a+b
3=5a+b
a=0.5 b=0.5*/
