class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        N1=len(word1)
        N2=len(word2)
        N=max(N1,N2)

        ans=""
        for i in range(N):