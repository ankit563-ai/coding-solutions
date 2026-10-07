class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int n=arr.size();
        int l=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]<l){
                l=arr[i];
            }
        }
        int s=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<s&&arr[i]!=l){
                s=arr[i];
            
        }
        }
        if(s==INT_MAX){
            return {-1};
        }
        return {
            l,s
        };
        
    }
};