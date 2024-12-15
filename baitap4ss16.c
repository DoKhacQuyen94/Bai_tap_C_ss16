#include<stdio.h>
void inMang(int *arr, int kichThuoc);
int main(){
    int arr[]={1,2,3,4,5,6};
    int kichThuoc = sizeof(arr) / sizeof(arr[0]);
    inMang(arr,kichThuoc);
    return 0;
}
void inMang(int *arr,int kichThuoc){
    printf("Các phần tử trong mảng là:\n");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", *(arr + i));  // Truy cập từng phần tử thông qua con trỏ
    }
    printf("\n");

}