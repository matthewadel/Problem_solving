// https://vjudge.net/contest/539018#problem/A
// https://atcoder.jp/contests/abc189/tasks/abc189_a?lang=en

#include <iostream>
using namespace std;

int main()
{

  string s;
  cin >> s;
  string result = "won";
  for (int i = 1; i < s.size(); i++)
    if (s[i] != s[i - 1])
    {
      result = "Lost";
      break;
    }

  cout << result << endl;
  return 0;
}