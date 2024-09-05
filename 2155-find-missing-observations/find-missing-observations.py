class Solution:
    def missingRolls(self, rolls: List[int], mean: int, n: int) -> List[int]:
        '''
            1 + 5 + 6 = 12 / 3 = 4
            2 + 3 + 2 + 2 = 9 /3 = 3 | 4 + 3 = 7 / 2 = 3

            3 + 2 + 4 + 3 = 12 / 4 = 3
            6 + 6 = 12 / 2 = 6 || 3 + 6 = 9 / 2 = 4
        '''  
        m = len(rolls)
        total = mean * (n+m)
        missing = total - sum(rolls)
        if missing > (6 * n) or missing < n:
            return []
        res=[]
        while n:
            curr = min(6, missing-n+1)
            res.append(curr)
            missing -= curr
            n-=1
        return res
