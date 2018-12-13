#include <iostream>
#include<cstring>
using namespace std;
string s1,s2;
int lcs[101][101]; 
int main()
{
  int s1n,s2n;
  while(getline(cin,s1))
  {
    getline(cin,s2);
    s1n=s1.length();
    s2n=s2.length();
    memset(lcs,0,sizeof(lcs));        
    for(int i=0;i<s1n;i++)
	{
      for(int j=0;j<s2n;j++)
	  {
	  	for(int k=0;k<=s1n;k++)
	  	{
	  		for(int l=0;l<=s2n;l++)
	  			cout<<lcs[k][l]<<" ";
	  		cout<<endl;
		}
		cout<<"--------------\n";
        if (s1[i]==s2[j])
		{
          lcs[i+1][j+1]=lcs[i][j]+1;    
        }
		else
		{ 
          if(lcs[i][j+1]>lcs[i+1][j])
		  {
            lcs[i+1][j+1]=lcs[i][j+1];
          }
		  else
		  {
            lcs[i+1][j+1]=lcs[i+1][j];
          }             
        }                 
      }
    }
    cout << lcs[s1n][s2n] << endl;     
  }
}
//abcsd
//dfbc
