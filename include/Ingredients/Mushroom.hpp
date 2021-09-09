/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** Mushroom
*/

#ifndef MUSHROOM_HPP_
#define MUSHROOM_HPP_

#include "Ingredient.hpp"

namespace plazza {
    class Mushroom : public Ingredient{
        public:
        // all function for my class ---->
            Mushroom() noexcept;
            Mushroom(Mushroom const &) noexcept = default;
            Mushroom(Mushroom &&) noexcept = default;
            ~Mushroom() noexcept = default;
            Mushroom &operator=(Mushroom const &) noexcept = default;
            Mushroom &operator=(Mushroom &&) noexcept = default;
        // all function for my project ---->

        protected:
        private:
    };
}

#endif /* !MUSHROOM_HPP_ */
