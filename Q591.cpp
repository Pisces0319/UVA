#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std ;

int main()
{
	int n ;
	int times = 0 ;



	while(scanf("%d",&n))
	{
		int s[n] ;
		int total = 0;
		int avg = 0 ;
		int ans = 0 ;

		if(n==0)
		{
			break ;
		}
		times++ ;

		for(int i=0;i<n;i++)
		{
			cin >> s[i] ;
			total = total + s[i] ;
		}

		avg = total / n ;
		for(int i=0;i<n;i++)
		{
			ans = ans + abs(s[i] - avg) ;
		} 
		cout << "Set #" << times << endl ;
		cout << "The minimum number of moves is " << ans/2 << "." << endl ;
		cout << endl;
	}

	
}