import math
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l = 0 
        r = len(nums)-1
        if nums[l] == target:
                return l
        if nums[r] == target:
                return r
        while(r-l > 1):
            pos = math.ceil(((r-l+1)/2)+l-1)
            print(f"pos->{pos} | l->{l} | r->{r}")
            if nums[pos] == target:
                return pos
            elif nums[pos] > target:
                r = pos
            elif nums[pos] < target:
                l = pos
        return -1