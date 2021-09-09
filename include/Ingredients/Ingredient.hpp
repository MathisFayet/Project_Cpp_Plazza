/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** Ingredient
*/

#ifndef Ingredient_HPP_
#define Ingredient_HPP_

namespace plazza {
        enum type_of_ingredient {
            goatCheese,
            chiefLove,
            tomato,
            steack,
            gruyere,
            mushrooms,
            doe,
            eggPlant,
            ham,
        };
    class Ingredient {
        public:
        // all function for my class ---->
            Ingredient() noexcept;
            Ingredient(Ingredient const &) noexcept = default;
            Ingredient(Ingredient &&) noexcept = default;
            ~Ingredient() noexcept = default;
            Ingredient &operator=(Ingredient const &) noexcept = default;
            Ingredient &operator=(Ingredient &&) noexcept = default;
        // all function for my project ---->
            type_of_ingredient getType() const;
        protected:
            type_of_ingredient type;
        private:
    };
}
#endif /* !Ingredient_HPP_ */
