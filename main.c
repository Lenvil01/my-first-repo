// *****Even or odd*****
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n%2==0){
//         printf("Even\n");
//     }
//     else{
//         printf("Odd\n");
//     }
//     return 0;
// }

// *****5 to 15 (multiples of 3)*****
// #include<stdio.h>

// int main(){
//     for(int i=5; i<=15; i++){
//         if(i%3==0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

// *****Multiplication table of 8*****
// #include<stdio.h>

// int main(){
//     printf("Times 8 Table\n");
//     for(int i=0; i<=10; i++){
//         printf("%d x 8 = %d\n",i,i*8);
//     }
//     return 0;
// }

// *****Multiplication table by input*****
#include<stdio.h>

int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("Times %d Table\n",n);
    for(int i=0; i<=10; i++){
        printf("%d x %d = %d\n",i,n,i*n);
    }
    return 0;
}

// *****Start, step_by, stop*****
// #include<stdio.h>

// int main(){
//     int start,step_by,stop;
//     printf("Enter three integers: ");
//     scanf("%d %d %d",&start,&step_by,&stop);
//     for(int i=start; i<=stop; i+=step_by){
//         printf("%d ",i);
//     }
//     return 0;
// }