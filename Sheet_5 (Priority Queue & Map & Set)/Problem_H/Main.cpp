// https://vjudge.net/contest/537759#problem/H
// https://codeforces.com/problemset/problem/681/C

#include <bits/stdc++.h>
using namespace std;

int main()
{

  long long number_of_operations;
  cin >> number_of_operations;
  cin.ignore();

  string temp;
  stack<string> s_insert;
  queue<string> q_output;
  while (number_of_operations--)
  {
    getline(cin, temp);
    if (temp.substr(0, temp.find(' ')) == "insert")
    {
      q_output.push(temp);
      s_insert.push(temp.substr(temp.find(' ') + 1));
    }
    else if (temp.substr(0, temp.find(' ')) == "removeMin")
    {
      if (s_insert.empty())
        q_output.push("insert 1");
      else
        s_insert.pop();
      q_output.push(temp);
    }
    else if (temp.substr(0, temp.find(' ')) == "getMin")
    {
      if (s_insert.empty())
      {
        string insertStatement = "insert " + temp.substr(temp.find(' ') + 1);
        q_output.push(insertStatement);
        s_insert.push(temp.substr(temp.find(' ') + 1));
      }
      else if (temp.substr(temp.find(' ') + 1) > s_insert.top())
      {
        string insertStatement = "insert " + temp.substr(temp.find(' ') + 1);
        q_output.push("removeMin");
        q_output.push(insertStatement);
      }
      q_output.push(temp);
    }
  
  }

  cout << q_output.size() << endl;
  while (!q_output.empty())
  {
    cout << q_output.front() << endl;
    q_output.pop();
  }

  return 0;
}

// insert 3
// getMin 4

// insert 1
// insert 1
// removeMin
// getMin 2

// insert => push to the q_output and to q_insert,
// removeMin => push to the q_output and remove the last insert,
// getMin => if (q_getMin.front() > q_insert.front() => push removeMin to the q_output and remove the last insert and adding insert x to q_output and adding getMin to q_output)
//           if (q_getMin.front() == q_insert.front() => adding getMin to q_output