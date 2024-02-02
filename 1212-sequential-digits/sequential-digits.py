class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        ans=[]
        ln=len(str(low))
        a=''
        for i in range(1,ln+1):
            a+=str(i)
        b=a
        a=int(a)
        k=int('1'*ln)
        while a<=high:
            # print(a,k,b)
            if a>=low:ans.append(a)
            if str(a)[-1]!='9':a+=k
            else:
                a=int(b+str(int(b[-1])+1))
                b=str(a)
                k=k*10+1
        return ans
