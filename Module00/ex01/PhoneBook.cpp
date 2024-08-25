#include <iostream>
#include <cstring>

/// @brief class for Contact.
class Contact
{
private:
    std::string name;
    std::string phoneNumber;

public:
    void setContact(const std::string& _name, const std::string& _phoneNumber)
    {
        name = _name;
        phoneNumber = _phoneNumber;
    }

    const std::string getName()
    {
        return name;
    }

    const std::string getPhoneNumber()
    {
        return (phoneNumber);
    }
};

/// @brief class for Phonebook.
class PhoneBook
{
private:
    Contact contact[8];
    int contactCount;
    int contactIndex;

public:
        /// @brief Add new contact to the list.
        /// @param name the name of the contact that would be added.
        /// @param phoneNumber the phone number of the contact that would be added.
        void addContact(const std::string& name, const std::string& phoneNumber)
        {
            if (contactIndex < 8)
            {
                contact[contactIndex].setContact(name, phoneNumber);
                contactIndex++;
            }
            else
            {
                contactCount = (contactIndex) % 8;
                contact[contactCount].setContact(name, phoneNumber);
            }
        }
        void displayContact(const std::string name)
        {
            for (int i = 0; i < 8; i++)
            {
                if (name == contact[i].getName())
                {
                    std::cout << contact[i].getName() << "|" << contact[i].getPhoneNumber();
                    break;
                }
            }
        }
};

/// @brief readline from stdin and execute the command if it exists.
/// @param name the name of the contact.
/// @param phoneNumber the phone number of the contact.
void readline(std::string& name, std::string& phoneNumber)
{
    PhoneBook phoneBook;
    while(1)
    {
        std::cout << "Please enter one of these commands (ADD, SEARCH or EXIT):\n>>> ";
        std::getline(std::cin, name);
        if (name == "EXIT" || std::cin.eof())
            break;
        std::cout << "name: " << name << std::endl;
        if (name != "SEARCH" || name != "ADD" || name != "EXIT")
        {
            std::cout << "Command not found: `" << name << "\' please try again!" << std::endl;
            continue;
        }
        std::cout << "Please enter the phone number:\n>>> ";
        std::getline(std::cin, phoneNumber);
        phoneBook.addContact(name, phoneNumber);
    }
}

int main()
{

    void* ptr = NULL;
    std::string  name, phoneNumber;
    readline(name, phoneNumber);
    return (0);
}