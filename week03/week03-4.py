# 在一堆草堆裡 haystack ，找到一支needle
# 在 Python 只要一行 a.find(b) 在 字串a 裡找到 字串b
class Solution:
    def strStr(self, a :str, b: str) -> int:
        return a.find(b)