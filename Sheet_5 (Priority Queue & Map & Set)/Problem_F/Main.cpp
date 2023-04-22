// https://codeforces.com/problemset/problem/474/A
// https://vjudge.net/contest/537759#problem/F

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string letters = R"(qwertyuiopasdfghjkl;zxcvbnm,./)";
  map<char, int> m;
  string type, word;
  cin >> type;
  cin >> word;

  for (int i = 0; i < letters.size(); i++)
    m[letters[i]] = i;

  for (int i = 0; i < word.size(); i++)
  {
    cout << ((type == "R") ? letters[m[word[i]] - 1] : letters[m[word[i]] + 1]);
  }
  return 0;
}
// -------------------------------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   string letters = R"(qwertyuiopasdfghjkl;zxcvbnm,./)";
//   map<char, char> m;
//   string type, word;
//   cin >> type;
//   cin >> word;

//   for (int i = 0; i < letters.size(); i++)
//   {
//     if (type == "R")
//       m[letters[i]] = (i - 1 >= 0) ? (letters[i - 1]) : '\0';
//     else
//       m[letters[i]] = (i + 1 < letters.size()) ? (letters[i + 1]) : '\0';
//   }

//   for (int i = 0; i < word.size(); i++)
//   {
//     cout << char(m[word[i]]);
//   }

//   return 0;
// }