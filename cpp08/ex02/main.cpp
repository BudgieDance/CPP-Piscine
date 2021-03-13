#include "MutantStack.hpp"
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

// int main(){

//     MutantStack<int> a;
//     a.push(1);
//     a.push(2);
//     a.push(3);
//     a.push(4);
//     a.push(5);
//     a.push(6);
//     a.push(7);
//     a.push(8);
//     a.push(9);
//     a.push(10);

//     MutantStack<int> b(a);
//     b.push(11);
//     b.push(12);
//     a.pop();
//     a.pop();

//     std::cout << "STACK A NORMAL PRINT" << std::endl;
//     MutantStack<int>::iterator itb = a.begin();
//     MutantStack<int>::iterator ite = a.end();
//     while(itb != ite){
//         std::cout << *itb << " ";
//         itb++;
//     }
//     std::cout << std::endl << std::endl;

//     std::cout << "STACK A REVERSE PRINT" << std::endl;
//     MutantStack<int>::reverse_iterator itbr = a.rbegin();
//     MutantStack<int>::reverse_iterator iter = a.rend();
//     while(itbr != iter){
//         std::cout << *itbr << " ";
//         itbr++;
//     }
//     std::cout << std::endl << std::endl;
    
//     std::cout << "STACK B REVERSE PRINT WITH top() and pop()" << std::endl;
//     std::cout << "b stack size = " << b.size() << std::endl;
//     while(!(b.empty())){
//         std::cout << b.top() << " ";
//         b.pop();
//     }
//     std::cout << std::endl;
//     std::cout << "b stack size = " << b.size() << std::endl;

//     return 0;
// }