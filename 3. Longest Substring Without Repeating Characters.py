class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        map = {}
        mx_len = 0
        curr_len = 0
        string = []
        for e in s:
            if e in map:
                lng = map[e]
                print(f"lng - {lng}")

                for i in range(lng):
                    print(string)
                    print(i)
                    del map[string[i]]
                for i in range(lng,len(string)):
                    map[string[i]] -= lng
                string = string[lng:]

        
            string.append(e)
            map[e] = len(string)
            curr_len = len(string)
            if curr_len > mx_len:
                mx_len = curr_len

        return mx_len