#include <iostream>
#include <algorithm>

int main() {
    int arr[10] = {10, 5, 8, 3, 7, 2, 9, 1, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    std::sort(arr, arr + n);
    
    std::cout << "second min in array: " << arr[1] << std::endl;
    
    return 0;
}