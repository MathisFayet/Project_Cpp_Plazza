/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** Steack
*/

#ifndef STEACK_HPP_
#define STEACK_HPP_

#include "Ingredient.hpp"

namespace plazza {

    class Steack : public Ingredient{
        public:
        // all function for my class ---->
            Steack() noexcept;
            Steack(Steack const &) noexcept = default;
            Steack(Steack &&) noexcept = default;
            ~Steack() noexcept = default;
            Steack &operator=(Steack const &) noexcept = default;
            Steack &operator=(Steack &&) noexcept = default;
        // all function for my project ---->

        protected:
        private:
    };
}
#endif /* !STEACK_HPP_ */
