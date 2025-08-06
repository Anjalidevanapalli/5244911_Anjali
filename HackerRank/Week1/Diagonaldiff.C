int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int PDS = 0;
    int SDS = 0;
    for(int i =0;i<arr_rows;i++){
        PDS += arr[i][i];
        SDS += arr[i][arr_rows-i-1];
    }
    return abs(PDS-SDS);

}