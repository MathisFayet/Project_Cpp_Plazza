/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** regina
*/

#ifndef REGINA_HPP_
#define REGINA_HPP_

#include "Pizza.hpp"

namespace plazza {
    class Regina : public Pizza {
        public:
        // all function for my class
            Regina() noexcept;
            Regina(Regina const &) noexcept = default;
            Regina(Regina &&) noexcept = default;
            ~Regina();
            Regina &operator=(Regina const &) noexcept = default;
            Regina &operator=(Regina &&) noexcept = default;
        // all function for my project
        private:
        protected:
    };
}

#endif /* !REGINA_HPP_ */
