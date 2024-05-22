#include <iostream>

int main() {
    int array[] = {15, 25, 60, 30, 11, 7, 45}; //values of array
    int length_array = sizeof(array) / sizeof(array[0]); //1 size of array is 4 byte, i have 7 values multiply 4  = 28 
    //28 total bytes of array / 1 value of array is 4 bytes = 28/4 = 7bytes
    
    std::cout << "Array : ";
    
    for(int i = 0; i < length_array; i++) //making a loop for array
    {
        std::cout << array[i] << " ";
    }
}
