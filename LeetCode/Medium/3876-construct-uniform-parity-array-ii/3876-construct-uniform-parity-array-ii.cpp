class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        int mineven=INT_MAX;
        int minodd=INT_MAX;
        for (int x:nums1){
            if(x%2)
                minodd=min(x,minodd);
            else
            mineven=min(x,mineven);
        }
        bool odd=true;
        if(minodd==INT_MAX)
          odd=false;
         for (int x:nums1){
            if(x%2==0){
                if(minodd==INT_MAX ||x<=minodd){
                    odd=false;
                }
            }
         }
         bool even=true;
        if(mineven==INT_MAX)
          even=false;
         for (int x:nums1){
            if(x%2==1){
                if(minodd==INT_MAX ||x<=minodd){
                    even=false;
                }
            }
         }
        return even||odd;
        
    }
};