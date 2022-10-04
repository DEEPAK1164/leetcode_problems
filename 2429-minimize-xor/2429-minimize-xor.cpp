class Solution {
public:
    int countSetBits( int n)
{
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
    int minimizeXor(int num1, int num2) {
       
         int a = countSetBits(num1), b = countSetBits(num2), res = num1;
        for (int i = 0; i < 32; ++i) {
            if (a > b && ((1 << i) & num1) > 0) {
                res ^= 1 << i;
                a--;
            }
            if (a < b && ((1 << i) & num1) == 0) {
                res ^= 1 << i;
                a++;
            }
        }
        return res;
    }
};