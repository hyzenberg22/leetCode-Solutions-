#include <bits/stdc++.h>
using namespace std;



int maxArea(vector<int>& height) {
        int left = 0; // left pointer 
        int right = height.size()-1; // Right pointer
        int water = 0; // water max
        while( left < right){ // while condition untill the left or right
            int area ;
            if(height[left] < height[right]){ // if the left side is smaller then the right
                area = height[left] * (right - left); // min* distance
                left++; // shift the pointer to the right
            }
            else{
                area = height[right] * (right - left);
                right--; // shift the pointer to the right
            }
            // area is updated evry iter., only the max is stored
            if(area > water)
                water = area;
        }
        return water;
    }

int main(){
    // function is writen , take a vector array and apply on it ;
    return 0;
}