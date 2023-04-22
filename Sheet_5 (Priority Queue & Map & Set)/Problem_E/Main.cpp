// https://codeforces.com/problemset/problem/637/B
// https://vjudge.net/contest/537759#problem/E

#include <bits/stdc++.h>
using namespace std;

int main()
{

  map<string, int> m;
  int size;
  string s;
  cin >> size;
  vector<string> v(size);

  for (int i = 0; i < size; i++)
  {
    cin >> s;
    m[s] = i;
  }

  for (pair<string, int> p : m)
  {
    v[p.second] = p.first;
  }

  for (int i = v.size() - 1; i >= 0; i--)
    if (v[i] != "")
      cout << v[i] << endl;
  return 0;
}
// -------------------------------------------------------------------------------------
