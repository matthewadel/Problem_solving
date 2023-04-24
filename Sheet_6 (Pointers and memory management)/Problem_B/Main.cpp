// https://vjudge.net/contest/539018#problem/B
// https://codeforces.com/problemset/problem/230/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

  long Kirito_strength, number_of_dragons;
  cin >> Kirito_strength >> number_of_dragons;
  string result = "YES";
  multimap<long, long> m;

  long dragonStrength, dragonBonus;

  for (size_t i{0}; i < number_of_dragons; i++)
  {
    cin >> dragonStrength >> dragonBonus;
    m.insert({dragonStrength, dragonBonus});
  }

  for (map<long, long>::iterator it = m.begin(); it != m.end(); it++)
  {
    if (Kirito_strength > it->first)
      Kirito_strength += it->second;
    else
    {
      result = "NO";
      break;
    }
  }
  // for (size_t i{0}; i < number_of_dragons; i++)
  // {
  //   if (Kirito_strength > v[i].first)
  //     Kirito_strength += v[i].second;
  //   else
  //   {
  //     result = "NO";
  //     break;
  //   }
  // }

  cout << result << endl;

  return 0;
}

// 2 2
// 1 99
// 100 0

// 10 1
// 100 100