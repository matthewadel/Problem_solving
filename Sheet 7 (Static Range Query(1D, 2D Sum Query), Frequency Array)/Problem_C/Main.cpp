// https://vjudge.net/contest/539773#problem/C
// https://www.hackerrank.com/challenges/frequency-queries/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<long long, long long> v;
  map<long long, int> number_of_occurrencies;
  string s;
  long long number_of_queries;
  cin >> number_of_queries;

  cin.ignore();
  for (long long i = 0; i < number_of_queries; i++)
  {
    getline(cin, s);

    int first_sub = stoi(s.substr(0, 1));
    long second_sub = stol(s.substr(2));

    if (first_sub == 1)
    {
      if (number_of_occurrencies[v[second_sub]] != 0)
        number_of_occurrencies[v[second_sub]]--;
      v[second_sub]++;
      number_of_occurrencies[v[second_sub]]++;
    }
    else if (first_sub == 2)
    {
      if (number_of_occurrencies[v[second_sub]] != 0)
      {
        number_of_occurrencies[v[second_sub]]--;
        v[second_sub]--;
        if (v[second_sub] != 0)
          number_of_occurrencies[v[second_sub]]++;
      }
    }
    else if (first_sub == 3)
    {
      cout << (number_of_occurrencies[second_sub] != 0 ? "1" : "0") << endl;
    }
  }

  return 0;
}

// --------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// pair<bool, int> checkIfNumberExists(map<int, unordered_set<int>> &mp, int value)
// {

//   pair<bool, int> exists = {false, 0};
//   for (int i = 0; i < mp.size(); i++)
//   {
//     if (i == 0)
//       continue;
//     else if (mp[i].count(value))
//     {
//       exists.first = true;
//       exists.second = i;
//       break;
//     }
//   }

//   return exists;
// }

// void insertAnElement(map<int, unordered_set<int>> &mp, int value)
// {
//   pair<bool, int> exists = checkIfNumberExists(mp, value);

//   mp[exists.second + 1].insert(value);

//   if (exists.second)
//   {
//     mp[exists.second].erase(value);
//   }
// }

// void deleteAnElement(map<int, unordered_set<int>> &mp, int value)
// {
//   pair<bool, int> exists = checkIfNumberExists(mp, value);

//   if (exists.first)
//   {
//     mp[exists.second].erase(value);
//     if (exists.second > 1)
//       mp[exists.second - 1].insert(value);
//   }
// }

// int main()
// {

//   // mp [no. of occurrencies, values inside it];
//   map<int, unordered_set<int>> mp;
//   mp[0] = {0};
//   long no_of_queries;
//   cin >> no_of_queries;
//   int operation;
//   long long value;

//   for (int i = 0; i < no_of_queries; i++)
//   {
//     cin >> operation;
//     cin >> value;

//     if (operation == 1)
//     {
//       insertAnElement(mp, value);
//     }
//     else if (operation == 2)
//     {
//       deleteAnElement(mp, value);
//     }
//     else if (operation == 3)
//     {
//       if (mp.count(value) && !(mp[value].empty()))
//         cout << 1 << endl;
//       else
//         cout << 0 << endl;
//     }

//   }

//   return 0;
// }