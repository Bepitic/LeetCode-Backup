class Solution:
    def allused(self,mp):
        cond = True
        for k,v in mp.items():
            if v > 0:
                cond = False
        return cond
    def minWindow(self, s: str, t: str) -> str:
        minim = len(s) + len(t) + 1
        string = ""
        
        l = 0
        r = 0
        freq = {}
        for elm in t:
            freq[elm] = freq.get(elm,0) + 1

        if type(freq.get(s[r], None)) == int:
                        freq[s[r]] -= 1 

        while l < len(s):
            #print(f"bef - l{l}, r{r}, freq{freq} , min{minim}, s:{string}, w:{s[l:r+1]}")

            if type(freq.get(s[l], None)) != int:
                #print("a")
                l +=1
                if l>r:
                    r +=1
                    if r < len(s) and type(freq.get(s[r], None)) == int:
                        freq[s[r]] -= 1            
            else:
                if self.allused(freq):
                    if minim > r-l:
                        minim = r-l
                        string = s[l:r+1]

                    freq[s[l]] += 1
                    #print("b")
                    l+=1       
                else:
                    r+=1
                    if r >= len(s):
                        r-=1
                        freq[s[l]] += 1
                        #print("c")
                        l+=1 
                    elif type(freq.get(s[r], None)) == int:
                        freq[s[r]] -= 1

            #print(f"aft - l{l}, r{r}, freq{freq} , min{minim}, str{string}, wd{s[l:r+1]}")

        return string
