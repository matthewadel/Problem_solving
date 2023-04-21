// Problem_B: https://vjudge.net/contest/537054#problem/B
// https://www.hackerrank.com/challenges/simple-text-editor/problem

#include <bits/stdc++.h>
using namespace std;

void handleOperations(string &output_string, stack<string> &string_history, string next_operation)
{
  if (next_operation[0] == '1')
  {
    output_string += next_operation.substr(2);
    string_history.push(output_string);
  }
  else if (next_operation[0] == '2')
  {
    int number_of_characters_to_remove = stoi(next_operation.substr(2));
    output_string.erase(next(output_string.begin(), output_string.size() - number_of_characters_to_remove), output_string.end());
    string_history.push(output_string);
  }
  else if (next_operation[0] == '3')
  {
    int index_to_be_print = stoi(next_operation.substr(2)) - 1;
    cout << output_string[index_to_be_print] << endl;
  }
  else
  {
    string_history.pop();
    output_string = string_history.top();
  }
}

int main()
{

  string output_string = "";
  stack<string> string_history;
  string next_operation;
  string_history.push("");
  int number_of_operations;
  cin >> number_of_operations;
  cin.ignore();

  for (int i = 0; i < number_of_operations; i++)
  {
    getline(cin, next_operation);
    handleOperations(output_string, string_history, next_operation);
  }

  return 0;
}