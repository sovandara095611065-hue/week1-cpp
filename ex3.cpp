#include <iostream>
int main(){
    // declare an array of 5 integers
    int arr[5]= {1,2,3,4,5};

    //-------------------------------------------


    // implement your logic to find max and min of the array and print them
    int min=100;
    int max=0;
    
    
    for (int i=0; i<5; i++) {
        if (arr[i]<min) {
            min=arr[i];
        }
        if ( arr[i]>max) {
            max=arr[i];
        }
    }
    std::cout<< "max: "<< max<< std::endl;
    std::cout<< "min: "<< min<< std::endl;
    
    //--------------------------------------------

}