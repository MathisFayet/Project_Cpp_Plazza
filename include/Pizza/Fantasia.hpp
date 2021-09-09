/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** fantasia
*/

#ifndef FANTASIA_HPP_
#define FANTASIA_HPP_

#include "Pizza.hpp"

namespace plazza {
    class Fantasia : public Pizza {
        public:
        // all function for my class
            Fantasia() noexcept;
            Fantasia(Fantasia const &) noexcept = default;
            Fantasia(Fantasia &&) noexcept = default;
            ~Fantasia();
            Fantasia &operator=(Fantasia const &) noexcept = default;
            Fantasia &operator=(Fantasia &&) noexcept = default;
        // all function for my project
        private:
        protected:
    };
}

#endif /* !FANTASIA_HPP_ */
