/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** MyShell
*/

#include "Reception.hpp"

namespace plazza {
    std::vector<int> Reception::fillVector(int ac, char **av)
    {
        std::vector<int> vec;
        int tmp = 0;
        if (ac != 4) {
            std::cout << "usage: ./plazza [multiplier] [cooks/kitchens] [time]"
                << std::endl;
            exit (84);
        }
        for (size_t i = 1; av[i] != NULL; i++) {
            tmp = atoi(av[i]);
            if (tmp == 0)
                return vec;
            vec.push_back(tmp);
        }
        return vec;
    }

    void Reception::printMyStatus()
    {
        if (this->order == 0) {
            std::cout << "\tNow there are 0 kitchen open !" << std::endl;
        } else {
            std::cout << "\t There are " << this->my_kitchen.idKitchen << " kitchen open !" << std::endl;
            std::cout << "\t You order is in progress and your Kitchen has a the ID " << this->my_kitchen.idKitchen << std::endl;
            std::cout << "\t Number of cooks who work : " << this->my_kitchen.numberCooks << std::endl;
            std::cout << "\t Number of cooks who do not work : " << 0 << std::endl;
            std::cout << "\t Each kitchen stock have 5 ingredients, " << this->my_kitchen.replace << " ms used by the kitchen stock to replace each ingredients." << std::endl;
        }
    }

    int Reception::launchCommand(std::string input)
    {
        if (input.compare("status") == 0) {
            printMyStatus();
            return (0);
        }
        if (input.compare("menu") == 0) {
            printMenuPizza();
            return (0);
        }
        else if (checkRequest(input) == 0) {
            return (0);
        } else {
            std::cout << "\tWrong command" << std::endl;
            return (0);
        }
    }

    int Reception::startReception()
    {
        std::string input;

        std::cout << "> ";
        while (std::getline(std::cin, input)) {
            if (input.compare("exit") == 0)
                return (0);
            launchCommand(input);
            std::cout << "> ";
        }
        if (input.empty())
            std::cout << "(CTRL+D)" << std::endl;
        return (0);
    }
}