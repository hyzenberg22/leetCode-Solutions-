#include <bits/stdc++.h>
using namespace std;

int MaxSubarray(vector<int> & nums){
    int sum = 0; 
    int max_sum = INT_MIN;
    for(auto x : nums){
        sum += x; // Every iter we add the sum to the varable 
        max_sum = max(sum, max_sum); // Comapre the sum and and max and store the max in variable
        if (sum<0){ // If sum is found negetive then we set it to zero
            sum = 0;
        }
    }
    return max_sum;
}



// This is the prob of Maximum Subarray using the KADANAS ALGO and sliding window 
int main(){

    // Pass a vector Array and use the function MaxSubarray
    return 0;
}