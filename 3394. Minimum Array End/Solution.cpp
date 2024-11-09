class Solution {
public:
    long long minEnd(int n, int x) {
        long long res = x;
        queue<int> pos;
        for(int i = 0; i < 64; i++){
            if(i<32 && (x&(1<<i)))continue;
            pos.push(i);
        }
        n--;
        for(int i = 0; i<32; i++){
            if(n&(1<<i)) res += (1LL << pos.front());
            pos.pop();
        }
        return res;
    }
};