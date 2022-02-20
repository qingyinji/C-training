#include "../inc/base_algorithm.h"
#include <vector>

void base_algorithm_sort::quickSort(vector<int>& nums, int l, int r)
{
    // 子数组长度为 1 时终止递归
    if (l >= r) return;
    // 哨兵划分操作
    int i = partition(nums, l, r);
    // 递归左（右）子数组执行哨兵划分
    quickSort(nums, l, i - 1);
    quickSort(nums, i + 1, r);
}

int base_algorithm_sort::partition(vector<int>& nums, int l, int r)
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