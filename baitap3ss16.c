#include<stdio.h>
void tinhTong(int *numb1,int *numb2,int *ketQua);
int main(){
    int numb1=9;
    int numb2=4;
    int ketQua=0;
    tinhTong(&numb1,&numb2,&ketQua);
    printf("Tong cua 2 so la: %d", ketQua);
    return 0;
}
void tinhTong(int *numb1, int *numb2, int *ketQua) {
    *ketQua = *numb1 + *numb2; 
}