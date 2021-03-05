#include "iter.hpp"


int main(){
    std::cout << "INT ARRAY" << std::endl;
    int arr_int[] = {21, 42, 77, 88};
    iter<int>(arr_int, 4, print_out);
    std::cout << std::endl << std::endl;

    std::cout << "DOUBLE ARRAY" << std::endl;
    double arr_doub[] = {21.21, 42.42, 77.77, 88.88};
    iter<double>(arr_doub, 4, print_out);
    std::cout << std::endl << std::endl;

    std::cout << "STRING ARRAY" << std::endl;
    std::string arr_str[] = {"hello", "there", "hehehe"};
    iter<std::string>(arr_str, 3, print_out);
    std::cout << std::endl;
    return 0;
}