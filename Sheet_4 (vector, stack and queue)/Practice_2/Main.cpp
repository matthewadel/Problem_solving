// https://leetcode.com/problems/split-a-string-in-balanced-strings/

#include <bits/stdc++.h>
using namespace std;

int balancedStringSplit(string input)
{

  int total_balanced_string = 0;
  stack<char> s;
  s.push(input[0]);

  for (int i = 1; i < input.size(); i++)
  {
    if (!s.empty() && input[i] != s.top())
      s.pop();
    else
      s.push(input[i]);

    if (s.empty())
      total_balanced_string++;
  }

  return total_balanced_string;
}

int main()
{

  string s = "RLRRLLRLRL";

  cout << balancedStringSplit(s) << endl;
  return 0;
}