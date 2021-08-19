#include <bits/stdc++.h>
using namespace std;


int removeElement(vector<int>& nums, int val) {
        int beg = 0;
        for(int i =0 ; i<nums.size(); i++){
            if(nums[i] != val){ // if the el is not found then reaplce the 0th pos with the ith pos
                nums[beg++]= nums[i];
            }
        }
        
        return beg;
        
    }

int main(){
    vector<int> vec{2,3,42,12,3,3};
    int x;cin>>x;
    cout<< "This is the size:-> "<<removeElement(vec,x)<<endl;
    for(auto x: vec){
        cout << x <<","; 
    }
    return 0;
}