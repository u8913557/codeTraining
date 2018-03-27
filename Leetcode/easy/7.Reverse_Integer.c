int reverse(int x) {
       
    int ans = 0, lo = INT_MIN / 10, hi = INT_MAX / 10;
        while (x) {
            if (ans < lo || ans > hi)
                return 0;
            int r = x % 10;
            ans = ans * 10;
            if (r < 0 && ans < INT_MIN - r || r > 0 && ans > INT_MAX - r)
                return 0;
            ans += r;
            x /= 10;
        }
        return ans;
    
}