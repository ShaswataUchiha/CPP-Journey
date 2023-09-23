class solution
{
public:
    int setKthBit(int N, int K)
    {
        int value = 1 << K;
        int ans = N | value;
        return ans;
    }
    
};