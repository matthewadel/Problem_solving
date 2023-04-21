// Problem_A: https://vjudge.net/contest/537054#problem/A
// https://www.hackerrank.com/challenges/array-left-rotation/problem

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateLeft(int d, vector<int> v)
{

  vector<int> copied_vector(v.size());

  for (int i = 0; i < v.size(); i++)
  {
    int newIndex = i - d;
    while (newIndex < 0)
    {
      newIndex = i - d + v.size();
    }
    copied_vector[newIndex] = v[i];
  }

  return copied_vector;
}

void print_vector(vector<int> v)
{

  for (int &vv : v)
    cout << vv << " ";
  cout << endl;
}

int main()
{

  int d, size;
  cin >> size >> d;
  vector<int> v(size);

  for (int i = 0; i < size; i++)
    cin >> v[i];

  print_vector(rotateLeft(d, v));

  return 0;
}

// -----------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// queue<int> rotateLeft(int d, queue<int> q)
// {

//   queue<int> copied_queue{q};

//   for (int i = 0; i < d; i++)
//   {
//     int number_to_be_removed = copied_queue.front();
//     copied_queue.pop();
//     copied_queue.push(number_to_be_removed);
//   }

//   return copied_queue;
// }

// void print_vector(queue<int> q)
// {

//   while (!q.empty())
//   {
//     cout << q.front() << " ";
//     q.pop();
//   }

//   cout << endl;
// }

// int main()
// {

//   int d, size;
//   int temp;

//   cin >> size >> d;
//   queue<int> q;

//   for (size_t i{0}; i < size; i++)
//   {
//     cin >> temp;
//     q.push(temp);
//   }

//   print_vector(rotateLeft(d, q));

//   return 0;
// }

// -----------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// deque<int> rotateLeft(int d, deque<int> v)
// {

//   deque<int> copied_deque{v};

//   for (int i = 0; i < d; i++)
//   {
//     int number_to_be_removed = copied_deque[0];
//     copied_deque.pop_front();
//     copied_deque.push_back(number_to_be_removed);
//   }

//   return copied_deque;
// }

// void print_vector(deque<int> v)
// {

//   for (int &vv : v)
//     cout << vv << " ";
//   cout << endl;
// }

// int main()
// {

//   int d, size;

//   cin >> size >> d;
//   deque<int> v(size);

//   for (size_t i{0}; i < size; i++)
//   {
//     cin >> v[i];
//   }

//   print_vector(rotateLeft(d, v));

//   return 0;
// }