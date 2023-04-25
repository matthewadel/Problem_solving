// https://vjudge.net/contest/539773#problem
// https://www.codechef.com/problems/FREQARRY

// #include <bits/stdc++.h>
// using namespace std;

// string checkArraySequence(int number_of_elements)
// {

//   int number;
//   vector<int> nums(pow(10,5),0);
//   string result = "prekrasnyy";
//   for (int i = 0; i < number_of_elements; i++)
//   {
//     cin >> number;
//     nums[number]++;

//     if (nums[number] > 1)
//     {
//       result = "ne krasivo";
//     }
//   }

//   return result;
// }

// int main()
// {

//   int no_of_test_cases, number_of_elements;
//   cin >> no_of_test_cases;

//   for (int i = 0; i < no_of_test_cases; i++)
//   {
//     cin >> number_of_elements;
//     cout<<checkArraySequence(number_of_elements)<<endl;
//   }

//   return 0;
// }

// ------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{

  long long number_of_operations, size_of_array;
  cin >> number_of_operations;

  long long temp;
  set<long long> s;
  while (number_of_operations--)
  {
    cin >> size_of_array;
    for (long long i = 0; i < size_of_array; i++)
    {
      cin >> temp;
      s.emplace(temp);
    }
    if (s.size() == size_of_array)
      cout << "prekrasnyy" << endl;
    else
      cout << "ne krasivo" << endl;
  }

  return 0;
}