#include <iostream>

int main(int argc, char **argv)
{
    int args;
    char *argument;

    args = 1;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (args < argc)
        {
            argument = argv[args];
            while (*argument != '\0')
            {
                std::cout << (char)toupper(*argument);
                argument++;
            }
            std::cout << " ";
            args++;
        }
        std::cout << std::endl;
    }
    
}