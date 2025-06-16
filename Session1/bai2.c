

void printfDouble(int n){
    int i = 1;   //độ phức tạp O(1)
    while(i<=n){    // so sánh mỗi lần tăng O(1) tổng O(log n)
        printf("%d\n",i);  // mỗi vòng lặp tăng O(1) tổng 0(log n)
        i *= 2;  // mỗi lần lặp tăng O(1) tổng O(log n)
    }
}n)
//tổng số vòng lặp là O(10) + O(log n) + O(log n) + O(log n) = O(log n)
// Created by hp on 6/16/2025.
//
