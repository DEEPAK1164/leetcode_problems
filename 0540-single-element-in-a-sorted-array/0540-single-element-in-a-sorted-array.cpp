class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = size(nums), L = 0, R = n-1, mid;
        while(L <= R) {
            mid = (L + R) >> 1;
            bool isHalfEven = (mid-L) % 2 == 0;          
			
            if(mid+1 < n && nums[mid] == nums[mid+1])    
                if(isHalfEven) L = mid+2;
                else R = mid-1;
				
            else if(mid-1>=0 && nums[mid] == nums[mid-1])   
                if(isHalfEven) R = mid-2;
                else L = mid+1;
				
            else return nums[mid];                     
        }
        return -1; 
    }
};