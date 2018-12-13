#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;

int k[2][1000005];

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
	//for(int i=0;i<=n;i++)
	//{
	//	for(int j=0;j<=W;j++)
	//		cout<<k[i][j]<<" ";
	//	cout<<endl;
	//}
	
	/*if(n==0||W==0)
		return 0;
	else if(wt[n-1]>W)
		return knapsack(W,wt,val,n-1);
	else
		return max(val[n-1]+knapsack(W-wt[n-1], wt, val, n-1),knapsack(W, wt, val, n-1));*/
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int val[1001],wt[1001],W,n;
	string s1,s2;
	while(getline(cin,s1))
	{
		getline(cin,s2);
		stringstream ss1(s1);
		stringstream ss2(s2);
		
		n=0;
		while(ss1>>wt[n])
			n++;
		n=0;
		while(ss2>>val[n])
			n++;
		//cout<<"n:"<<n<<endl;
		cin>>W;
		cin.ignore();
		/**for(int i=0;i<=n;i++)
			for(int j=0;j<=W;j++)
				k[i][j]=0;*/
		cout<<knapsack(W,wt,val,n)<<endl;
	}
}
