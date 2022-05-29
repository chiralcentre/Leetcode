class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        #sort by square of Euclidean distance from origin
        points = sorted(points,key = lambda x: x[0]**2 + x[1]**2)
        #return the closest k points
        return points[:k]
