class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        d = defaultdict(int)

        for s in nums:
            d[s] += 1

        res = []

        for i in range(k):
            freq = max(d, key=d.get)
            res.append(freq)
            del d[freq]
        
        return res