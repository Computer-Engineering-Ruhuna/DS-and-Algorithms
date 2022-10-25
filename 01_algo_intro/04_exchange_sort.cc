#include "01_algo.h"

void exchange_sort_1(int* A,int size){
    for(int i = 0; i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(A[j] < A[i]){
                int temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
}

int main(){
    int size = 40;
    int* A = create_int_array(size);
    print_array(A,size);
    exchange_sort(A,size);
    print_array(A,size);
    return 0;
}