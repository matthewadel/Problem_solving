// https://vjudge.net/contest/537759#problem/C
// https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long number_of_operations;
  cin >> number_of_operations;
  string name;
  map<string, int> m;

  while (number_of_operations--)
  {

    cin >> name;
    if (m[name] == 0)
    {
      cout << "OK"<<endl;
    }
    else
    {
      cout << name << m[name]<<endl;
    }
    m[name]++;
  }

  return 0;
}
// -------------------------------------------------------------------------------------
