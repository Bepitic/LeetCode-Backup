class Solution:
    def fElm(elm):
        return elm[0]

    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        pairs = []
        for i  in range(len(speed)):
            pairs.append([position[i],speed[i]])
        pairs.sort(key=lambda x: x[0],reverse=True)
        cFleet = 0
        print(pairs)
        stk = []
        for e in pairs:
            pos = e[0]
            sp = e[1]
            x = (target - pos+0.0)/(sp+0.0)
            if len(stk) == 0:
                stk.append(x)
            
            if stk[-1] <  x:
                stk.append(x)
        
        return len(stk)