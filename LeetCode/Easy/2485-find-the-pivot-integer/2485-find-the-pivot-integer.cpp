class Solution {
public:
    int pivotInteger(int n) {
        int total = n * (n + 1) / 2;
        int left = 0, right = 0;
        for (int x = 1; x <= n; x++) {
            left += x;
            right = total - left + x;
            if (left == right)
                return x;
        }
        return -1;
    }
};