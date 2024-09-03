class Solution:
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        # Simple recursive solution1    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:

        # 
        n = len(s1)
        m = len(s2)
        o = len(s3)

        if n + m != o:
            return False

        memory = {}

        
        def dfs(i,j, k):
            # base
            if i == n and j == m and k == o:

                return True
            
            if (i, j) in memory:
                return memory[(i,j)]

            # main logic
            if i < n and s1[i] == s3[k]:
                if dfs(i+1, j, k+1):
                    memory[(i,j)] = True
                    return True

            if j < m and s2[j] == s3[k]:
                if dfs(i, j+1, k+1):
                    memory[(i,j)] = True
                    return True

            memory[(i,j)] = False
            return False
            
        return dfs(0, 0, 0)
        