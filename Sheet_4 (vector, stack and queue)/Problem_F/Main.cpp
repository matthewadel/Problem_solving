// Problem_D: https://vjudge.net/contest/537054#problem/E
// https://codeforces.com/problemset/problem/300/A

#include <bits/stdc++.h>
using namespace std;

void printStack(stack<long long> &s)
{
  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
}

int main()
{

  long long number_of_test_cases;
  cin >> number_of_test_cases;
  long long size;

  while (number_of_test_cases--)
  {

    size;
    cin >> size;
    vector<int> v(size);

    for (int i = 0; i < size; i++)
    {
      cin >> v[i];
    }

    stack<long long> output;
    set<int, greater<int>> s(v.begin(), v.end());
    for (int i = size - 1; i >= 0; i--)
    {
      output.push(v[i]);
      if (*(s.begin()) == v[i])
      {
        printStack(output);
      }
      s.erase(v[i]);
    }
  }
  return 0;
}

// ------------------------------------------------------------------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// void printStack(stack<long long> &s)
// {
//   while (!s.empty())
//   {
//     cout << s.top() << " ";
//     s.pop();
//   }
// }

// int main()
// {

//   long long number_of_test_cases;
//   cin >> number_of_test_cases;
//   long long size;

//   while (number_of_test_cases--)
//   {
//     cin >> size;
//     vector<long long> v(size);
//     stack<long long> output;

//     long long i = 0;
//     while (i < size)
//     {
//       cin >> v[i++];
//     }

//     long long maxNumber = *max_element(v.begin(), v.end());
//     for (vector<long long>::reverse_iterator it = v.rbegin(); it < v.rend(); it++)
//     {
//       output.push(*it);
//       if (*it == maxNumber)
//       {
//         printStack(output);
//         if (next(it) != v.rend())
//           maxNumber = *max_element(next(it), v.rend());
//       }
//     }
//   }
//   return 0;
// }