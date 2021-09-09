/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** pizza
*/

#ifndef PIZZA_HPP_
#define PIZZA_HPP_

#include <iostream>
#include <string>
#include <vector>
#include "Ingredient.hpp"

namespace plazza {
    enum PizzaType {
        Regina = 1,
        Margarita = 2,
        Americana = 4,
        Fantasia = 8,
        Nothing_T = 1
    };

    enum PizzaSize {
        S = 1,
        M = 2,
        L = 4,
        XL = 8,
        XXL = 16,
        Nothing_S = 1
    };

    class Pizza {
        public:
        // all function for my class
            Pizza() noexcept;
            Pizza(Pizza const &) noexcept = default;
            Pizza(Pizza &&) noexcept = default;
            ~Pizza() = default;
            Pizza &operator=(Pizza const &) noexcept = default;
            Pizza &operator=(Pizza &&) noexcept = default;
        // all function for my project
            void makeCooking(float multiplier);
            PizzaType getType();
            PizzaSize getSize();
            int getMultipler();
            int getIdPizzaCommand();

            std::vector<type_of_ingredient> makePizza(PizzaType);
        private:
            PizzaType type;
            PizzaSize size;
            int idCommandePizza;
            int multiplier;
        protected:
    };
}

#endif /* !PIZZA_HPP_ */
