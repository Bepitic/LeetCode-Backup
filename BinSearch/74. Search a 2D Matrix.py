import math
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        # bin search
        l = 0
        r = len(matrix) * len(matrix[0])

        if matrix[0][0] == target or matrix[-1][-1] == target:
            return True

        while (r - l) > 1:
            pos = math.floor(l+((r-l)/2))            
            pos_i = math.floor( pos/len(matrix[0]))
            pos_j = math.floor( pos%len(matrix[0]))
            print(f"pos{pos} || pi{pos_i} \ pj{pos_j}")
            val =  matrix[pos_i][pos_j]

            if val == target:
                return True
            elif val < target:
                l = pos
            else:
                r = pos
        return False
