// https://vjudge.net/contest/539018#problem/F
// https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int number_of_inputs, number_of_students;
  cin >> number_of_students >> number_of_inputs;
  vector<long long> v(number_of_inputs);

  for (int i = 0; i < number_of_inputs; i++)
  {
    cin >> v[i];
  }

  sort(v.begin(), v.end());
  int difference = abs(v[0] - v[number_of_students - 1]);
  // 10 12 10 7 5 22
  // 6 4
  for (int i = 1; i <= number_of_inputs - number_of_students; i++)
  {
    if (difference > abs(v[i] - v[i + number_of_students - 1]))
      difference = abs(v[i] - v[i + number_of_students - 1]);
  }

  cout << difference << endl;
}