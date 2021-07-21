#include <bits/stdc++.h>
using namespace std;

// This problem can be solved 
//     1. Hash set appraoach , O(N*logN)+O(N)
//     2. Two Pointer appraoach O(N)

// Two pointer approach
int removeDuplicates(vector<int>& nums){
    if(nums.size() == 0) return 0; // cheaking the array is valid or not

    int i = 0; // Take the i at the 1st position of the array
    for (int j = 1; j < nums.size(); j++) // start the J from the i+1 th el and iterate over the array
    {
        if(nums[j] != nums[i]){ // If any el is found to be different from j 
            i++; // Then Increment the i to the next position and 
            nums[i] = nums [j]; // copy the jth el in the num to the ith position
        }
    }
    return i+1 ; // After the iteration we can have the sub array with unique el and length of that array will be i+1 as it starts from the 0 th el.
    
}



int main(){
    return 0;
}