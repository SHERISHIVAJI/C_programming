#include<stdio.h>
int main() {
    for( int outer_ite = 1;  outer_ite <= 5; outer_ite++) {
        for (int inner_itr = 1; inner_itr <= 5; inner_itr++) {
            if(outer_ite == 4 && inner_itr == 4) {
                break;
            }
            printf("(%d, %d)\t", outer_ite, inner_itr);
        }
    }
    return 0;
}