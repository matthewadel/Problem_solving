// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/938624398/

#include <bits/stdc++.h>
using namespace std;
int currentPrice = 0;

int main()
{

  string s;
  cin >> s;
  stack<char> s_string;

  for (int i = 0; i < s.size(); i++)
  {
    if (!s_string.empty() && s[i] == s_string.top())
      s_string.pop();
    else
      s_string.push(s[i]);
  }

  while (!s_string.empty())
  {
    cout << s_string.top();
    s_string.pop();
  }

  return 0;
}