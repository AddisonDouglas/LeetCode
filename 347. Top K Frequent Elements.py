class Solution(object):
    def topKFrequent(self, nums, k):
        res = {}
        returnList = []

        for x in nums:
            if x not in res:
                nums.count(x)
                res[x] = nums.count(x)
        for x in range(k):
            g = max(res, key=res.get)
            returnList.append(g)
            del res[g]

        return returnList

        