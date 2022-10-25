#include<iostream>
#include<cstdlib>
using namespace std;

int* create_int_array(int size){
    int* A = new int[size];

    for(int i=0;i<size;i++){
        A[i] = rand()%1000;
    }
    return A;
}

void print_array(int*A, int size){
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size = 10;
    int* A = create_int_array(size);
    print_array(A,size);
    return 0;    
}