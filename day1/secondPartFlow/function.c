#include <stdio.h>

int sum(int a, int b){ // fungsi sum yang mengembalikan nilai dari penjumlahan a dan b
    int result = a +b;
    return result; //or we can just do return a + b ;
}

void summation(int a , int b){ // fungsi summation yang mencetak hasil penjumlahan a dan b
    int result = a +b; //we can alo use the sum function before making it a function inside a function
    printf("result of x + y is = %d\n",result);
}

int main(){
    int x = 10, y = 20; // deklarasi variabel x dan y
    int result = sum(x,y); // memanggil fungsi sum dengan parameter x dan y dan menyimpan hasilnya ke variabel result
    printf("value of x = %d, value of y = %d\n",x,y); // mencetak nilai dari x dan y
    // printf("summed value of both of them (x+y)= %d",result);
    summation(x,y); // memanggil fungsi summation dengan parameter x dan y yang kemudian mencetak hasil penjumlahan x dan y

    return 0;
}