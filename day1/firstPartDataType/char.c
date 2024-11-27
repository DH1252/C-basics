#include <stdio.h>

int main(){

    char charArray[5] ={'a','r','u','n','d'}; // array salah karena tidak memiliki null terminator
    // char charArray[6] ={'a','r','u','n','d'}; //secret '\0'
    // char string[6]= "arund";
    printf("%s\n",charArray); // mencetak semua karakter dalam array tetapi tidak ada null terminator sehingga mengeluarkan garbage character di akhir string
    printf("%c\n",charArray[0]); // mencetak karakter pertama dalam array
    // printf("%c\n",charArray[5]); 

    // char string1 [6] = "Hello"; //there is an implicit character called the null terminator '\0'
    //we can check this by defining a character array with no length defined;
    // char stringHello [] = "Hello"; // 'H'(1) 'e'(2) 'l'(3) 'l'(4) 'o'(5) '\0'(6)

    // printf ("%d\n",sizeof(stringHello));
    // printf("%c",stringHello);
    // printf("%s\n",stringHello);

    char stringArray[][6] = {"Arund","Taib","Anton"}; // array 2 dimensional yang berisi array karakter dan setiap array karakter memiliki panjang 6
    printf("%s",stringArray[2]); // mencetak array karakter ke 2 yaitu "Anton"

}