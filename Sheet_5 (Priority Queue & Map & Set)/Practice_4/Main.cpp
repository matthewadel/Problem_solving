// https://leetcode.com/problems/contains-duplicate-ii/description/

#include <bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{

  bool result = false;
  map<int, int> mp;

  for (int i = 0; i < nums.size(); i++)
  {

    if (mp[nums[i]] && (abs(i + 1 - mp[nums[i]]) <= k))
    {
      result = true;
      break;
    }
    else
    {
      mp[nums[i]] = i + 1;
    }
  }

  return result;
}

int main()
{

  vector<int> nums = {1, 2, 3, 1};
  int k = 3;
  cout << containsNearbyDuplicate(nums, k) << endl;
  return 0;
}