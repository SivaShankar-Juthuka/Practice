'''You are given an array people where people[i] is the weight of the ith person, and an infinite number of boats where each boat can carry a maximum weight of limit. 
Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most limit.
Return the minimum number of boats to carry every given person.'''


def numRescueBoats(self, people: List[int], limit: int) -> int:
        k = sorted(people)
        i, j = 0, len(people)-1
        res = 0
        while(i <= j):
            if k[i]+k[j] <= limit:
                i+=1
            j-=1
            res+=1
        return res
