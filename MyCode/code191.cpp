class Solution {
public:
    int hammingWeight(uint32_t n) {
        int icount=0;
        uint32_t num=1;  //��һλ��1
        for(int i=31;i>-1;i--)
        {
            if((n&num)==num)
                icount++;
            num=num<<1;
        }
        return icount;
    }
};