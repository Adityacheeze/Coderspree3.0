class Solution {
public:
    string sortSentence(string s) {
        vector<string> str;
        vector<int> nums;
        string string1="";
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])!=0){
                nums.push_back(s[i]);
                str.push_back(string1);
                string1="";
                continue;
            }
            if(isalpha(s[i])!=0){
                string1+= s[i];
                continue;
            }
        }
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    swap(str[j],str[j+1]);
                }
            }
        }
        string1="";
        for(int i=0;i<n;i++){
            string1+=str[i]+' ';
        }
        string1.pop_back(); 
        return string1;
    }
};