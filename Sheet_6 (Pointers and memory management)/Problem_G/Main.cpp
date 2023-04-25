// https://vjudge.net/contest/539018#problem/G
// https://codeforces.com/problemset/problem/258/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '0')
    {
      s.erase(i, 1);
      break;
    }
    else if (s[i] != '0' && i == s.size() - 1)
    {
      s.erase(s.size() - 1);
    }
  }

  cout << s << endl;
}