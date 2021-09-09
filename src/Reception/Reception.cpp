/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** reception
*/

#include "Reception.hpp"
#include "Kitchen.hpp"
#include "IPC.hpp"

namespace plazza {
    Reception::Reception(int ac, char **av) noexcept
    {
        this->args = fillVector(ac, av);
        this->order = 0;
        this->my_kitchen.idKitchen = 0;
        this->my_kitchen.multiplier = this->args[0];
        this->my_kitchen.numberCooks = this->args[1];
        this->my_kitchen.replace = this->args[2];
    }

    Reception::~Reception() noexcept
    {
        // for the RAII algorithm
    }

    void Reception::setMyCommand(std::vector<std::string> ordering)
    {
        IPC ipc;
        int index = 0;
        while (index < this->ordering[2][1]) {
            createMyKitchen();
            ipc.IPCSendMessageKitchen(ordering[2], index);
        }
    }

    void Reception::createMyKitchen()
    {
        this->pid = fork();
        this->openKitchen++; // kitchen create --> 1
        if (this->pid == -1) {
            throw Exception("A mistake inside the fork son", "Reception");
        }
        if (this->pid == 0) { // We are on the son
            Kitchen kitchen(this->my_kitchen.idKitchen, this->my_kitchen.numberCooks, this->my_kitchen.replace, this->my_kitchen.multiplier);
        }
    }

    int Reception::checkReturnPizza()
    {
        int checkReady = 0;
        // link to my pizza for check if the pizza are ready
        if (this->pizza.size() == 0) {
            checkReady = 0;
            return (checkReady);
        } else {
            checkReady = 1;
            return (checkReady);
        }
    }

    void Reception::finishPizza(int commandePizza)
    {
        if (checkReturnPizza() == 0) {
            std::cout << "Your order number " << commandePizza << " wether "
                << ordering[0] << " " << ordering[1] << " " << ordering[2][0] << ordering[2][1]
                    << " is done" << std::endl;
        } else {
            std::cout << "Your order isn't done" << std::endl;
        }
    }
}