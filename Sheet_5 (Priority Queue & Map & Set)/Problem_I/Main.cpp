// https://vjudge.net/contest/537759#problem/I
// https://atcoder.jp/contests/abc217/tasks/abc217_e?lang=en

#include<iostream>
#include<deque>
using namespace std;

int main()
{

  int number_of_operations;
  cin >> number_of_operations;
  string operation;
  deque<string> v;
  cin.ignore();

  for (int i = 0; i < number_of_operations; i++)
  {
    getline(cin, operation);
    if (operation[0] == '1')
      v.push_back(operation.substr(2));
    else if (operation[0] == '2'){
      cout << v[0] << endl;
      v.pop_front();
    }
    else
      sort(v.begin(), v.end());
  }

  return 0;
}