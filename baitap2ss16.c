#include <stdio.h>
void doiGiaTri(int *a, int *b) {
    int temp = *a; 
    *a = *b;    
    *b = temp;  
}

int main() {
    int x = 10, y = 20; 
    printf("Trước khi đổi giá trị:\n");
    printf("x = %d, y = %d\n", x, y);
    doiGiaTri(&x, &y);
    printf("Sau khi đổi giá trị:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
