class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if len(s) != len(t):
            return False

        srtd_s = sorted(s)
        srtd_t = sorted(t)

        if srtd_s == srtd_t:
            return True
        
        return False
        