class Solution(object):
    def isAnagram(self, s, t):
        sList = list(s)
        for x in t:
            if len(t) != len(s):
                return False 
            if x not in sList:
                return False
            else:
                sList.remove(x)
        return True
    
        