class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
         unordered_map<int,int>mp2;
         for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
         }
         for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
         }
         int cnt1=0,cnt2=0;
         for (int i=0; i<nums1.size();i++) {
    if (mp2.count(nums1[i]))
        cnt1++;
}
for (int i=0; i<nums2.size();i++) {
    if (mp1.count(nums2[i]))
        cnt2++;
}
return {cnt1,cnt2};
    }
};