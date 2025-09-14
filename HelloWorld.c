#include <stdio.h>

void theOffice(){
    printf("\nKevin, what you mean, see the world or seaworld?");
    printf("\nC world, oceans, fish, CHINA\n");
}

int sumThreeNumbers(int a, int b, int c){
    return a + b + c;
}

void metalRock(){
    for(int start = 1; start <= 3;start++) {
        printf("%d NOTHINGS WRONG WITH ME\n", start);
    }

    for(int bridge = 1; bridge <=3; bridge++){
        printf("\nSomethings got to give\n");
    }

    printf("AHHHHHH");

    for(int end=1;end<=3;end++){
        printf("\nLET THE BODIES HIT THE FLOOR\n");
    }
    printf("\nLET THE BODIES HIT THE FLOOOOORRRRR");
}

/*  header file:  #include <stdio.h>
 *   In C, main is the entry point, like psvm in Java
 *   return 0 = processed
 */


int main(){
    theOffice();
    printf("\n");
    printf("%d", sumThreeNumbers(4,5,6));
    printf("\n");
    metalRock();
    return 0;
}