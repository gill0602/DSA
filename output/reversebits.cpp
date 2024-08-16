long reverseBits(long num) {
        uint32_t rev = 0;

        for(int i = 31, j = 0; i >= 0; i--, j++) {
            if((num & (1 << i)) != 0) {
                rev |= (1 << j);
            }
        }
        return rev;
}