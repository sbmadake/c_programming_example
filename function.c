#include<stdio.h>

int addition(int,int);
int main(){
    int val1,val2;
    printf("Enter two values: ");
    scanf("%d%d",&val1,&val2);

    printf("Addition of two numbers %d",addition(val1,val2));

}


int addition(int num1,int num2){

    return num1+num2;
}

// int addition(void);

// int main(){

//     printf("Result is %d",addition());
//     return 0;
// }

// int addition(void){
//     int val1,val2;
//     printf("Enter two values: ");
//     scanf("%d%d",&val1,&val2);

//     return (val1+val2);

// }














// void addition(int,int);

// int main(){
//     int val1,val2;
//     printf("Enter two values: ");
//     scanf("%d%d",&val1,&val2);

//     addition(val1,val2);

//     return 0;

// }

// void addition(int num1,int num2){
//     printf("Addition is %d",num1+num2);
// }


// void cateres(int); //declarations of user defined function
// int main(){
//     printf("\nMain is called");
//     cateres(100); //calling of user defined function
    
//    return 0;
// }


// void cateres(int number){  //definitions of user defined function

//     printf("\ncateres is called %d",number);
// }

