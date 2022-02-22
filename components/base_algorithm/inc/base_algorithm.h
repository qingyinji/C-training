#pragma once
#include <vector>

using namespace std;

class base_algorithm_sort
{
public:
    void quickSort(vector<int>& nums, int l, int r) ;   //快速排序
    int quickSort_TopK(vector<int>& nums, int k);   //基于快速排序的top k，找到第k大的数字

private:
    int quickSort_partition(vector<int>& nums, int l, int r);
    int quickSort_TopK_parttion(vector<int>&nums, int l, int r, int& k);
};