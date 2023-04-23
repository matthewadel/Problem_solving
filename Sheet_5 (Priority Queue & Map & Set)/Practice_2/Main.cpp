// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/938624398/

#include <bits/stdc++.h>
using namespace std;

int main()
{

  int magazine_size, note_size;
  cin >> magazine_size >> note_size;

  map<string, int> magazine_map;
  string temp;
  string result = "Yes";

  while (magazine_size--)
  {
    cin >> temp;
    magazine_map[temp]++;
  }

  while (note_size--)
  {
    cin >> temp;
    if (magazine_map[temp])
    {
      magazine_map[temp]--;
    }
    else
    {
      result = "N0";
      break;
    }
  }

  cout << result;
  return 0;
}