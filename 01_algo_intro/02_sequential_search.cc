#include "01_algo.h"

int find_key(int* A, int size, int key){
    int pos = 0;
    //runs until end of the array 
    //or until you find the key
    while(pos<size && A[pos] != key){
        pos++;
    }

    if(pos<size)
        return pos;
    else
        return -1;
}

int main(){
    int size = 20;
    int key;
    int* A = create_int_array(size);
    print_array(A,size);

    do{
        cout<<"enter a positive key: ";
        cin>>key;
        int pos = find_key(A,size,key);
        if(pos == -1)
            cout<<key <<" not found"<<endl;
        else
            cout<<"You found "<<key <<" at "<<pos<<endl;
    }while(key >= 0);

    
}