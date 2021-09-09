/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** americana
*/

#ifndef AMERICANA_HPP_
#define AMERICANA_HPP_

#include "Pizza.hpp"

namespace plazza {
    class Americana : public Pizza {
        public:
        // all function for my class
            Americana() noexcept;
            Americana(Americana const &) noexcept = default;
            Americana(Americana &&) noexcept = default;
            ~Americana();
            Americana &operator=(Americana const &) noexcept = default;
            Americana &operator=(Americana &&) noexcept = default;
        // all function for my project
        private:
        protected:
    };
}

#endif /* !AMERICANA_HPP_ */
