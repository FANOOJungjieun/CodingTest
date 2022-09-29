class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        arr1 = [[abs(n-x),i] for i,n in enumerate(arr)] # arr에서 n-x값을 따로 빼내 저장한다.
        arr1.sort(key = lambda x:x[0]) # 이차원배열을 n-x 순서대로 정렬한다.
               
            
        return sorted([arr[arr1[i][1]] for i in range(k)]) # k개만큼 꺼내어 정렬한다.
        
