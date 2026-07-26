from typing import List
class solution:
    def check(self, nums: list[int], k):
        map = {0:1}
        presum = 0
        cnt = 0
        for i in range(len(nums)):
            presum += nums[i]
            remaining = presum - k
            cnt += map.get(remaining, 0)
            map[presum] = map.get(presum, 0)+1
        return cnt
sol = solution()
print(sol.check([1,2,3,-3,1,1,1,4,2,-3], 3))
        