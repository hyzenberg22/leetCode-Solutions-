#include <bits/stdc++.h>
using namespace std;


int removeElement(vector<int>& nums, int val) {
        int beg = 0;
        for(int i =0 ; i<nums.size(); i++){
            if(nums[i] != val){
                nums[beg++]= nums[i];
            }
        }
        return beg;
        
    }

int main(){
    return 0;
}