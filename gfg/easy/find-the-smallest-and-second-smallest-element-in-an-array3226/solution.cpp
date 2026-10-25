class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
       int n=arr.size();
       int f=arr[0];
       for(int i=0;i<n;i++){
           if(arr[i]<f){
               f=arr[i];
           }
       }
       int s=INT_MAX;
       for(int i=0;i<n;i++){
           if(arr[i]<s&&arr[i]!=f){
               s=arr[i];
           }
       }
       if(s==INT_MAX){
           return {-1
               
           };
       }
       return {f,s};
        
    }
};