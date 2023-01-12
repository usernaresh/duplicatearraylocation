#include <stdio.h>

int main()
{
    int dup[10] = {1,1,3,4,4,6,6,7,8,9};
    int loc[10] = {0};
    int cor[10] = {0};
    int start=1, end =9 , size =10;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (dup[i] == dup [j])
                loc[j] = 1;
        }
    }
    int change =0, newsize=size;
    for(int i=0, j=0;i<size;i++, j++){
        cor[j] = dup[i];
        if (loc[i]){
            newsize--;
            printf(" duplicate location and value: dup[%d] = %d \n", i, dup[i]);
            cor[j] = dup[i+1];
            i++;
        }
    }
    printf("corrected array:");
    
    for(int i=0;i<newsize;i++){
        printf("%d ", cor[i]);
    }
    
    return 0;
}
