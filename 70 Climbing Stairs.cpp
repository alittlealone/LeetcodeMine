class Solution {
public:
	int climbStairs(int n) {
		if (n == 0 || n == 1)
			return n;
		if (n == 2)
			return 2;
		int count;
		int a = 1;
		int b = 2;
		for (int i = 3; i <= n; i++) {
			count = a + b;
			a = b;
			b = count;
		}
		return count;
	}
};