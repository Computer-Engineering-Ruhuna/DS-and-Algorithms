#include "01_algo.h"

int find_key_binary(int* A, int size, int key){
    
    int low = 0;
    int high = size-1;
    int mid;
    int pos = -1;

    while(low<=high && pos == -1){
        mid = (low+high)/2;
        if (key == A[mid])
            pos = mid;
        else if (key < A[mid])
            high = mid -1;
        else 
            low = mid + 1;
    }

    return pos;
}

int main(){
    int size = 20;
    int key;
    int* A = create_int_array(size);
    print_array(A,size);
    exchange_sort(A,size);
    print_array(A,size);
    do{
        cout<<"enter a positive key: ";
        cin>>key;
        int pos = find_key_binary(A,size,key);
        if(pos == -1)
            cout<<key <<" not found"<<endl;
        else
            cout<<"You found "<<key <<" at "<<pos<<endl;
    }while(key >= 0);

    
}