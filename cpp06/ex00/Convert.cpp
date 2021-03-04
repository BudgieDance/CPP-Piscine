#include "Convert.hpp"

/*CONSTRUCTORS*/
Convert::Convert(){}

Convert::Convert(std::string arg) : _impossible(false), _range(false), _arg(arg){
    setType();
}

Convert::Convert(Convert const &src){
    (void)src;
}

Convert::~Convert(){}


/*CONVERT*/
void Convert::fromChar(){
   this->_char = this->_arg[0];
   this->_int = static_cast<int>(this->_char);
   this->_float = static_cast<float>(this->_char);
   this->_double = static_cast<double>(this->_char);
}

void Convert::fromInt(){
    try{
        this->_int = stoi(this->_arg); 
        this->_char = static_cast<char>(this->_int);
        this->_float = static_cast<float>(this->_int);
        this->_double = static_cast<double>(this->_int);
    }
    catch(std::exception& ex){
        this->_range = true;
    }
}

void Convert::fromFloat(){
    try{
        this->_float = stof(this->_arg); 
        this->_char = static_cast<char>(this->_float);
        this->_int = static_cast<int>(this->_float);
        this->_double = static_cast<double>(this->_float);
    }
    catch(std::exception& ex){
        this->_range = true;
    }
}

void Convert::fromDouble(){
    try{
        this->_double = stod(this->_arg); 
        this->_char = static_cast<char>(this->_double);
        this->_int = static_cast<int>(this->_double);
        this->_float = static_cast<float>(this->_double);
    }
    catch(std::exception& ex){
        this->_range = true;
    }
}

void Convert::convert_all(){
    if (this->_type == charType)
        fromChar();
    else if(this->_type == intType)
        fromInt();
    else if (this->_type == floatType)
        fromFloat();
    else if (this->_type == doubleType)
        fromDouble();
    return; 
}

/*SETTERS/GETTERS*/
void Convert::setType(){
    if (this->_arg.length() == 1){
        if (std::isdigit(this->_arg[0]))
            this->_type = intType;
        else
            this->_type = charType;
        return;
    }
    if (this->_arg == "-inff" || this->_arg == "+inff" || this->_arg == "nanf"){
        this->_impossible = true;
        this->_type = floatType;
        return ;
    }
    if (this->_arg == "-inf" || this->_arg == "+inf" || this->_arg == "nan"){
        this->_impossible = true;
        this->_type = doubleType;
        return ;
    }
    int i = 0;
    if (this->_arg[i] == '-' || this->_arg[i] == '+')
        i++;
    while (this->_arg[i] && std::isdigit(this->_arg[i]))
        i++;
    if (!(this->_arg[i])){
        this->_type = intType;
        return ;
    }
    else if(this->_arg[i] == '.'){
        if (!(this->_arg[i + 1])){
            this->_type = unknownType;
            return ;
        }
        i++;
    }
    else{
        this->_type = unknownType;
        return ;
    }
    while (this->_arg[i] && std::isdigit(this->_arg[i]))
        i++;
    if (!(this->_arg[i])){
        this->_type = doubleType;
        return ;
    }
    else if(this->_arg[i] == 'f'){
        if (!(this->_arg[i + 1])){
            this->_type = floatType;
            return ;
        }
        this->_type = unknownType;
    }
    else
        this->_type = unknownType;
}

int Convert::getType() const{
    return this->_type;
}

bool Convert::getImpossible() const{
    return this->_impossible;
}

bool Convert::getRange() const{
    return this->_range;
}

int Convert::getInt() const{
    return this->_int;
}

char Convert::getChar() const{
    return this->_char;
}

float Convert::getFloat() const{
    return this->_float;
}

double Convert::getDouble() const{
    return this->_double;
}

void Convert::convert_all2(){
    if (getType() == 0)
        std::cout << "char" << std::endl;
    else if (getType() == 1)
        std::cout << "int" << std::endl;
    else if (getType() == 2)
        std::cout << "float" << std::endl;
    else if (getType() == 3)
        std::cout << "double" << std::endl;
    else
        std::cout << "error" << std::endl;
}

/*OVERLOADS*/
Convert& Convert::operator=(Convert const &src){
    (void)src;
    return *this;
}

std::ostream& operator<<(std::ostream& os, Convert const &src){
    if (src.getType() == 4 || src.getRange() == true){
        os << "Invalid argument";
        return os;
    }
    //char
    os << "char: ";
    if (src.getInt() < 0 || src.getInt() > 127 || src.getImpossible() == true)
        os << "impossible" << std::endl;
    else if ((src.getInt() >= 0 && src.getInt() <= 31) || src.getInt() == 127)
        os << "Non displayable" << std::endl;
    else
        os << "'" << src.getChar() << "'" << std::endl;
    
    //int
    os << "int: ";
    if (src.getImpossible() == true)
        os << "impossible" << std::endl;
    else
        os << src.getInt() << std::endl;
    
    //float
    os << "float: " << src.getFloat(); 
    if ((src.getFloat() - src.getInt()) == 0)
        os << ".0";
    os << "f" << std::endl;

    //double
    os << "double: " << src.getDouble();
    if ((src.getFloat() - src.getInt()) == 0)
        os << ".0";
    return os;
}