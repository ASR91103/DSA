class Solution {
public:
    int mySqrt(int x) {
        long ans;
        long start=0;
        long end=x;
        long mid=start+(end-start)/2;
        while(start<=end)
        {
            if(mid*mid==x)
            {
                return mid;
            }
            else if(mid*mid>x)
            {
                end =mid-1;
            }
            else if(mid*mid<x)
            {
                ans=mid;
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
};
