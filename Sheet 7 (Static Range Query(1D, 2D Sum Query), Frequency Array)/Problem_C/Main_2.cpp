// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   return 0;
// }

// --------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int R, C;
// int A[100][100], B[100][100];
// void getSummation(int i, int j)
// {

//   if (i == R)
//     return;
//   else if (j == C)
//   {
//     cout << endl;
//     getSummation(i + 1, j);
//     return;
//   }

//   else
//   {
//     cout << A[i][j] + B[i][j] << " ";
//     getSummation(i, j + 1);
//   }
// }

// int main()
// {

//   cin >> R >> C;

//   for (int i = 0; i < R; i++)
//     for (int j = 0; j < C; j++)
//       cin >> A[i][j];

//   for (int i = 0; i < R; i++)
//     for (int j = 0; j < C; j++)
//       cin >> B[i][j];

//   getSummation(0, 0);

//   return 0;
// }

// --------------------------------------------------------------------
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y
// #include <bits/stdc++.h>
// using namespace std;

// int e;
// int solve(int s)
// {
//   if (s == e)
//     return 1;
//   else if (s > e)
//     return 0;

//   return solve(s + 1) + solve(s + 2) + solve(s + 3);
// }

// int main()
// {
//   int s;
//   cin >> s >> e;

//   cout << solve(s) << endl;

//   return 0;
// }
// --------------------------------------------------------------------

// sheet 7: ==> E, G, H
// problem H:

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   //
//   int no_of_minutes, k, temp_input;
//   cin >> no_of_minutes >> k;
//   vector<int> lectures;
//   vector<int> prefix;
//   vector<int> possibleIndexes;
//   int biggest_sum = 0;

//   for (int i = 0; i < no_of_minutes; i++)
//   {
//     cin >> temp_input;
//     lectures.push_back(temp_input);
//     prefix.push_back(temp_input + (i == 0 ? 0 : prefix.back()));
//     if (i >= k - 1)
//     {
//       if ((prefix[i] - (i == k - 1 ? 0 : prefix[i - k])) > biggest_sum)
//       {
//         biggest_sum = prefix[i];
//         possibleIndexes.clear();
//         possibleIndexes.push_back(i);
//       }
//       else if ((prefix[i] - (i == k - 1 ? 0 : prefix[i - k])) == biggest_sum)
//       {
//         possibleIndexes.push_back(i);
//       }

//       // cout << "------" << endl;
//       // for (auto m : possibleIndexes)
//       //   cout << m << endl;
//       // cout << "------" << endl;
//       // cout << "----" << endl;
//       // cout << biggest_sum << endl;
//       // cout << "----" << endl;
//     }
//   }

//   // cout << "*******" << endl;
//   // for (auto m : possibleIndexes)
//   //   cout << m << endl;
//   // cout << "----" << endl;
//   // for (auto m : prefix)
//   //   cout << m << endl;
//   // cout << "*******" << endl;
//   // for (auto m : possibleIndexes)
//   //   cout << m << endl;
//   // cout << "----" << endl;
//   // cout << biggest_sum << endl;
//   // cout << "+++++" << endl;
//   // 6 3
//   // 1 3 5 2 5 4
//   // 1 1 0 1 0 0
//   vector<int> is_sleep;
//   int total_theorems = 0;
//   for (int i = 0; i < no_of_minutes; i++)
//   {
//     cin >> temp_input;
//     is_sleep.push_back(temp_input);
//     if (temp_input)
//       total_theorems += lectures[i];
//   }

//   int maximum_theorems = total_theorems;
//   int maximum_theorems_per_index = total_theorems;
//   for (int i = 0; i < possibleIndexes.size(); i++)
//   {

//     maximum_theorems_per_index = total_theorems;
//     for (int i = possibleIndexes[0] - k + 1; i <= possibleIndexes[0]; i++)
//     {
//       if (is_sleep[i] == 0)
//       {
//         maximum_theorems_per_index += lectures[i];
//       }
//     }
//     if (maximum_theorems_per_index > maximum_theorems)
//       maximum_theorems = maximum_theorems_per_index;
//   }

//   cout << maximum_theorems << endl;

//   return 0;
// }

// --------------------------------------------------------------------
// problem G:
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   // 3 3 3
//   // 1 2 3
//   // 1 2 1
//   // 1 3 2
//   // 2 3 4
//   // 1 2
//   // 1 3
//   // 2 3
//   // 9 18 17

//   return 0;
// }

// --------------------------------------------------------------------
// problem F:
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   long long number_of_blocks, height, temp_input;
//   cin >> number_of_blocks >> height;
//   vector<long long> v;
//   pair<long long, long long> minimum_height = {0, 0};

//   for (long long i = 0; i < number_of_blocks; i++)
//   {
//     cin >> temp_input;
//     v.push_back(i == 0 ? temp_input : (temp_input + v.back()));
//     // 3
//     if (i == height - 1)
//     {
//       minimum_height.first = v[i];
//       minimum_height.second = i - height + 2;
//     }
//     // 4
//     else if (i > height - 1)
//     { //                          v[4] - v[1]
//       if (minimum_height.first > (v[i] - v[i - height]))
//       {
//         minimum_height.first = v[i] - v[i - height];
//         minimum_height.second = i - height + 2;
//       }
//     }
//   }

//   return 0;
// }

// --------------------------------------------------------------------
// problem E:

// --------------------------------------------------------------------
// problem D:

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   long long no_of_inputs, tempNumber;
//   cin >> no_of_inputs;
//   priority_queue<long long, vector<long long>, greater<long long>> q;
//   vector<long long> v_prefix;
//   vector<long long> v_prefix_ordered;

//   for (long long i = 0; i < no_of_inputs; i++)
//   {
//     cin >> tempNumber;
//     v_prefix.push_back(i == 0 ? tempNumber : tempNumber + v_prefix.back());
//     q.push(tempNumber);
//   }

//   while (q.size())
//   {
//     v_prefix_ordered.push_back(v_prefix_ordered.size() == 0 ? q.top() : q.top() + v_prefix_ordered.back());
//     q.pop();
//   }

//   long long no_of_questions, type, l, r;
//   cin >> no_of_questions;

//   for (long long i = 0; i < no_of_questions; i++)
//   {
//     cin >> type >> l >> r;

//     if (type == 1)
//       cout << ((r == 0) ? 0 : v_prefix[r - 1]) - ((l == 1) ? 0 : v_prefix[l - 2]) << endl;
//     else if (type == 2)
//       cout << ((r == 0) ? 0 : v_prefix_ordered[r - 1]) - ((l == 1) ? 0 : v_prefix_ordered[l - 2]) << endl;
//   }

//   // [6, 4,  2,  7,  2,  7]
//   // [6, 10, 12, 19, 21, 28]
//   // [2, 2,  4,  6,  7,  7]
//   // [2, 4,  8,  14, 21, 28]

//   return 0;
// }

// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------

// int getResult(int i)
// {
//   // if (power == 1)
//   //   return base;

//   // long long ans = base * getPower(base, power - 1);
//   // return ans;
//   int ans = 0;
//   if (i >= 3)
//     ans = getResult(i - 1) + getResult(i - 2);
//   else if (i == 1)
//     return 0;
//   else
//     return 1;

//   return ans;
// }

// int getSum(int no_of_elements,int i)
// {
//   int x;
//   int sum = 0;
//   if (no_of_elements == 0)
//   {
//     cout << "Case " << i << ": ";
//     return 0;
//   }
//   else
//   {
//     cin >> x;
//     sum = x + getSum(no_of_elements - 1,i);
//   }
//   return sum;
// }

// الفكرة امي اخزن الرقم بعدد مرات التكرار
// #include <iostream>
// #include <map>
//
// using namespace std;
//
// int main(int argc, const char * argv[]) {
//
//    map <int, int>m;
//    int s;
//    cin>>s;
//
//    int n;
//    for (int i=0;i<s;i++){
//        cin>>n;
//        m[n]++;
//    }
//
//    for (pair<int, int> mm:m)
//        cout<<mm.first<<" "<<mm.second<<endl;
//
//    return 0;
//}

// الفكرة اني الوب علي الحروف بالascii
// #include <iostream>
// #include <vector>
// #include <algorithm>
//
// using namespace std;
//
// int main(int argc, const char * argv[]) {
//
//    string s;
//    cin>>s;
//
//    long temp_count;
//    for (int i='a';i<='z';i++){
//        temp_count=count(s.begin(),s.end(),i);
//        if(temp_count){
//            cout<<(char)i<<" : "<<temp_count<<endl;
//        }
//    }
//
//
//    return 0;
//}

// problem odd and even new idea
// #include <iostream>
// #include <vector>
// #include <algorithm>
//
//
// using namespace std;
//
// int main(int argc, const char * argv[]) {
//
//     vector<int> v;
//
//     int temp;
//     int vectorLength;
//     cin>>vectorLength;
//
//     for(int i=0;i<vectorLength;i++){
//         cin>>temp;
//         v.push_back(temp);
//     }
//
//     int idxs=0,idxe=(int)v.size()-1;
//     vector<int> outputVector(v.size());
//
//     for(int i=0;i<v.size();i++){
//         if(v[i]%2==0){
//             outputVector[idxs]=v[i];
//             idxs++;
//         }
//         else{
//             outputVector[idxe]=v[i];
//             idxe--;
//         }
//     }
//
//     for (int i=0;i<outputVector.size();i++){
//         cout<<outputVector[i]<<endl;
//     }
//
//
//     return 0;
// }

// --------------------------------------------------------

// problem F:
// #include <iostream>
// #include <vector>
// #include <deque>
// #include <stack>
// using namespace std;
// int main(int argc, const char * argv[]) {
//    int t;
//    cin>>t;
//
//
//    for (int i=0;i<t;i++){
//        int temp;
//        int n=0;
//        cin>>n;
//        stack<int> st;
//        int largest_count=0;
//        int largest_index=0;
//        for (int i=0;i<n;i++){
//            cin>>temp;
//            if(largest_count <= temp ){
//                largest_count=temp;
//                largest_index=i;
//            }
//            st.push(temp);
//        }
//
//        int desired_index=(int)st.size()-largest_index;
//        int lastIndex=0;
//
//        stack<int> inner_stack;
//        while (!st.empty()){
//            if(lastIndex % desired_index==0){
//                while(!inner_stack.empty()){
//                    cout<<inner_stack.top()<<" ";
//                    inner_stack.pop();
//                }
//            }
//                inner_stack.push(st.top());
//                st.pop();
//                lastIndex++;
//        }
//
//        while(!inner_stack.empty()){
//                cout<<inner_stack.top()<<" ";
//                inner_stack.pop();
//        }
//    }
//    return 0;
// }
