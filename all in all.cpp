#include <bits/stdc++.h>

using namespace std ;

int main()
{
	string s, t ;

	while(cin >> s >> t) 
	{
		int a = 0; 
		for(int i=0;i<t.length();i++)
		{
			if(s[a] == t[i])
			{
				a++ ;
			}
		}

		if(a==s.length())
		{
			cout << "Yes" << endl ;
		}

		else 
		{
			cout << "No" << endl ;
		}
	}
}