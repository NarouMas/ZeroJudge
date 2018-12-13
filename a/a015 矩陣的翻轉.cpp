#include<iostream>
using namespace std;

int main()
{
	int row,col;
		
	while(cin>>col>>row)
	{

		//cin>>row;
	
		int arr[col+row][row+col];
		int copy[col][row];
	
		for(int i=0;i<col;i++)
			for(int j=0;j<row;j++)
				cin>>arr[i][j];
	
		for(int i=0;i<col;i++)
			for(int j=0;j<row;j++)
				copy[i][j]=arr[i][j];
	
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
			{
				arr[i][j]=copy[j][i];
			}
			
		for(int i=0;i<row;i++)
		{	
			for(int j=0;j<col;j++)
			{
			cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
