# Leetcode

## 7. Reverse Integer
python code:

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

Runtime: 20 ms, faster than 99.49% of Python3 online submissions for Reverse Integer.

Memory Usage: 14 MB, less than 99.98% of Python3 online submissions for Reverse Integer.

## 9. Palindrome Number
c code answer:
 
        bool isPalindrome(int x){
            int temp = x;
            int len_x = 0;
            long save =0;
            if(x < 0){
                return false;
            }
            while(temp>0){
                save = temp%10 + save*10;
                temp = temp/10;
                len_x +=1;
            }
            if (x != save){
                return false;
            }

            return true;
        }
        
Runtime: 4 ms, faster than 93.96% of C online submissions for Palindrome Number.

Memory Usage: 6.1 MB, less than 72.97% of C online submissions for Palindrome Number.    

c code another answer:

        bool isPalindrome(int x){
            int temp = x;
            int len_x = 0;
            long save =0;
            if(x < 0){
                return false;
            }
            while(temp>0){
                save = temp%10 + save*10;
                temp = temp/10;
                len_x +=1;
            }
            for(int i = 0 ; i < len_x/2 ; i++){
                if(save%10 != x%10){
                    return false;
                }
                save=save/10;
                x=x/10;
            }


            return true;
        }
        
Runtime: 4 ms, faster than 93.96% of C online submissions for Palindrome Number.

Memory Usage: 5.9 MB, less than 72.97% of C online submissions for Palindrome Number.        
