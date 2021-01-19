#include <iostream>
#include <fstream>
#include <string>

#define ARGS_NUMB_ERROR "Wrong number of arguments(Enter a filename followed by two strings)"
#define FIRST_EMPTY "The first string is empty"
#define SECOND_EMPTY "The second string is empty"
#define INPUT_FILE_ERROR "Failed to open the file"
#define OUTPUT_FILE_ERROR "Failed to create the file"

void replace_str(std::ifstream &inp_file, std::ofstream &out_file, std::string str1, std:: string str2){
   size_t index;
   std::string line;
   int length;
   int length2;

    length = str1.length();
    length2= str2.length();
    index = 0;
    while (getline(inp_file, line))
    {
        while (true)
        {
            index = line.find(str1, index); 
            if (index == std::string::npos)
                break;
            line.replace(index, length, str2);
            index = index + length2;
        }
        out_file << line;
        if (!inp_file.eof())
            out_file << std::endl;
        index = 0;
    }
    inp_file.close();
    out_file.close();
}

int main(int argc, char **argv){
    std::ifstream inp_file;
    std::ofstream out_file;
    std::string file;

    try{
        if (argc != 4)
            throw ARGS_NUMB_ERROR;
        if (std::string(argv[2]).length() == 0)
            throw FIRST_EMPTY;
        if (std::string(argv[3]).length() == 0)
            throw SECOND_EMPTY;
        file = std::string(argv[1]);
        inp_file.open(file);
        if (!inp_file.is_open())
            throw INPUT_FILE_ERROR;
        out_file.open(file + ".replace");
        if (!out_file.is_open())
        {
            inp_file.close();
            throw OUTPUT_FILE_ERROR;
        }
        replace_str(inp_file, out_file, argv[2], argv[3]);
    }
    catch(const char *error_message){
        std::cout << "replace: error: " << error_message << std::endl;
    }
    return 0;
}