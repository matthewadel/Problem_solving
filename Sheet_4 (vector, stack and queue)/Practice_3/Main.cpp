// https://leetcode.com/problems/valid-parentheses/submissions/937926547/

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
  stack<char> st;
  for (int i = 0; i < s.size(); i++)
  {
    if (!st.empty() && (st.top() - s[i] == -1 || st.top() - s[i] == -2))
      st.pop();
    else
      st.push(s[i]);
  }

  return st.empty();
}

int main()
{

  string s = "(]";

  cout << isValid(s) << endl;
  return 0;
}