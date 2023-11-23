#include <iostream>
#include <array>
#include <algorithm>

int main(){
    //different ways to initialize an array
    std::cout << "There are several ways to initialize an array, each one with a specific reason:" << std::endl;

    // Method 1: Initializing at the time of declartion;
    std::cout << "Method 1)" << std::endl;
    int arr1[] = {1, 2, 3, 4, 5};
    
    std::cout << "This method immediately assigns values to an empty array. The size of the array will be based"
            << "off of the number elements initialized." << std::endl;
    for(int i = 0; i < std::size(arr1); i++)
        std::cout << arr1[i] << " ";
    
    std::cout << "\n\n";

    //Method 2: Explicitly specifying the size and initializing the elements:
    std::cout << "Method 2)" << std::endl;
    int arr2[5]={1, 2, 3, 4, 5};
    
    std::cout << "The only difference between this method and the previous method is the definiton of the array size."
            << "arr1[] had no defined size, while arr2[5] defines a size of 5. Therefore, we CANNOT initialize more than 5 elements."
            << std::endl;
    for(int i = 0; i < std::size(arr2); i++)
        std::cout << arr2[i] << " ";

    std::cout << "\n\n";
    
    //Method 3: Partially inializing an array:
    std::cout << "Method 3)" << std::endl;
    int arr3[5] = {1, 2};

    std::cout << "This method partially defines the elements in the array. The first two elements will be initailezed"
            << "to a specific value but the rest will be set to zero." << std::endl;
    for(int i = 0; i < std::size(arr3); i++)
        std::cout << arr3[i] << " ";

    std::cout << "\n\n";
    
    //Method 4: Initializing with zero values
    std::cout << "Method 4)" << std::endl;
    int arr4[5] = {};

    std::cout << "This method will declare an array, but initialize all values to zero since no values are given." << std::endl;
    for(int i = 0; i < std::size(arr4); i++)
        std::cout << arr4[i] << " ";

    std::cout << "\n\n";

    //Method 5: Initializng using std::fill (requires '<algorithm>' header)
    std::cout << "Method 5)" << std::endl;
    int arr5[5];

    std::cout << "This method uses std::fill, but requires the <algorithm> header to work." << std::endl;
    std::fill(arr5, arr5 + 5, 42);

    for(int i = 0; i < std::size(arr5); i++)
        std::cout << arr5[i] << " ";

    std::cout << "\n\n";

    //Method 6: Initialize usting std::array (requires <array> header)
    std::cout << "Method 6)" << std::endl;
    std::array<int, 5> arr6 = {1, 2, 3, 4, 5};

    std::cout << "This method uses std::array, but requires the <array> header to work." << std::endl;
    for(int i = 0; i < std::size(arr6); i++)
        std::cout << arr6[i] << " ";

    std::cout << "\n\n";

    return 0;
}