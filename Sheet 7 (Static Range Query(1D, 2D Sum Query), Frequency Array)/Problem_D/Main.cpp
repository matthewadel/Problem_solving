// https://vjudge.net/contest/539773#problem/D
// https://codeforces.com/problemset/problem/433/B

#include <bits/stdc++.h>
using namespace std;

int main()
{

  long size_of_array;
  cin >> size_of_array;
  vector<long long> v(size_of_array);
  multiset<long long> s;
  vector<long long> s_sum(size_of_array);
  long temp;

  cin >> v[0];
  s.emplace(v[0]);
  for (int i = 1; i < size_of_array; i++)
  {
    cin >> temp;
    v[i] = v[i - 1] + temp;
    s.emplace(temp);
  }

  long long currentIndex = 1;
  s_sum[0] = *(s.begin());
  for (multiset<long long>::iterator it = next(s.begin()); it != s.end(); it++)
  {
    s_sum[currentIndex] = s_sum[currentIndex - 1] + *it;
    currentIndex++;
  }

  long long numberOfQueries;
  cin >> numberOfQueries;
  string string_query;
  cin.ignore();

  for (long long i = 0; i < numberOfQueries; i++)
  {
    getline(cin, string_query);
    string sub = string_query.substr(string_query.find(' ') + 1);

    long long firstIndex = stol(sub.substr(0, sub.find(' ')));
    long long secondIndex = stol(sub.substr(sub.find(' ') + 1));

    if (string_query[0] == '1')
      cout << v[secondIndex - 1] - (firstIndex == 1 ? 0 : v[firstIndex - 2]) << endl;
    else
      cout << s_sum[secondIndex - 1] - (firstIndex == 1 ? 0 : s_sum[firstIndex - 2]) << endl;
  }

  return 0;
}

// ----------------------------------------------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   long long no_of_inputs, tempNumber;
//   cin >> no_of_inputs;
//   priority_queue<long long, vector<long long>, greater<long long>> q;
//   vector<long long> v_prefix;
//   vector<long long> v_prefix_ordered;

//   for (long long i = 0; i < no_of_inputs; i++)
//   {
//     cin >> tempNumber;
//     v_prefix.push_back(i == 0 ? tempNumber : tempNumber + v_prefix.back());
//     q.push(tempNumber);
//   }

//   while (q.size())
//   {
//     v_prefix_ordered.push_back(v_prefix_ordered.size() == 0 ? q.top() : q.top() + v_prefix_ordered.back());
//     q.pop();
//   }

//   long long no_of_questions, type, l, r;
//   cin >> no_of_questions;

//   for (long long i = 0; i < no_of_questions; i++)
//   {
//     cin >> type >> l >> r;

//     if (type == 1)
//       cout << ((r == 0) ? 0 : v_prefix[r - 1]) - ((l == 1) ? 0 : v_prefix[l - 2]) << endl;
//     else if (type == 2)
//       cout << ((r == 0) ? 0 : v_prefix_ordered[r - 1]) - ((l == 1) ? 0 : v_prefix_ordered[l - 2]) << endl;
//   }

//   // [6, 4,  2,  7,  2,  7]
//   // [6, 10, 12, 19, 21, 28]
//   // [2, 2,  4,  6,  7,  7]
//   // [2, 4,  8,  14, 21, 28]

//   return 0;
// }