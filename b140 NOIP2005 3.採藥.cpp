#include<iostream>
#include<cstring>
using namespace std;

int k[2][1005];

int knapsack(int W,int wt[],int val[],int n)
{	
	memset(k,0,sizeof(k));
	/*for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
			cout<<k[i][j]<<" ";
		cout<<endl;
	}*/
	for(int i=0;i<=n;i++)
	{
		for(int w=0;w<=W;w++)
		{
			if(i==0||w==0)
				k[0][w]=k[1][w]=0;
			else
			{
				if(i%2==1)
				{
					if(wt[i-1]<=w)
						k[1][w]=max(val[i-1]+k[0][w-wt[i-1]],k[0][w]);
					else
						k[1][w]=k[0][w];
				}
				else
				{
					if(wt[i-1]<=w)
						k[0][w]=max(val[i-1]+k[1][w-wt[i-1]],k[1][w]);
					else
						k[0][w]=k[1][w];
				}
				
			}
			/*
			for (i = 0; i <= n; i++) 
		   { 
		       for (w = 0; w <= W; w++) 
		       { 
		           if (i==0 || w==0) 
		               K[i][w] = 0; 
		           else if (wt[i-1] <= w) 
		                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
		           else
		                 K[i][w] = K[i-1][w]; 
		       } 
		   } 
			*/
			
		}
	}
	if(n%2==1)
		return k[1][W];
	else
		return k[0][W];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int val[1001],wt[1001],W,n;
	while(cin>>W>>n)
	{
		for(int i=0;i<n;i++)
			cin>>wt[i]>>val[i];
		cout<<knapsack(W,wt,val,n)<<"\n";
	}
}
