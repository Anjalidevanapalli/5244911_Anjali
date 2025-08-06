int* countingSort(int arr_count, int* arr, int* result_count) {
    
    int i;
    *result_count = 100;
    int * freq = calloc(100, sizeof(int));
    
    for(i=0;i<arr_count;i++){
        freq[arr[i]]++;
    }
    return freq;

}