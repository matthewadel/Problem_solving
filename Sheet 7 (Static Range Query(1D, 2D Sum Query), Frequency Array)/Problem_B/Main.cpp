// https://vjudge.net/contest/539773#problem/B
// https://www.spoj.com/problems/CSUMQ/en/

#include <bits/stdc++.h>
using namespace std;

int main()
{

  long size_of_array;
  cin >> size_of_array;
  vector<int> v(size_of_array);
  long temp;
  cin >> v[0];

  for (int i = 1; i < size_of_array; i++)
  {
    cin >> temp;
    v[i] = temp + v[i - 1];
  }

  long number_of_queries;
  cin >> number_of_queries;

  string queryString;
  cin.ignore();
  for (int i = 0; i < number_of_queries; i++)
  {
    getline(cin, queryString);

    long from_index = stol(queryString.substr(0, queryString.find(' ')));
    long to_index = stol(queryString.substr(queryString.find(' ') + 1));

    cout << v[to_index] - (from_index ? v[from_index - 1] : 0) << endl;
  }

  return 0;
}