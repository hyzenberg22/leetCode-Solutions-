#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
        // This is for the Ordinary case if the i ==9 then carry forward
        for(int i = digits.size()-1 ; i>=0 ; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }else{
                digits[i]++;
                return digits;
            }
        }
        // If the whole array is the case of the 99999999..... then it make this opearations
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
int main(){
    // vector<int> vec{4,3,2,1};
    // int n = vec.size();
    // int num =0;
    // for(int z: vec){
    //     num += z*pow(10,(n-1));
    //     n--;
    // }
    // num+=1;
    // vec.clear();
    // while (num>0){
    //     vec.push_back(num%10);
    //     num /= 10;
    // }
    // reverse(vec.begin(), vec.end());
    

    // for(int x: vec){
    //     cout<<x<<endl;
    // }

    
}