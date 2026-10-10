class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int l=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>l){
                l=arr[i];
                
            }
        }
        int s=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>s&&arr[i]!=l){
                s=arr[i];
                
            }
        }
        return s;
        
    }
};