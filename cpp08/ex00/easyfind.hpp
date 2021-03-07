#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iterator>
#include <exception>

template<typename T>
typename T::iterator easyfind(T& container, int number){
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), number);
    if (it == container.end())
        throw std::exception();
    return it;
}
#endif