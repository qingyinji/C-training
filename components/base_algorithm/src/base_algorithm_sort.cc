#include "../inc/base_algorithm.h"
#include <vector>

void base_algorithm_sort::quickSort(vector<int>& nums, int l, int r)
{
    // 子数组长度为 1 时终止递归
    if (l >= r) return;
    // 哨兵划分操作
    int i = quickSort_partition(nums, l, r);
    // 递归左（右）子数组执行哨兵划分
    quickSort(nums, l, i - 1);
    quickSort(nums, i + 1, r);
}

int base_algorithm_sort::quickSort_partition(vector<int>& nums, int l, int r)
{
    // 以 nums[l] 作为基准数
    int i = l, j = r;
    while (i < j) {
        while (i < j && nums[j] >= nums[l]) j--;
        while (i < j && nums[i] <= nums[l]) i++;
        swap(nums[i], nums[j]);
    }
    swap(nums[i], nums[l]);
    return i;
}

int base_algorithm_sort::quickSort_TopK(vector<int>& nums, int k)
{
    return quickSort_TopK_parttion(nums, 0, nums.size()-1, k);
}

int base_algorithm_sort::quickSort_TopK_parttion(vector<int>&nums, int l, int r, int& k){
        int i = l, j = r;
        swap(nums[l], nums[(l+r)/2]);
        while(i<j){
            while(i<j && nums[j]>=nums[l])--j;
            while(i<j && nums[i]<=nums[l])++i;
            swap(nums[i], nums[j]);
        }
        swap(nums[i], nums[l]);
        
        if(i<nums.size()-k) return quickSort_TopK_parttion(nums, i+1, r, k);
        else if(i>nums.size()-k) return quickSort_TopK_parttion(nums, l , i-1, k);
        
        return nums[i];
    }