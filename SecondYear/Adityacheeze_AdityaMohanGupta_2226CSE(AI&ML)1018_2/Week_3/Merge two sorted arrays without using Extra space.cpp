class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here
            int i=0,j=0,k=0;
            int aux[n+m];
            while(i<n && j<m){
                if(arr1[i] < arr2[j]){
                    aux[k] = arr1[i];
                    i++;
                    k++;
                }
                else{
                    aux[k] = arr2[j];
                    j++;
                    k++;
                }
            }
            while(i<n){
                aux[k] = arr1[i];
                i++;
                k++;
            }
            while(j<m){
                aux[k] = arr2[j];
                j++;
                k++;
            }
            for(int i = 0; i < n; i++){
                arr1[i] = aux[i];
            }
            for(int i = 0; i < m; i++){
                arr2[i] = aux[i+n];
            }
        } 
};