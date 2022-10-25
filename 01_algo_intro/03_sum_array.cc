#include "01_algo.h"

int find_sum(int* A, int size){
    
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum += A[i];
    }
    return sum;
}


int main(){
    int size = 20;
    int* A = create_int_array(size);
    print_array(A,size);

    int sum = find_sum(A,size);
    cout<<"sum is "<<sum<<endl;
    return 0;
}