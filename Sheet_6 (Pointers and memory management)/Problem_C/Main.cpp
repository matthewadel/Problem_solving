// https://vjudge.net/contest/539018#problem/C
// https://codeforces.com/problemset/problem/560/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

  long long number_of_inputs, temp;
  int result = 1;
  cin >> number_of_inputs;

  for (size_t i{0}; i < number_of_inputs; i++)
  {
    cin >> temp;
    if (temp == 1)
      result = -1;
  }

  cout << result;

  return 0;
}