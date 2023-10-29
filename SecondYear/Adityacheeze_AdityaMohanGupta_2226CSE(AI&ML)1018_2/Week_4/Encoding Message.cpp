#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    string str = "";
    int n = message.size();
    int i = 0;
    while(i < n){
        str.push_back(message[i]);
        int j = i+1;
        int count = 1;
        while(message[i] == message[j] && j < n){
            count++;
            j++;
        }
        str+=to_string(count);
        i = i + count;
    }
    return str;
}