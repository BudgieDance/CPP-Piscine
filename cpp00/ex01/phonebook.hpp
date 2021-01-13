#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include <limits.h>

class Contact{
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal_addr;
        std::string email_addr;
        std::string phone_number;
        std::string birthday;
        std::string fav_meal;
        std::string color;
        std::string secret;
        static void increment(void);
        static int get_cont(void);

    private:
        static int number_of_contacts;
};

#endif