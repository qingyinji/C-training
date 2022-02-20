#pragma once
#include <vector>

using namespace std;

class base_algorithm_sort
{
public:
    void quickSort(vector<int>& nums, int l, int r) ;

private:
    int partition(vector<int>& nums, int l, int r);
};