class Solution:
    def reverse(self, x: int) -> int:
        if x > 0:
            result = int(str(x)[::-1])
            if result > 2**31-1:return 0
            return result
        if x < 0:
            result = int(str(x*-1)[::-1])*-1                 
            if result < (-1)*(2**31):return 0
            return result
        return 0 