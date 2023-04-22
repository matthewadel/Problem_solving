// https://vjudge.net/contest/537759#problem/D
// https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

  string s;
  cin.ignore();
  getline(cin, s);
  map<char, int> m;

  for (int i = 0; i < s.size() - 1; i = i + 3)
    m[s[i]]++;

    cout<<m.size();
  return 0;
}
// -------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   string s;
//   cin.ignore();
//   getline(cin, s);
//   set<char> set_1;

//   for (int i = 0; i < s.size() - 1; i = i + 3)
//     set_1.emplace(s[i]);

//     cout<<set_1.size();

//   return 0;
// }
// -------------------------------------------------------------------------------------
