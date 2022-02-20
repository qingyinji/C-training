#include <iostream>
#include <vector>
#include "base_algorithm.h"

using namespace std;

int main(int argc, char** arg)
{
    base_algorithm_sort test;
    vector<int> nums = { 4, 1, 3, 2, 5, 1 };
    test.quickSort(nums, 0, nums.size() - 1);
    for(auto i : nums) cout << i <<endl;

    cout << "Testing" << endl;
    return 0;
}