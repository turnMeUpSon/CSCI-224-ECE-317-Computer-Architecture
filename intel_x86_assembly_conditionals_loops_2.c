int hw4_prob2(int x, int y) {
    int result = y + x >> 1;

    if (x <= 5 || x > result) {
        result = x;
        if (x == y) {
            result ^= y;
        }
        else {
            result -= y;
        }
    }
    else {
        result = x << 2;
    }

    return result;
}
