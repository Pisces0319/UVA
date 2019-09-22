#include <iostream>

using namespace std ;

int main()
{
	int n ;
	int t ;
	int pos ;
	int nn ;
	string ins ;
	cin >> n ;
	int num[n] ;
	int sum[n] ;
	sum[0] = 0 ;
	for(int i=0;i<n;i++)
	{
		cin >> num[i] ;
		
	}

	while(cin >> ins)
	{
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				sum[i] = num[i] ;
			}
			else 
			{
				sum[i] = num[i] + sum[i-1] ;
			}
		}
		if(ins == "sum")
		{
			cin >> t ;
			cout << sum[t-1] << endl ;
		}

		if(ins == "update")
		{
			cin >> pos >> nn ;
			num[pos-1] = nn ;
		}
	}

	
}