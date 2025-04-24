class Solution(object):
    def isPalindrome(self, x):
        str1=str(x)
        i=len(str1)-1
        str2=""
        while i>=0:
            str2+=str1[i]
            i-=1
        return str2==str1
        
