#include <stdio.h>

int main()
{
    int n = 10;
    
    for(int i = 1; i <= 10; i++){
        int j = i;
        while(j >= 1){
        printf("#");
        j--;
        }
        printf("\n");
    }

}
