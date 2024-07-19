#include <bits/stdc++.h>

using namespace std;

int longestConsecutive(vector<int> &nums)
{   
    if(nums.size()==0) return 0 ;
    unordered_set<int> set;
    for (int i = 0; i < nums.size(); i++)
    {
        set.insert(nums[i]);
    }
    int maxCount = 1;

    for (auto a : set)
    {
        if (set.find(a - 1) == set.end())
        {
            // can be a starting pt of a new chain
            // find the chain
            int count = 1;
            int it = a;
            while (set.find(it + 1) != set.end())
            {
                count++;
                it++;
            }
            maxCount = max(count, maxCount);
        }
    }

    return maxCount;
}

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 100, 101, 102};
    int ans = longestConsecutive(nums);
    cout << "maximum length of a consecutive series is " << ans;
    return 0;
}