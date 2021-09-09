/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** Doe
*/

#ifndef DOE_HPP_
#define DOE_HPP_

#include "Ingredient.hpp"

namespace plazza {
    class Doe : public Ingredient {
        public:
        // all function for my class ---->
            Doe() noexcept;
            Doe(Doe const &) noexcept = default;
            Doe(Doe &&) noexcept = default;
            ~Doe() noexcept = default;
            Doe &operator=(Doe const &) noexcept = default;
            Doe &operator=(Doe &&) noexcept = default;
        // all function for my project ---->

        protected:
        private:
    };
}

#endif /* !DOE_HPP_ */
