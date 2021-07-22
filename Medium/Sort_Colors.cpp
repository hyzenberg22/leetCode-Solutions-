#include <bits/stdc++.h>
using namespace std;


// The problem is solved usong the Duch National Flag Algo
void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        
        // solving using the Duch National Flag Algo
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low ++; 
                mid++;
            }else if(nums[mid] ==1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
        
    }

int main(){
    // make a vecror array and passed in it;
    return 0;
}