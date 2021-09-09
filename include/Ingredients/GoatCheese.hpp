/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** GoatCheese
*/

#ifndef GOATCHEESE_HPP_
#define GOATCHEESE_HPP_

#include "Ingredient.hpp"

namespace plazza {
    class GoatCheese : public Ingredient {
        public:
        // all function for my class ---->
            GoatCheese() noexcept;
            GoatCheese(GoatCheese const &) noexcept = default;
            GoatCheese(GoatCheese &&) noexcept = default;
            ~GoatCheese() noexcept = default;
            GoatCheese &operator=(GoatCheese const &) noexcept = default;
            GoatCheese &operator=(GoatCheese &&) noexcept = default;
        // all function for my project ---->

        protected:
        private:
    };
}

#endif /* !GOATCHEESE_HPP_ */
