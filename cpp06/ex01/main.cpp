#include <string>
#include <cstdlib>
#include <climits>
#include <ctime>
#include <iostream>

struct Data{
    std::string s1;
    int n;
    std::string s2;
};

void print_before_ser(char* array1, char* array2, int number){
    std::cout << "VALUES BEFORE SERIALIZATION" << std::endl;
    std::cout << "array1 = " << array1 << std::endl;
    std::cout << "array2 = " << array2 << std::endl;
    std::cout << "random number = " << number << std::endl;
}

void print_after_ser(char* s_data){
    int i = 0;
    std::cout << std::endl << "SERIALIZED CONCATENATED ARRAY" << std::endl;
    while (i < 20){
        std::cout << s_data[i];
        i++;
    }
    std::cout << std::endl;
}

void print_after_deser(struct Data* data){
    std::cout << std::endl << "VALUES AFTER DESERIALIZATION" << std::endl;
    std::cout << "array1 = " << data->s1 << std::endl;
    std::cout << "array2 = " << data->s2 << std::endl;
    std::cout << "random number = " << data->n << std::endl;
}

void* serialize(void){
    char* s_data = new char[20];
    char chars[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* numptr;
    int i = 0;
    int number;
    char array1[9];
    char array2[9];

    while (i < 8){
        array1[i] = chars[rand() % (sizeof(chars) - 1)];
        array2[i] = chars[rand() % (sizeof(chars) - 1)];
        i++;
    }
    array1[i] = '\0';
    array2[i] = '\0';
    i = 0; 
    while (i < 8){
        s_data[i] = array1[i];
        s_data[i + 12] = array2[i];
        i++;
    }
    number = rand() % INT_MAX; //4bytes
    numptr = reinterpret_cast<char*>(&number);
    while (i < 12){
        s_data[i] = numptr[i - 8];
        i++;
    }
    print_before_ser(array1, array2, number);
    print_after_ser(s_data);
    return (reinterpret_cast<void*>(s_data));
}

Data* deserialize(void* raw){
    struct Data* data = new Data();
    data->s1 = std::string(reinterpret_cast<char*>(raw), 8);
    data->n = *(reinterpret_cast<int*>(raw) + 2);
    data->s2 = std::string(reinterpret_cast<char*>(raw) + 12);
    return data;
}

int main(void){
    struct Data* data;
    void* s_data;
    char* temp;

    srand(time(NULL));
    s_data = serialize();
    data = deserialize(s_data);
    print_after_deser(data);

    temp = reinterpret_cast<char*>(s_data);
    delete temp;
    delete data;
    return 0;
}