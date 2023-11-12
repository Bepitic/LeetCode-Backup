class Solution:
    def max_map(self,ma) ->int:
        mx = 0
        for it,val in ma.items():
            if val > mx:
                mx = val
        return mx
    def characterReplacement(self, s: str, k: int) -> int:
        mx = 0
        window = [0,0]
        freq = {}
        for i in s:
            freq[i] = 0
        #print(freq)
        #freq[s[window[1]]] += 1
        while window[1] <= len(s):
            # print(self.max_map(freq))
            # print(freq)

            # print(window)
            if  (window[1]-window[0]) - self.max_map(freq) <= k:
                if window[1] < len(s):
                    freq[s[window[1]]] += 1
                window[1] += 1
            else:
                freq[s[window[0]]] -= 1
                window[0] += 1 
            
            if (window[1]-1-window[0]) > mx:
                mx = window[1]-1-window[0]

        return mx