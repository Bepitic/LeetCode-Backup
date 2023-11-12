class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        data = [nums[0],[]]
        #init
        for i in range(1,k):
            if nums[i] > data[0]:
                data[0] = nums[i]
                data[1] = []
            else:
                for ii in range(len(data[1])):
                    if nums[i] > data[1][-1]:
                            data[1] = data[1][:-1]
                data[1].append(nums[i])


        #iterate
        l = 0
        r = k
        res = []
        res.append(data[0])

        while r<len(nums):
            #print(data)
            if nums[l] == data[0]:
                #print(f"enter-exp 0:{data[0]} <- {data[1]}")
                if len(data[1])!= 0:
                    data[0] = data[1][0]
                    data[1] = data[1][1:]
                else:
                    data[0] = nums[r]

            if nums[r] > data[0]:
                #print("a")
                data[0] = nums[r]
                data[1] = []
            else:
               # print("b")
                for i in range(len(data[1])):
                    if nums[r] > data[1][-1]:
                            data[1] = data[1][:-1]
                data[1].append(nums[r])

            res.append(data[0])
            #print(res)
            r += 1
            l += 1
        print(data)
        return res
                
