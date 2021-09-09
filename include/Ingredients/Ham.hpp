/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** Ham
*/

#ifndef HAM_HPP_
#define HAM_HPP_

#include "Ingredient.hpp"

namespace plazza {
    class Ham : public Ingredient {
        public:
        // all function for my class ---->
            Ham() noexcept;
            Ham(Ham const &) noexcept = default;
            Ham(Ham &&) noexcept = default;
            ~Ham() noexcept = default;
            Ham &operator=(Ham const &) noexcept = default;
            Ham &operator=(Ham &&) noexcept = default;
        // all function for my project ---->

        protected:
        private:
    };
}

#endif /* !HAM_HPP_ */
