from typing import List
class solution:
    def check(self, nums: list[int]):
        n = len(nums)
        if n==0:
            return 0
        longest = 1
        st = set(nums)
        for x in st:
            if x-1 not in st:
                cnt = 1
                current = x
            while current + 1 in st:
                current += 1
                cnt += 1
            longest = max(longest, cnt)
        return longest
sol = solution()
print(sol.check([102,4,100,1,101,3,2,1,1]))
                