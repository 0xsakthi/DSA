class Solution:
    def MissingNumber(self,array,n):
        a = n*(n+1)/2
        sumof = 0;
        for i in range(n-1):
            sumof+=array[i]
        return int(a-sumof)
