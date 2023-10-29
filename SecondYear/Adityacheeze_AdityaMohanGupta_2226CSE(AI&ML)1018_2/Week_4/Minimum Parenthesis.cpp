#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
        int open = 0;
        int count = 0;
        for(int i = 0; i < pattern.size(); i++){
            if(pattern[i] == ')' && open <= 0){
                count++;
            }
            if(pattern[i] == ')' && open > 0){
                open--;
            }
            if(pattern[i] == '('){
                open++;
            }
        }
        return open + count;
}