/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** ForMyPizza
*/

#include "Reception.hpp"
#include "IPC.hpp"

namespace plazza {
    PizzaType Reception::typeOfPizza(std::vector<std::string> ordering)
    {
        if (ordering[0] == "regina")
            return (PizzaType::Regina);
        if (ordering[0] == "margarita")
            return (PizzaType::Margarita);
        if (ordering[0] == "americana")
            return (PizzaType::Americana);
        if (ordering[0] == "fantasia")
            return (PizzaType::Fantasia);
        return (PizzaType::Nothing_T);
    }

    PizzaSize Reception::sizeOfPizza(std::vector<std::string> ordering)
    {
        if (ordering[1].compare("S") == 0)
            return (PizzaSize::S);
        if (ordering[1].compare("M") == 0)
            return (PizzaSize::M);
        if (ordering[1].compare("L") == 0)
            return (PizzaSize::L);
        if (ordering[1].compare("XL") == 0)
            return (PizzaSize::XL);
        if (ordering[1].compare("XXL") == 0)
            return (PizzaSize::XXL);
        return (PizzaSize::Nothing_S);
    }

    void Reception::printMenuPizza(void)
    {
        std::cout << "\tWe can offer you 4 kins of pizza tonight !" << std::endl << std::endl;
        std::cout << "\t1 : Margarita pizza with doe, tomato and gruyere !" << std::endl;
        std::cout << "\t2 : Regina pizza with doe, tomato, gruyere, ham and mushrooms !" << std::endl;
        std::cout << "\t3 : Americana pizza with doe, tomato, gruyere and steack ! " << std::endl;
        std::cout << "\t4 : Fantasia pizza with doe, tomato, eggPlant, goatCheese and chiefLove !" << std::endl;
    }

    int Reception::checkMoreRequest(std::vector<std::string> ordering, bool status1)
    {
        bool status2, status3 = false;

        if (ordering[1].compare("S") == 0 || ordering[1].compare("M") == 0 || ordering[1].compare("L") == 0 || ordering[1].compare("XL") == 0 || ordering[1].compare("XXL") == 0) {
                sizeOfPizza(ordering);
                status2 = true;
        } else {
            std::cout << "\tWrong command" << std::endl;
            return (84);
        }
        if (ordering[2][2] > '0') {
            status3 = false;
            std::cout << "\tWrong Command" << std::endl;
            return (84);
        }
        if (ordering[2][0] == 'x' && (ordering[2][1] > '0' && ordering[2][1] <= '9')) {
            status3 = true;
        } else {
            std::cout << "\tWrong Command" << std::endl;
            return (84);
        }
        if (status1 == true && status2 == true && status3 == true) {
            this->my_kitchen.idKitchen += 1;
            this->order = 1;
            std::cout << "\tYour order is " << ordering[0] << " " << ordering[1] << " " << ordering[2][0] << ordering[2][1] << std::endl;
            std::cout << "\tYou will be noticed when it's done !" << std::endl;
            this->setMyCommand(ordering);
        }
        return (0);
    }

    int Reception::checkRequest(std::string input)
    {
        bool status1 = false;
        std::istringstream s(input);
        std::string part;
        ordering.clear();

        while (std::getline(s, part, ' '))
            ordering.push_back(part);
        if (ordering.size() != 3)
            return (84);
        if (ordering[0] == "regina" || ordering[0] == "margarita" || ordering[0] == "americana" || ordering[0] == "fantasia") {
            typeOfPizza(ordering);
            status1 = true;
        }
        else {
            return (84);
        }
        checkMoreRequest(ordering, status1);
        return (0);
    }
}