// Problem_C: https://vjudge.net/contest/537054#problem/C
// https://codeforces.com/problemset/problem/450/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

  int size, initialNumberOfCandies;
  cin >> size >> initialNumberOfCandies;
  vector<int> v(size);

  for (size_t i{0}; i < size; i++)
  {
    cin >> v[i];
  }

  pair<int, int> highest_index{0, 0};
  for (size_t i{0}; i < size; i++)
  {
    int number_of_repeatition = v[i] % initialNumberOfCandies == 0 ? (v[i] / initialNumberOfCandies) : (v[i] / initialNumberOfCandies + 1);
    if ((highest_index.second < number_of_repeatition) || (highest_index.first < i && highest_index.second == number_of_repeatition))
    {
      highest_index = {i, number_of_repeatition};
    }
  }

  cout << highest_index.first + 1;

  return 0;
}

// --------------------------------------------------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int size, initialNumberOfCandies;
//   int last_index = 1;
//   cin >> size >> initialNumberOfCandies;
//   queue<pair<int, int>> q;

//   int temp;
//   for (size_t i{0}; i < size; i++)
//   {
//     cin >> temp;
//     q.push({i, temp});
//   }

//   while (!q.empty())
//   {
//     pair<int, int> current_index = q.front();
//     last_index = current_index.first;
//     q.pop();
//     if (current_index.second - initialNumberOfCandies > 0)
//     {
//       current_index.second = current_index.second - initialNumberOfCandies;
//       q.push(current_index);
//     }
//   }

//   cout << last_index + 1;

//   return 0;
// }