/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** margarita
*/

#ifndef MARGARITA_HPP_
#define MARGARITA_HPP_

#include "Pizza.hpp"

namespace plazza {
    class Margarita : public Pizza {
        public:
        // all function for my class
            Margarita() noexcept;
            Margarita(Margarita const &) noexcept = default;
            Margarita(Margarita &&) noexcept = default;
            ~Margarita();
            Margarita &operator=(Margarita const &) noexcept = default;
            Margarita &operator=(Margarita &&) noexcept = default;
        // all function for my project
        private:
        protected:
    };
}

#endif /* !MARGARITA_HPP_ */
