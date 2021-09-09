/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** EggPlant
*/

#ifndef EGGPLANT_HPP_
#define EGGPLANT_HPP_

#include "Ingredient.hpp"

namespace plazza {
    class EggPlant : public Ingredient {
        public:
        // all function for my class ---->
            EggPlant() noexcept;
            EggPlant(EggPlant const &) noexcept = default;
            EggPlant(EggPlant &&) noexcept = default;
            ~EggPlant() noexcept = default;
            EggPlant &operator=(EggPlant const &) noexcept = default;
            EggPlant &operator=(EggPlant &&) noexcept = default;
        // all function for my project ---->

        protected:
        private:
    };
}

#endif /* !EGGPLANT_HPP_ */
