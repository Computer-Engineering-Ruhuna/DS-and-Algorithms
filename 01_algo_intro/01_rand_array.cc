#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int size = 10;
    int* A = new int[size];

    for(int i=0;i<size;i++){
        A[i] = rand()%1000;
    }

    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}