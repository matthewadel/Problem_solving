// https://vjudge.net/contest/539018#problem/E
// https://codeforces.com/problemset/problem/347/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long number_of_inputs;
  cin >> number_of_inputs;
  vector<long long> v(number_of_inputs);

  for (int i = 0; i < number_of_inputs; i++)
  {
    cin >> v[i];
  }

  sort(v.begin(), v.end());
  swap(v[0], v[number_of_inputs - 1]);

  for (long long vv : v)
    cout << vv << " ";
}
// مش فاهم الفكرة
// يعني ايه القاعدة اللي هستخدمها هنا عشان اجيب اعلي مجموع
// انا اللي استخدمته هنا اني رتبت الفكتور وبعدين بدلت اول عنصر باخر عنصر