#include<iostream>
using namespace std;

bool dis(int a[])
{
	bool b[9];
	bool c=true;
	for(int i=0;i<9;i++)
		b[i]=false;
	//for(int j=0;j<9;j++)
	//	cout<<a[j]<<' ';
	//system("pause");
	for(int i=0;i<9;i++)
	{
		if(a[i]==1)
			b[0]=true;
		if(a[i]==2)
			b[1]=true;
		if(a[i]==3)
			b[2]=true;
		if(a[i]==4)
			b[3]=true;
		if(a[i]==5)
			b[4]=true;
		if(a[i]==6)
			b[5]=true;
		if(a[i]==7)
			b[6]=true;
		if(a[i]==8)
			b[7]=true;
		if(a[i]==9)
			b[8]=true;
	}
	//for(int i=0;i<9;i++)
	//	cout<<a[i]<<" ";
	for(int i=0;i<9;i++)
		if(b[i]==false)
			c=false;
	return c;
}
int main()
{
	int a[9][9];
	int b[9];
	bool d;
	while(cin>>a[0][0]>>a[0][1]>>a[0][2]>>a[0][3]>>a[0][4]>>a[0][5]>>a[0][6]>>a[0][7]>>a[0][8])
	{
		d=true;
		for(int i=1;i<9;i++)
			for(int j=0;j<9;j++)
				cin>>a[i][j];
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				b[j]=a[i][j];				
			}
			
			if(dis(b)==false)
			{
				d=false;
				//cout<<" 1\n";
				goto end;
			}
		}
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				b[j]=a[j][i];				
			}
			
			if(dis(b)==false)
			{
				d=false;
				//cout<<" 1\n";
				goto end;
			}
		}
		b[0]=a[0][0],b[1]=a[0][1],b[2]=a[0][2],b[3]=a[1][0],b[4]=a[1][1],b[5]=a[1][2],b[6]=a[2][0],b[7]=a[2][1],b[8]=a[2][2];
		if(dis(b)==false)
		{
			d=false;
			//cout<<"2\n";
			goto end;
		}
		b[0]=a[3][0],b[1]=a[3][1],b[2]=a[3][2],b[3]=a[4][0],b[4]=a[4][1],b[5]=a[4][2],b[6]=a[5][0],b[7]=a[5][1],b[8]=a[5][2];
		if(dis(b)==false)
		{
			d=false;
			//cout<<"3\n";
			goto end;
		}
		b[0]=a[6][0],b[1]=a[6][1],b[2]=a[6][2],b[3]=a[7][0],b[4]=a[7][1],b[5]=a[7][2],b[6]=a[8][0],b[7]=a[8][1],b[8]=a[8][2];
		if(dis(b)==false)
		{
			d=false;
			//cout<<"4\n";
			goto end;
		}
		b[0]=a[0][3],b[1]=a[0][4],b[2]=a[0][5],b[3]=a[1][3],b[4]=a[1][4],b[5]=a[1][5],b[6]=a[2][3],b[7]=a[2][4],b[8]=a[2][5];
		if(dis(b)==false)
		{
			d=false;
			//cout<<"5\n";
			goto end;
		}
		b[0]=a[3][3],b[1]=a[3][4],b[2]=a[3][5],b[3]=a[4][3],b[4]=a[4][4],b[5]=a[4][5],b[6]=a[5][3],b[7]=a[5][4],b[8]=a[5][5];
		if(dis(b)==false)
		{
			d=false;
			//cout<<"6\n";
			goto end;
		}		
		b[0]=a[6][3],b[1]=a[6][4],b[2]=a[6][5],b[3]=a[7][3],b[4]=a[7][4],b[5]=a[7][5],b[6]=a[8][3],b[7]=a[8][4],b[8]=a[8][5];
		if(dis(b)==false)
		{
			d=false;
			//cout<<"7\n";
			goto end;
		}
		b[0]=a[0][6],b[1]=a[0][7],b[2]=a[0][8],b[3]=a[1][6],b[4]=a[1][7],b[5]=a[1][8],b[6]=a[2][6],b[7]=a[2][7],b[8]=a[2][8];
		if(dis(b)==false)
		{
			d=false;
			//cout<<"8\n";
			goto end;
		}
		b[0]=a[3][6],b[1]=a[3][7],b[2]=a[3][8],b[3]=a[4][6],b[4]=a[4][7],b[5]=a[4][8],b[6]=a[5][6],b[7]=a[5][7],b[8]=a[5][8];
		if(dis(b)==false)
		{
			d=false;
			//cout<<"9\n";
			goto end;
		}
		b[0]=a[6][6],b[1]=a[6][7],b[2]=a[6][8],b[3]=a[7][6],b[4]=a[7][7],b[5]=a[7][8],b[6]=a[8][6],b[7]=a[8][7],b[8]=a[8][8];
		if(dis(b)==false)
		{
			d=false;
			//cout<<"10\n";
			goto end;
		}
		end:
			if(d)
				cout<<"yes\n";
			else
				cout<<"no\n";
	}
}
