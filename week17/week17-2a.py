#week17-2.py
#LeetCode 66. Plus One
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        N = len(digits)
        carry = 1
        for i in range(N-1,-1,-1):
            digits[i]=digits[i] + carry
            if digits[i] >=10:
                carry = 1
                digits[i]=digits[i]%10
            else:
                carry=0
        if carry==0:
            return digits
        else:
            return [carry] + digits
        