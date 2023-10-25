lass Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> pos;
        vector<int> neg;
        for(int i = 0; i < n; i++){
            if(arr[i] >= 0){
                pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }
        for(int i = 0; i<pos.size(); i++ ){
            arr[i] = pos[i];
        }
        for(int i = 0; i<neg.size(); i++ ){
            arr[i+pos.size()] = neg[i];
        }
    }
};