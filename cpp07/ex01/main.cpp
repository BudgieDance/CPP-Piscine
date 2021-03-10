#include "iter.hpp"

// class Awesome{

//     public:
//         Awesome( void ) : _n( 42 ) { return; }
//         int get( void ) const { return this->_n; }

//     private:
//         int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ){ 
//     std::cout << x << std::endl;
//     return;
// }

// int main() {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//     Awesome tab2[5];
//     iter( tab, 5, print );
//     iter( tab2, 5, print );
//     return 0;
// }

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