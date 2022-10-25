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

void exchange_sort(int* A,int size){
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