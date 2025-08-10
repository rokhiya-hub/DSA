class Solution {
public:
        array<int, 10> digitCount(int n) {
        array<int, 10> count = {0};
        while (n > 0) {
            count[n % 10]++;
            n /= 10;
        }
        return count;
    }

    bool reorderedPowerOf2(int n) {
        array<int, 10> target = digitCount(n);
        for (int i = 0; i < 31; i++) { // 2^0 to 2^30
            if (digitCount(1 << i) == target)
                return true;
        }
        return false;
    }
};