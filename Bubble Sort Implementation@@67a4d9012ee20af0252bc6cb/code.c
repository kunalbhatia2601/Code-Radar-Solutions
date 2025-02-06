#include <iostream>
#include <algorithm>

void bubbleSort(int ary[], int n) {     
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(ary[j] > ary[j + 1]) {
                std::swap(ary[j], ary[j + 1]);
            }
        }
    }
}

void printArray(int ary[], int n) {     
    for(int i = 0; i < n; i++) {         
        std::cout << ary[i] << " ";     
    }     
    std::cout << std::endl;
}