#include<iostream>
using namespace std;

int main()
{
	long n,cn;
	bool done=false;
	bool dis[9];
	for(int i=0;i<8;i++)
		dis[i]=false;
	n=1;
	while(!done)
	{
		if(n%1==0)
		{
			n=n*10;
		d2:
			if(n%2==0)
			{
				n=n*10;
			d3:
				if(n%3==0)
				{
					n=n*10;
				d4:
					if(n%4==0)
					{
						n=n*10;
					d5:
						if(n%5==0)
						{
							n=n*10;
						d6:
							if(n%6==0)
							{
								n=n*10;
							d7:
								if(n%7==0)
								{
									n=n*10;
								d8:
									if(n%8==0)
									{
										n=n*10;
									d9:
										if(n%9==0)
										{
											//cout<<n<<endl;
											cn=n;
											while(cn>0)
											{
												if(cn%10>0)
													dis[cn%10-1]=true;
												cn/=10;
											}
											done=true;
											for(int i=0;i<9;i++)
												if(!dis[i])
													done=false;
											if(!done)
											{
												for(int i=0;i<9;i++)
													dis[i]=false;
												goto do9;
											}
											else
											{
												goto end;
											}
										}
										else
										{
										do9:
											if(n%10==9)
											{
												n/=10;
												goto do8;
											}
											else
											{
												n+=1;
												goto d9;
											}
										}
									}
									else
									{
									do8:
										if(n%10==9)
										{
											n/=10;
											goto do7;
										}
										else
										{
											n+=1;
											goto d8;
										}
									}
								}
								else
								{
								do7:
									if(n%10==9)
									{
										n/=10;
										goto do6;
									}
									else
									{
										n+=1;
										goto d7;
									}
								}	
							}
							else
							{
							do6:
								if(n%10==9)
								{
									n/=10;
									goto do5;
								}
								else
								{
									n+=1;
									goto d6;
								}
							}	
						}
						else
						{
						do5:
							if(n%10==9)
							{
								n/=10;
								goto do4;
							}
							else
							{
								n+=1;
								goto d5;
							}
						}
					}
					else
					{
					do4:
						if(n%10==9)
						{
							n/=10;
							goto do3;
						}
						else
						{
							n+=1;
							goto d4;
						}
					}
				}
				else
				{
				do3:
					if(n%10==9)
					{
						n/=10;
						goto do2;
					}
					else
					{
						n+=1;
						goto d3;
					}
				}
			}
			else
			{
			do2:
				if(n%10==8)
				{
					n/=10;
					goto out;
				}
					
				else
				{
					n+=2;
					goto d2;
				}
			}
		}
	out:
		n+=1;
	}
end:
	cout<<n<<endl;
	//381654729
}
