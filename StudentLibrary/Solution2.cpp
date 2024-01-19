#include "Solution2.h"
#include <fstream>
#include <iostream>
#include <sstream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
    std::string filePath = "BankAccount/" + accountName + ".txt";
    std::ifstream file(filePath);

    if (!file.is_open())
    {
        throw std::runtime_error("File not found");
    }

    float balance = 0.0f;
    std::string line;

    while (std::getline(file, line))
    {
        std::istringstream lineStream(line);
        std::string operation;
        float amount;

        if (lineStream >> operation >> amount)
        {
            if (operation == "DEPOSIT") {
                balance += amount;
            }
            else if (operation == "WITHDRAW") {
                balance -= amount;
            }
            else {
                throw std::exception("Invalid operation");
            }
        }
    }

    file.close();

    return balance;
}

#endif