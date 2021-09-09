/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** Ingredient
*/

#include "Ingredient.hpp"

namespace plazza {
    Ingredient::Ingredient() noexcept
    {
    }

    type_of_ingredient Ingredient::getType() const
    {
        return (this->type);
    }
}

