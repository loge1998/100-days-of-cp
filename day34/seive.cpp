class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        bool prime[n];
        memset(prime,true,sizeof(prime));
        int sum = 1;
        int upper = sqrt(n);
        for (int i = 3; i < n; i += 2) {
          if (prime[i]) {
            sum++;
            if (i > upper) continue;
            for (int j = i * i; j < n; j += 2 * i) {
              prime[j] = false;
            }
          }
        }
        return sum;
    }
};
