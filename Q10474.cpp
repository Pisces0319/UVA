#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std ;

int main()
{
	int n ; //n塊大理石
	int k ; //尋找k塊
	int times =0 ;
	while(scanf("%d %d",&n,&k))
	{
		if(n==0 && k==0)
		{
			break ;
		}
		bool found = true ;
		times++ ;
		int marble[n] ;
		for(int i=0;i<n;i++)
		{
			cin >> marble[i] ;
		}
		sort(marble,marble+n) ;

		int f[k] ;
		int ans[k] ;
		for(int i=0;i<k;i++)
		{
			cin >> f[i] ;
			for(int j=0;j<n;j++)
			{
				if(marble[j] == f[i])
				{
					ans[i] = j + 1 ;
					break ;
				}
				else if(j == n-1 && marble[j] != f[i])
				{
					ans[i] = 0 ;
				}
			}

		}

			cout << "CASE# " << times << ":" << endl; 
			for(int i=0;i<k;i++)
			{
				if(ans[i] == 0)
				{
					cout << f[i] << " not found" << endl ;
					found = true ;
					continue;
				}
				else 
				{
					cout << f[i] << " found at " << ans[i] << endl ;
				}
				
			}
		






	}
}

