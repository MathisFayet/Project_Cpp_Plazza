/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** Gruyere
*/

#ifndef GRUYERE_HPP_
#define GRUYERE_HPP_

#include "Ingredient.hpp"

namespace plazza {
    class Gruyere : public Ingredient {
        public:
        // all function for my class ---->
            Gruyere() noexcept;
            Gruyere(Gruyere const &) noexcept = default;
            Gruyere(Gruyere &&) noexcept = default;
            ~Gruyere() noexcept = default;
            Gruyere &operator=(Gruyere const &) noexcept = default;
            Gruyere &operator=(Gruyere &&) noexcept = default;
        // all function for my project ---->


        protected:
        private:
    };
}
#endif /* !GRUYERE_HPP_ */
