void miniMaxSum(int arr_count, int* arr) {
    for(int i = 0; i< arr_count -1; i++){
        for(int j = i+1; j<arr_count; j++){
            if (arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    long long min_sum = 0;
    long long max_sum = 0;
    for(int i =0; i<arr_count -1 ; i++){
        min_sum += arr[i];
    }
    for (int i = 1; i < arr_count; i++){
        max_sum += arr[i];
    }
    printf("%lld %lld\n", min_sum,max_sum);

}