// Problem_D: https://vjudge.net/contest/537054#problem/D
// https://codeforces.com/problemset/problem/343/B

#include <bits/stdc++.h>
using namespace std;

int main()
{

  stack<char> s;
  string input;

  cin >> input;
  for (size_t i{0}; i < input.size(); i++)
  {
    if (!s.empty() && s.top() == input[i])
    {
      s.pop();
    }
    else
    {
      s.push(input[i]);
    }
  }

  if (s.empty())
    cout << "Yes";
  else
    cout << "No";

  return 0;
}