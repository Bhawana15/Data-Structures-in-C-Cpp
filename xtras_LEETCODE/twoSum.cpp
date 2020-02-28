/*****   LEETCODE
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1]. ****/

#include <iostream>
using namespace std;

class Sum {
  private :
    int target;
  public:
    Sum () {
        target = 9;
    }
    int* twoSum (int* nums, int* sol);
    void printResult (int* sol, int nums[]);
};

int* Sum::twoSum (int* nums, int* sol) {
        int length = sizeof(*nums);
        int toFind;
        for (int i = 0 ; i < length ; i++) {
            toFind = target - *(nums+i);
            for (int j = 0 ; j < length; j++) {
                if (toFind == *(nums+j)) {
                    *(sol) = i;
                    *(sol+1) = j;
                    return (sol);       
                }
            }
        }
        return NULL;
}
    
void Sum::printResult (int* sol, int nums[]) {
    cout << "Elements that add upto 9 are :  " << nums[*sol] << " and " << nums[*(sol + 1)] << endl;
    return;
}

void print_array(int array[], int len) {
    for(int i = 0 ; i < len ; i++)
        cout << array[i] << "  ";
    cout << endl;

    return;
}


int main() {
    Sum s;
    int sol[2];
    int nums[] = {2, 7, 11, 15};
    cout << "Array is :  ";
    print_array (nums, 4);
    int *solution = s.twoSum(nums, sol);
    if (solution != NULL){
       s.printResult(solution, nums);
    }
    else{
        cout << "Sum not found" << endl;
    }
    return 0;
}