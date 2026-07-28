from typing import List
class solution:
    def check(self, nums: list[list[int]]):
        n = len(nums)
        ans = []
        nums.sort()
        for i in range(n):
            start = nums[i][0]
            end = nums[i][1]
            
            if ans and end <= ans[-1][1]:
                continue
            for j in range(i+1, n):
                if end >= nums[j][0]:
                    end = max(end, nums[j][1])
                else:
                    break
            ans.append([start,end])
        return ans
    
    def mergeIntervals(self, nums: list[list[int]]):
        n = len(nums)
        nums.sort()
        ans = []
        for i in range(n):
            if not ans or nums[i][0]>ans[-1][1]:
                ans.append(nums[i])
            else:
                ans[-1][1] = max(ans[-1][1], nums[i][1])
        return ans
sol = solution()
print(sol.mergeIntervals([[1,3], [2,6], [8,10], [15,18]]))

