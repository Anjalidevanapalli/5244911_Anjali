int compare(const void *a, const void *b) {
    return(*(int*)a - *(int*)b);
 }
char* twoArrays(int k, int A_count, int* A, int B_count, int* B) {
    if( A_count != B_count) {
        printf("Invalid input.\n");
        return "NO";
    }
    qsort(A,A_count,sizeof(int),compare);
    qsort(B,B_count,sizeof(int),compare);
    
    for(int i = 0; i<A_count;i++) {
        if(A[i] + B[B_count-1-i] < k) {
            return "NO";
        }
    }    
    return "YES";
    
    

}