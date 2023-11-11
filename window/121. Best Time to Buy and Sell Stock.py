class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        tuple = [prices[0], prices[0]] # 0 = min , 1 = max
        for i in prices:
            if i < tuple[0]:
                tuple = [ i, i ]
            if i > tuple[1]:
                tuple[1] = i
            
            if tuple[1]-tuple[0] > profit:
                profit = tuple[1]-tuple[0]
        return profit