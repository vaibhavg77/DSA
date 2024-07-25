#include <bits/stdc++.h>

using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    // all possible subaarays
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {

            int sum = 0;

            for (int k = i; k <= j; k++)
            {
                sum += nums[k];
            }
            if (sum == k)
                count++;
        }
    }
    return count;
}
int subarraySum2(vector<int>& nums, int k) {
        //all possible subaarays
        int count = 0 ;
        for(int i =0 ; i<nums.size(); i++){  
            int sum = 0;
            for(int j = i ; j<nums.size(); j++){
                sum+=nums[j];
                if(sum==k)
                    count++ ;
            }
        }
        return count;
    }

int main()
{

    vector<int> nums = {1, 1,1};
    int k = 2;
    int ans = subarraySum2(nums,k);
    cout<<"The number of sub Arrays in the nums array is "<<ans ;
    return 0;
}