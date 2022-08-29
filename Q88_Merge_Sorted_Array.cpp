class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++){
            nums1[i+m]=nums2[i];
            //std::cout<<nums1;
        }
        int count=1;
        while(count<=(m+n)-1){
            for(int i=0; i<(m+n)-count;i++){
                if(nums1[i]>nums1[i+1]){
                    int temp=nums1[i];
                    nums1[i]=nums1[i+1];
                    nums1[i+1]=temp;
                }
            }
            count++;
        }
        
        //return nums1;
    }
};
