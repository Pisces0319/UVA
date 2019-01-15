#include <iostream>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <set>

using namespace std;

int main() 
{
  int num;
  int total = 0 ;
  cin >> num ;
  while(num!=0)
  {
    int sum[num-1];
    memset(sum, 0, sizeof(sum));
    int al[num] ;
    for(int i=0; i<num; i++)
    {
      cin >> al[i]; 
    }               
    sort(al,al+num);
    for(int i=0; i<num; i++)
    {
      sum[i+1] = sum[i] + al[i];
    }

    for(int t=2; t<=num; t++)
    {
      total = total + sum[t] ;
    }
    cout << total << endl ;
  }

}