#include <bits/stdc++.h>
using namespace std;

//using the sliding window technique
int main()
{
    vector<int> s = {1 ,2 ,1 ,3 ,2};
    int d=3, m=2;


    int sum =0, counter = 0, slide =0;

    for(int i=0 ; i<s.size() ; i++){
        counter ++;
        sum += s[i];

        if(counter == m ){
            if(sum == d){
                slide++;
            }
            counter--;
            sum -= s[i-m+1];
        
        }
    }
    return slide;

}