// https://vjudge.net/contest/539018#problem/H
// https://codeforces.com/problemset/problem/1516/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
  size_t number_of_testcases;
  cin >> number_of_testcases;

  int size_of_array, number_of_operations;
  vector<int> v;
  int temp;
  int current_index;

  while (number_of_testcases--)
  {

    current_index = 0;
    v.clear();
    cin >> size_of_array >> number_of_operations;
    for (int i = 0; i < size_of_array; i++)
    {
      cin >> temp;
      v.push_back(temp);
    }

    while (current_index < size_of_array - 1)
    {
      if (v[current_index] != 0)
      {

        if (v[current_index] >= number_of_operations)
        {
          v[current_index] -= number_of_operations;
          v[size_of_array - 1] += number_of_operations;
          number_of_operations = 0;
          break;
        }
        else
        {
          v[size_of_array - 1] += v[current_index];
          number_of_operations -= v[current_index];
          v[current_index] = 0;
          current_index++;
        }
      }
      else if (v[current_index] == 0)
        current_index++;
      else if (!number_of_operations || (current_index == size_of_array - 1))
        break;
    }

    for (int vv : v)
      cout << vv << " ";
    cout << endl;
  }
}

// -----------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   size_t number_of_testcases;
//   cin >> number_of_testcases;

//   int size_of_array, number_of_operations;
//   vector<int> v;
//   int temp;
//   int current_index;

//   while (number_of_testcases--)
//   {

//     current_index = 0;
//     v.clear();
//     cin >> size_of_array >> number_of_operations;
//     for (int i = 0; i < size_of_array; i++)
//     {
//       cin >> temp;
//       v.push_back(temp);
//     }

//     while (number_of_operations)
//     {
//       if ((current_index < size_of_array - 1) && (v[current_index] != 0))
//       {
//         v[current_index]--;
//         v[size_of_array - 1]++;
//         number_of_operations--;
//       }
//       else if (current_index == size_of_array - 1)
//         break;
//       else
//         current_index++;
//     }

//     for (int vv : v)
//       cout << vv << " ";
//     cout << endl;
//   }
// }

// هنا انا بلف علي كل العناصر عشان اخليها صفر
// معرفش ليه الوجك الغريب