// https://leetcode.com/problems/contains-duplicate/

#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
  set<int> s;

  for (int i = 0; i < nums.size(); i++)
  {
    if (!s.emplace(nums[i]).second)
    {
      return true;
      break;
    }
  }

  return false;
}

int main()
{

  vector<int> nums = {1, 2, 3, 4};
  cout << containsDuplicate(nums) << endl;
  return 0;
}