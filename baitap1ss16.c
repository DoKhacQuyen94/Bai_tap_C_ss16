#include <stdio.h>

int main() {
    int var = 42;      
    int *ptr = &var;
    printf("Cách 1 (trực tiếp):\n");
    printf("Giá trị của biến: %d\n", var);
    printf("Địa chỉ của biến: %d\n", &var);
    
    printf("\nCách 2 (thông qua con trỏ):\n");
    printf("Giá trị của biến (qua con trỏ): %d\n", *ptr);
    printf("Địa chỉ của biến (qua con trỏ): %d\n", (void*)ptr);

    return 0;
}
