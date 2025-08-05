void plusMinus(int arr_count, int* arr) {
    int p = 0, n = 0, z = 0;
    for(int i =0 ; i < arr_count ; i++){
        if(arr[i] > 0)
         p ++;
         else if (arr[i] < 0) 
         n ++;
         else
         z++;
    }
    printf("%.6f\n",(double) p/arr_count);
    printf("%.6f\n",(double) n/arr_count);
    printf("%.6f\n",(double)z/arr_count);

}