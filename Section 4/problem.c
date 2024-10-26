#include <stdio.h>
#include <stdbool.h>

int main(){
    bool improvedApproach = true;
    if(!improvedApproach){
        for(int i= 1 ; i<= 10 ; i++){
            printf(" 1 * %d = %d\n",i,1*i);
        }

        for(int i= 1 ; i<= 10 ; i++){
            printf(" 2 * %d = %d\n",i,2*i);
        }

        for(int i= 1 ; i<= 10 ; i++){
            printf(" 3 * %d = %d\n",i,3*i);
        }

        for(int i= 1 ; i<= 10 ; i++){
            printf(" 4 * %d = %d\n",i,4*i);
        }

        for(int i= 1 ; i<= 10 ; i++){
            printf(" 5 * %d = %d\n",i,5*i);
        }

        for(int i= 1 ; i<= 10 ; i++){
            printf(" 6 * %d = %d\n",i,6*i);
        }

        for(int i= 1 ; i<= 10 ; i++){
            printf(" 7 * %d = %d\n",i,7*i);
        }

        for(int i= 1 ; i<= 10 ; i++){
            printf(" 8 * %d = %d\n",i,8*i);
        }

        for(int i= 1 ; i<= 10 ; i++){
            printf(" 9 * %d = %d\n",i,9*i);
        }

        for(int i= 1 ; i<= 10 ; i++){
            printf(" 10 * %d = %d\n",i,10*i);
        }
    }
    else{
        for(int i=1 ; i<=10 ; i++){
            for(int j=1 ; j<=10 ; j++){
                printf(" %d * %d = %d\n",i,j,i*j);
            }
        }
    }

    return 0;
}