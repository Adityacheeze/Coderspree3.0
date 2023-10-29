#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    int start=0;
        for(int end=0;end<input.size();end++){
            if(input[end]==' '){
                reverse((input.begin()+start),(input.begin()+end));
                start=end+1;
            }  
        }
        reverse((input.begin()+start),input.end());
        reverse(input.begin(),input.end());
        return input;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}