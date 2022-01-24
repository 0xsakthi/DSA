class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        meh = 0
        msf = -9999999
        for i in nums:
            meh = meh+i
            if meh<i:
                meh=i
            if msf<meh:
                msf=meh
        return msf
