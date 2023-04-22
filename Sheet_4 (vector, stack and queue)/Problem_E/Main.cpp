// Problem_D: https://vjudge.net/contest/537054#problem/E
// https://codeforces.com/problemset/problem/300/A

#include <bits/stdc++.h>
using namespace std;

void print_Vector(vector<long long> v)
{
  for (long long i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << "\n";
}

void checkForNegativeVectorLength(vector<long long> &v_negative, vector<long long> &v_zeros)
{
  if (v_negative.size() % 2 == 0)
  {
    v_zeros.push_back(v_negative.back());
    v_negative.pop_back();
  }
}

int main()
{

  vector<long long> v_positive;
  vector<long long> v_negative;
  vector<long long> v_zeros;
  long long size, temp;

  cin >> size;
  for (long long i = 0; i < size; i++)
  {
    cin >> temp;
    if (temp > 0)
      v_positive.push_back(temp);
    else if (temp < 0)
      v_negative.push_back(temp);
  }

  v_zeros.push_back(0);

  if (v_positive.empty())
  {
    v_positive.push_back(v_negative.back());
    v_negative.pop_back();
    v_positive.push_back(v_negative.back());
    v_negative.pop_back();

    checkForNegativeVectorLength(v_negative, v_zeros);
    cout << v_negative.size() << ' ';
    print_Vector(v_negative);
    cout << 2 << " ";
    print_Vector(v_positive);
  }
  else
  {
    checkForNegativeVectorLength(v_negative, v_zeros);
    cout << v_negative.size() << ' ';
    print_Vector(v_negative);
    cout << v_positive.size() << ' ';
    print_Vector(v_positive);
  }
  cout << v_zeros.size() << ' ';
  print_Vector(v_zeros);

  return 0;
}