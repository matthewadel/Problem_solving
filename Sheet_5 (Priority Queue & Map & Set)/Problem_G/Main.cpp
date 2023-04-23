// https://codeforces.com/problemset/problem/1526/C2
// https://vjudge.net/contest/537759#problem/G

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   long long size;
//   int portion;
//   int temp;
//   multiset<int, greater<int>> portion_set;

//   cin >> size;

//   while (size--)
//   {
//     cin >> temp;
//     portion_set.emplace(temp);
//   }

//   long long totalHealth = 0;
//   long long count = 0;
//   for (auto it = portion_set.begin(); it != portion_set.end(); it = next(it))
//   {
//     // cout<<*it<<" ";
//     totalHealth += *it;
//     // cout << totalHealth << endl;
//     if (totalHealth < 0)
//     {
//       cout << count;
//       break;
//     }
//     else
//       count++;
//   }

//   return 0;
// }
// -------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long size;
  int temp;
  priority_queue<int, vector<int>, greater<int>> portion_queue;

  cin >> size;
  long long sum;
  long long count = size;

  while (size--)
  {
    cin >> temp;
    portion_queue.push(temp);
    sum += temp;
  }

  while (sum < 0)
  {
    sum -= portion_queue.top();
    portion_queue.pop();
    count--;
  }

  cout << count << endl;

  return 0;
}

// -------------------------------------------------------------------------------------
// the solution
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   long long N;
//   cin >> N;
//   priority_queue<int, vector<int>, greater<int>> portion_queue;
//   long long sum = 0;
//   long long potions = 0;

//   for (int i = 0; i < N; i++)
//   {
//     int temp;
//     cin >> temp;
//     sum += temp;
//     portion_queue.push(temp);
//     potions++;
//     while (sum < 0)
//     {
//       sum -= portion_queue.top();
//       portion_queue.pop();
//       potions--;
//     }
//   }

//   cout << potions << endl;

//   return 0;
// }