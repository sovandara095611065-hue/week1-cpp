#include <iostream>
int main(){
    // declare an int and the array of 10 integers
    int arr[10];
    
    //-------------------------------------------

    // let the user enter 10 integers and store them in the array
    for (int i=0; i<10; i++) {
        std::cout<< "enter number #"<< i+1 <<": ";
        std::cin>>arr[i]; 
    }
    
    
    //--------------------------------------------

    // print the numbers in reverse order
    for (int i=10; i>0; i--) {
        std::cout << i<< ' ';
    }
    std::cout << '\n';


    //--------------------------------------------

    // count the number of even numbers in the array and print it
    int count=0;
    for (int i=0; i<10; i++) {
        if (arr[i]%2==0) {
            std::cout<< arr[i]<< ' ';
            count++;
        }
    }
    std::cout<< '\n';
    std::cout << count;


    //--------------------------------------------
}