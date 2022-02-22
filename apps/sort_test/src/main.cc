#include <iostream>
#include <vector>
#include "main.h"

using namespace std;

int main(int argc, char** arg)
{
    base_algorithm_sort test;
    vector<int> nums = { 4, 1, 3, 2, 5, 1 };
    test.quickSort(nums, 0, nums.size() - 1);
    for(auto i : nums) cout << i <<endl;

    int k = 2;
    cout << "Top k:" << k << "\tval:"<< test.quickSort_TopK(nums, k)<<endl;

    cout << "Testing" << endl;
    return 0;
}