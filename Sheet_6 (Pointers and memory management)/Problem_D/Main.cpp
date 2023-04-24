// https://vjudge.net/contest/539018#problem/D
// https://codeforces.com/problemset/problem/946/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

  long long number_of_inputs, temp;
  long long sum_positive = 0, sum_negaitive = 0;
  cin >> number_of_inputs;
  for (size_t i{0}; i < number_of_inputs; i++)
  {
    cin >> temp;
    if (temp > 0)
      sum_positive += temp;
    else
      sum_negaitive += temp;
  }

  cout << sum_positive - sum_negaitive << endl;

  return 0;
}