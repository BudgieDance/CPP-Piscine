#include "Convert.hpp"

int main(int argc, char** argv){
	if (argc != 2){
		std::cout << "Wrong number of arguments" << std::endl;
		return 0;
	}
	else{
			Convert x(argv[1]);
			x.convert_all();
			std::cout << x << std::endl;
	}
	return 0;
}
	
