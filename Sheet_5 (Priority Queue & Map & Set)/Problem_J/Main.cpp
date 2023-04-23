// https://vjudge.net/contest/537759#problem/J
// https://codeforces.com/problemset/problem/1468/C

#include <bits/stdc++.h>
using namespace std;
int currentPrice = 0;

int main()
{

  int number_of_operations;
  cin >> number_of_operations;
  string operation;
  cin.ignore();
  map<int, queue<int>> m;
  deque<pair<int, int>> v;

  int currentIndex = 1;
  for (int i = 0; i < number_of_operations; i++)
  {
    getline(cin, operation);
    if (operation[0] == '1')
    {
      int price = stoi(operation.substr(2));
      v.push_back({currentIndex, price});
      m[price].push(currentIndex++);
      // printVector(v);
    }
    else if (operation[0] == '2')
    {
      for (pair<int, int> p : v)
      {
        if (p.second != -1)
        {
          cout << p.first << " ";
          m[p.second].pop();
          v[i].second = -1;
        }
      }
      // cout << (v[0].first) << " ";
      // m[(v[0].second)].pop();
      // v.pop_front();
    }
    else
    {
      int currentIndex = 0;
      for (auto it = m.rbegin(); it != m.rend(); it++)
      {
        if (!(it->second.empty()))
        {
          currentPrice = it->first;
          currentIndex = it->second.front();
          break;
        }
      }
      cout << currentIndex << " ";
      v.erase(next(v.begin(), currentIndex));
      m[currentPrice].pop();
    }
  }

  return 0;
}