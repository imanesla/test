#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Create a vector of integers
    std::vector<char> Names(4);

    // Add elements to the vector
    Names.at(0)='a';
    Names.at(1)='b';
    Names.at(2)='c';
    Names.at(3)='d';
    
    
    


    // Iterate through the vector and print elements
    for (int i = 0; i < Names.size(); ++i) {
        cout<<Names.at(0)<<endl<<Names.at(1)<<endl<<Names.at(2)<<endl<<Names.at(3)<<endl;
        return 0;
    }
    // / Access and modify elements
    // numbers[0] = 10;
    // numbers[1] = 12;
    // std::cout << std::endl;

    // // Use the at() method for bounds-checked access
    // try {
    //     std::cout << numbers.at(0) <<"\n" <<numbers.at(1) <<"\n"<<numbers.at(2)<<"\n"<<numbers.at(3)<< std::endl;
    // } catch (const std::out_of_range& e) {
    //     std::cerr << "Out of range error: " << e.what() << std::endl;
    // }

    return 0;
}
