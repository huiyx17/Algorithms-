#include<iostream>
#include<vector>

using namespace std;
class Solution{
public:
    //插入排序
    void Insert_sortion(vector<int>& nums)
    {
        for (int j = 1; j < nums.size(); j++)
        {
            for (int i = j ; nums[i] > nums[i - 1] && i > 0; i--)
            {
                swap(nums[i], nums[i-1]);
            }
        }
    }
};
