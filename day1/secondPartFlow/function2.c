#include <stdio.h>
int x =5,y=10; // variabel global x dan y
void swap(); // deklarasi fungsi swap

int main() {
    // int x = 5, y = 10;
    // swap(x, y); //we need to Pass references (addresses) of x and y
    printf("x: %d, y: %d\n", x, y); //result should be x: 10, y: 5 // mencetak nilai dari x dan y
    return 0;
}

// void sum(int x,y)
void swap() { // fungsi swap yang berfungsi untuk menukar nilai dari x dan y
    int temp = x; // deklarasi variabel temp yang menyimpan nilai dari x
    x = y; // menukar nilai x dengan y
    y = temp; // menukar nilai y dengan x yang sudah disimpan di temp
}