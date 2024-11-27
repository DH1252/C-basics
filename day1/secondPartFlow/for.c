#include <stdio.h>
/*

for (initialize expression (1); test expression(2); update expression(4))
{
    //
    // body of for loop (3)
    //
}

while (test expression)
{
   // body consisting of multiple statements
}

do {
 
    // body of do-while loop    
    
} while (condition);
*/
int main(){
    int a = 10; // deklarasi variabel a
    ///*
    // int i = 0;
    // for(; i<10; i++,printf("%d ",i)){
    //     ;
    // }
    //*/

   // /*
    // https://www.youtube.com/watch?v=0BkoXZBbhfU
    int arr[5] = {10,2,5,11,3}; // deklarasi array arr dengan 5 elemen
    int tmp; // deklarasi variabel tmp
    for (int i = 0; i < 5 - 1; i++) {     // for loop bubble sort yang mengevaluasi dua angka bersampingan dan menukar posisinya jika angka pertama lebih besar dari angka kedua
        // Last i elements are already in place, so the loop will only num n(5) - i - 1 times
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]){
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(int i =0;i<5;i++){ // mencetak array arr yang sudah diurutkan
        printf("%d ",arr[i]);
    }
    //*/

    //WHILE

    // while(1){
    //     //codingan
    // }
    
    // while(a != 11){
    //     printf("value of a = %d\nplease change value of a so it becomes 11 : ",a);
    //     scanf("%d",&a);
    // }
    // printf("thanks!");
    
    a=10; // redeklarasi variabel a
    while(a<10){ // while loop yang tidak akan pernah dijalankan karena a sama dengan 10
        printf("%d",a);
        a++;
    }

    // printf("\na resets\n");a=0; //change both a to 10 and see what happens
    do{ // do while loop yang tidak akan pernah dijalankan karena a sama dengan 10
        printf("%d",a);
        a++;
    }while(a<10);
}