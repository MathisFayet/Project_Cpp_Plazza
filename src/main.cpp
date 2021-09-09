/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** main
*/

#include "Reception.hpp"

int main(int ac, char **av)
{
    try {
        plazza::Reception start(ac, av);
        start.startReception();
    } catch(const std::exception &e) {
        std::cout << e.what() << std::endl;
        exit(84);
    }
}