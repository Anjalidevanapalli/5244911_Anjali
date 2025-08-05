int lonelyinteger(int a_count, int* a) {
    int res = 0;
    for (int i =0 ; i<a_count; i++){
        res ^= a[i];
    }
    return res;
}