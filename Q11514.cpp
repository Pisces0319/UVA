#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std ;

int main()
{
	int t ;
	char c ;
	int num ;
	scanf("%d", &t) ;
	for(int i=0;i<t;i++)
	{
		c = getchar();
		scanf("%d", &num) ;
		for(int i=0;i<num;i++)
		{
			printf("%c", c) ;
		}
	}
}