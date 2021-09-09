/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** Tomato
*/

#ifndef TOMATO_HPP_
#define TOMATO_HPP_

#include "Ingredient.hpp"

namespace plazza {
    class Tomato : public Ingredient {
        public:
        // all function for my class ---->
            Tomato() noexcept;
            Tomato(Tomato const &) noexcept = default;
            Tomato(Tomato &&) noexcept = default;
            ~Tomato() noexcept = default;
            Tomato &operator=(Tomato const &) noexcept = default;
            Tomato &operator=(Tomato &&) noexcept = default;
        // all function for my project ---->

        protected:
        private:
    };
}

#endif /* !TOMATO_HPP_ */
