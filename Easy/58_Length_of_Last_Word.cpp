#include <bits/stdc++.h>
using namespace std;


int main(){
    string s = "Helllo world";
    int count=0, size= s.length();
    if(s[size]==' '){s.pop_back(s[size]);}
    while (size--){
        if(s[size] == ' ') break;
        count++;
    }
    cout << count <<endl; 
    
    
    // cout << count <<endl; 
    return 0;
}