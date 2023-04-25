// https://vjudge.net/contest/539018#problem/J
// https://codeforces.com/problemset/problem/1253/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
  size_t number_of_testcases;
  cin >> number_of_testcases;

  vector<int> v1, v2;
  int temp;

  while (number_of_testcases--)
  {
    string result = "YES";
    int size_of_array;
    cin >> size_of_array;
    v1.clear();
    v2.clear();

    for (int i = 0; i < size_of_array; i++)
    {
      cin >> temp;
      v1.push_back(temp);
    }
    for (int i = 0; i < size_of_array; i++)
    {
      cin >> temp;
      v2.push_back(temp);
    }

    int difference = 0, l = 0, r = 0;
    for (int i = 0; i < size_of_array; i++)
    {
      if (v2[i] - v1[i] < 0) // check if the difference is of a positive value
      {
        // cout << 1 << endl;
        result = "NO";
        break;
      }
      else if (v2[i] - v1[i] > 0)
      {
        if (difference == 0) // the first time to define the difference and l values
        {
          difference = v2[i] - v1[i];
          l = i + 1;
        }
        else if (difference != v2[i] - v1[i]) // check if difference between the elements is the same
        {
          // cout << 1 << endl;
          result = "NO";
          break;
        }
        else if (l != 0 && r != 0) // check if the different elements are after each other
        {
          // cout << 1 << endl;
          result = "NO";
          break;
        }
      }
      else if (difference != 0 && v2[i] - v1[i] == 0 && r == 0) // the first time to define r value
      {
        r = i;
      }
    }

    // cout << l << " " << r << " ";
    cout << result << endl;
  }
}

// same difference
// after each other
// positive difference