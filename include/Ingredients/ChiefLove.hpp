/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** ChiefLove
*/

#ifndef CHIEFLOVE_HPP_
#define CHIEFLOVE_HPP_

#include "Ingredient.hpp"

namespace plazza {
    class ChiefLove : public Ingredient {
        public:
        // all function for my class ---->
            ChiefLove() noexcept;
            ChiefLove(ChiefLove const &) noexcept = default;
            ChiefLove(ChiefLove &&) noexcept = default;
            ~ChiefLove() noexcept;
            ChiefLove &operator=(ChiefLove const &) noexcept = default;
            ChiefLove &operator=(ChiefLove &&) noexcept = default;
        // all function for my project ---->
        protected:
        private:
    };
}
#endif /* !CHIEFLOVE_HPP_ */
