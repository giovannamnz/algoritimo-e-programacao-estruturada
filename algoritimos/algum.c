#include<stdio.h>

int main (){
    
    int x = 10, y = 12;

    if (!((x > y && y > 20)||(y == 12))){

        /*pra negar tem que colocar entre parenteses e !*/
        printf("Verdadeiro");

    }else{
        printf("Falso");

    }


    return 0;


}