#include <bits/stdc++.h>
using namespace std;
int find_min_str(vector<string> vs){
            int min = vs[0].length();
            for(int i=1; i<vs.size() ;i++){
                if(vs[i].length() < min){
                    min = vs[i].length();
                }
            }
            return min;
        }
string longestCommonPrefix(vector<string>& strs) {
    int min_len = find_min_str(strs);
    string res = "";
    char current;
    for(int i= 0; i<min_len ; i++){
        current = strs[0][i];
        
        for(int j = 1; j<strs.size() ; j++){
            if(strs[j][i] != current){
                return res;
            }
        }
        res.push_back(current);
    }
    return res;      
}

int main(){
    vector<string> vec{"flower","flow","flight"};
    cout<<longestCommonPrefix(vec);
    return 0;
}