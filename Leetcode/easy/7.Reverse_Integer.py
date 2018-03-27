class Solution:
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        s=0
        result=0

        if int(x) >= 0:
            s=1
        else :
            s=-1
        
        x = x*s
        
        while(x):
            result = result*10 + x%10
            x = int(x / 10)

        if (result*s < -2**31 or result*s > 2**31):
            return 0
        else :
            return result*s
        