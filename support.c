#include<stdio.h>
extern int count;

void write_extern(){
    
    printf("Count is %d",count);
    printf("Im in in write_extern program\n");
}