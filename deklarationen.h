#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>

void showMenu();
void subMenu(std::string firstName, std::string lastName);
void getLastNameAndFirstName(std::string &lastName, std::string &firstName);
bool checkInputLength(std::string input, unsigned int lenght);

class Account
{
private:
    float balance;
    float credit;
    std::string lastName;
    std::string firstName;

public:
    Account(float bal, float cr, const std::string last, const std::string first);
    std::string getLastName();
    std::string getFirstName();
    float getBalance();
    float getCredit();
    bool deposit();
    bool withdraw();
    bool setCredit();
    bool transfer(Account *recipient);
};

class Accountlist
{
private:
public:
    Account *data;
    Accountlist *next;
    Accountlist(Account *acc);
};

class Management
{
private:
    Accountlist *accounts;

public:
    Management();
    ~Management();

    bool hasAccounts();
    void addAccount();
    void deleteAccount();
    void showAccounts();
    void saveAccounts();
    void loadAccounts();
    void accountManagement(std::string firstName, std::string lastName);
    Account *findAccount(const std::string &lastName, const std::string &firstName);
};

template <typename T>
T validInput()
{
    T input;
    while (true)
    {
        std::cin >> input;
        if (std::cin.fail())
        {
            std::cout << "\nFehlerhafte Eingabe. Bitte wiederholen" << std::endl;
            std::cin.clear();
            while (std::cin.get() != '\n')
                ;
        }
        else
        {
            while (std::cin.get() != '\n')
                ;
            break;
        }
    }
    return input;
}