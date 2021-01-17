#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include <limits.h>

class Contact{
    public:
        static void increment(void);
        static int get_cont(void);
        void set_params(void);
        void print_params(void) const;
        std::string get_first_name(void) const;
        std::string get_last_name(void) const;
        std::string get_nickname(void) const;

    private:
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
        static int number_of_contacts;
};

#endif
