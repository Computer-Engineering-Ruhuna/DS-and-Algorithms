#include <iostream>
#include <cstdlib>
using namespace std;

int* create_int_array(int size) {
    srand(0);
    int* A = new int[size];
    for (int i = 0; i < size; i++) {
        A[i] = 100+ rand() % 900;
    }
    return A;
}
void print_int_array(int* A,int size) {
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void selection_sort(int* A, int size) {
    for (int i = size - 1; i > 0; i--) {
        int max_index = 0;
        for (int j = 1; j <= i; j++) {
            if (A[j] > A[max_index])
                max_index = j;
        }

        //swap i and max_index
        int temp = A[i];
        A[i] = A[max_index];
        A[max_index] = temp;
    }        
}

void insertion_sort(int* A, int size) {
    for (int i = 1; i < size; i++) {
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j+1] = key;
    }
}


void bubble_sort(int* A, int size) {
    for (int i = size - 1; i > 0;i--) {
        bool isSwapped = false;
        for (int j = 0; j < i; j++) {
            if (A[j + 1] < A[j]) {
                //swap two elements
                isSwapped = true;
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            } 
        }
        if (isSwapped == false)
            break;                
    }

}


int main()
{
    int* array = create_int_array(50);     
    //int array[] = { 0, 1, 2, 3, 4, 5, 6 , 7,8,9};
    //print_int_array(array, 10);
    //bubble_sort(array, 10);
    insertion_sort(array, 50);
    print_int_array(array, 50);

    return 0;
    
}

