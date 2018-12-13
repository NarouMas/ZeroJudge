#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int s[20000],v[20000],c[10001];
/*int knapsack(int n,int w)
{
	if(w<0) return -1e9;
	if(n==0) return 0;
	
	return c[n][w]=max(knapsack(n-1,w-s[n])+v[n],knapsack(n-1,w));
}*/
int knapsack(int n, int w)
{
    memset(c, 0, sizeof(c));
 
    for (int i = 0; i < n; ++i)
        for (int j = w; j - s[i] >= 0; --j)    // 由後往前
            c[j] = max(c[j], c[j - s[i]] + v[i]);
 
    return c[w];
}
int main()
{
	int n;	
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>s[i]>>v[i];
		cout<<knapsack(n,100)<<endl;
	}
}
