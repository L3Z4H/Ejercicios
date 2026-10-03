//PIRAMIDE
 
#include <stdio.h>
 
void Piramide(int n){
int i, j, k;

    for(i =0; i <= n; i++) {
        //for(j = 0; i>= n - i; j++){
        //printf("  ");
        //}
       for( k = 0; k <= i; k++){
           printf(" * ");
       }
       printf("\n");
    }

}
 
 
 
int main(){
    Piramide(4);











    return 0;
}