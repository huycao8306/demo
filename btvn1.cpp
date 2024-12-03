#include <stdio.h>


int find_number_in_array(int array[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (array[i] == number) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);
    int number;

    printf("Nh?p v�o m?t con s?: ");
    scanf("%d", &number);

    
    int result = find_number_in_array(array, size, number);
    if (result != -1) {
        printf("S? %d c� ? v? tr�: %d\n", number, result);
    } else {
        printf("Kh�ng th?y s? ��u\n");
    }

    return 0;
}

