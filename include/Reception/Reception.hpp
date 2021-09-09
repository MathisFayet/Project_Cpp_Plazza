/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** reception
*/

#ifndef RECEPTION_HPP_
#define RECEPTION_HPP_

#include <iostream>
#include <string>
#include <memory>
#include <sstream>
#include <vector>
#include <sys/wait.h>
#include <unistd.h>

#include "Pizza.hpp"

namespace plazza {
    class Reception {
        typedef struct kitchen_s
        {
            int idPizza;
            int idKitchen;
            int my_number;
            int numberCooks;
            int replace;
            float multiplier;
        } kitchen_t;

        public:
        // all function for my class ---->
            Reception(int, char **) noexcept;
            Reception(Reception const &r) noexcept = default;
            Reception(Reception &&) noexcept = default;
            ~Reception() noexcept;
            Reception &operator=(Reception const &) noexcept = default;
            Reception &operator=(Reception &&) noexcept = default;
        // all function for my project ---->
            std::vector<int>fillVector(int, char **);
            int startReception();
            int launchCommand(std::string);
            int checkRequest(std::string);
            int checkMoreRequest(std::vector<std::string>, bool);
            void setMyCommand(std::vector<std::string>);
            void printMyStatus();
            void printMenuPizza();

            static PizzaType typeOfPizza(std::vector<std::string>);
            static PizzaSize sizeOfPizza(std::vector<std::string>);

            int getIdPizza();
            int checkReturnPizza();
            void createMyKitchen();
            void finishPizza(int);
        private:
            pid_t pid;
            int order;
            int idCommandPizza;
            int openKitchen;
            int cookNumber;
            std::vector<int> args;
            std::vector<std::string> ordering;
            kitchen_t my_kitchen;
            std::vector<Pizza> pizza; // link to my smart pointer for get the return pizza
        protected:
    };
}

#endif /* !RECEPTION_HPP_ */