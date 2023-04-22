// https://vjudge.net/contest/537759#problem/B
// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

  string s1;
  cin >> s1;
  set<char> set_1;

  for (int i = 0; i < s1.size(); i++)
    set_1.insert(s1[i]);

  if (set_1.size() % 2)
    cout << "IGNORE HIM!" << endl;
  else
    cout << "CHAT WITH HER!" << endl;

  return 0;
}
// -------------------------------------------------------------------------------------
// #include <iostream>
// #include <map>

// using namespace std;

// int main(int argc, const char * argv[]) {

//     string s;
//     cin>>s;
//     map<char,int> m;

//     int count=0;
//     for(char c:s){
//         if(m[c]==0){
//             count++;
//         }
// //        else if(m[c]==1){
// //            count--;
// //        }
//         m[c]++;

//     }

//     count%2==0? cout<<"CHAT WITH HER!"<<endl:cout<<"IGNORE HIM!"<<endl;

//     return 0;
// }