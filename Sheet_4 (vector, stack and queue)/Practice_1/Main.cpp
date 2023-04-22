// https://leetcode.com/problems/time-needed-to-buy-tickets/description/
#include <bits/stdc++.h>
using namespace std;
int timeRequiredToBuy(vector<int> &tickets, int k)
{

  int totalTime = 0;
  int i = 0;
  while (i < tickets.size())
  {
    if (i <= k)
      totalTime += (tickets[i] <= tickets[k]) ? tickets[i] : tickets[k];
    else
      totalTime += tickets[i] < tickets[k] ? tickets[i] : (tickets[k] - 1);

    // cout<<totalTime<<endl;
    i++;
  }

  return totalTime;
}

int main()
{

  vector<int> tickets = {2, 3, 2};
  int k = 2;

  cout << timeRequiredToBuy(tickets, k) << endl;
  return 0;
}