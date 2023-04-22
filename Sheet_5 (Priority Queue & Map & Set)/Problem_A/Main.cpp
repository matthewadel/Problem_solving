// https://vjudge.net/contest/537759#problem/A
// https://www.hackerrank.com/contests/101hack19/challenges/two-strings

#include <bits/stdc++.h>
using namespace std;

int main()
{

  int number_of_operations;
  cin >> number_of_operations;

  while (number_of_operations--)
  {
    string s1, s2;
    cin >> s1 >> s2;
    set<char> set_1;
    string result = "NO";

    for (int i = 0; i < s1.size(); i++)
      set_1.insert(s1[i]);
    for (int i = 0; i < s2.size(); i++)
    {
      if (set_1.count(s2[i]))
      {
        result = "YES";
        break;
      }
    }
    cout << result << endl;
  }

  return 0;
}
// -------------------------------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int number_of_operations;
//   cin >> number_of_operations;

//   while (number_of_operations--)
//   {
//     string s1, s2;
//     cin >> s1 >> s2;
//     map<char, int> m;
//     string result = "NO";

//     for (int i = 0; i < s1.size(); i++)
//     {
//       m[s1[i]] = 1;
//     }
//     for (int i = 0; i < s2.size(); i++)
//     {
//       if (m[s2[i]])
//       {
//         result = "YES";
//         break;
//       }

//     }

//     cout << result << endl;
//   }
//   return 0;
// }