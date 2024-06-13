class Solution:
    def minMovesToSeat(self, seats: List[int], students: List[int]) -> int:
        seats = sorted(seats)
        students = sorted(students)
        res = [abs(x-y) for x, y in zip(seats, students)]
        return sum(res)