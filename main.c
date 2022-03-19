#include<stdio.h>

void show();

int main(){

    show();
    show();
    return 0; 
}

void show(){
    static int count=0;
    printf("\nCount %d",count);
    count++;
}








// int count;
// extern void write_extern();


// int main(){
//     int count=5;
//     printf("Im in in main program\n");
//     write_extern();
//     return 0;
// }


