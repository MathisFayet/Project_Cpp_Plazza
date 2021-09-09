/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** pizza
*/

#include "Pizza.hpp"
#include "Ingredient.hpp"

namespace plazza {

    Pizza::Pizza() noexcept
    {
        // initialize all variables ---> Methode RAII
    }

    PizzaType Pizza::getType()
    {
        return (this->type);
    }

    PizzaSize Pizza::getSize()
    {
        return (this->size);
    }

    int Pizza::getIdPizzaCommand()
    {
        return (this->idCommandePizza);
    }

    int Pizza::getMultipler()
    {
        return (this->multiplier);
    }

    std::vector<type_of_ingredient> Pizza::makePizza(PizzaType my_type)
    {
        std::vector<type_of_ingredient> type_of_ingredient;

        if (my_type == 1) {
            type_of_ingredient.push_back(type_of_ingredient::doe);
            type_of_ingredient.push_back(type_of_ingredient::tomato);
            type_of_ingredient.push_back(type_of_ingredient::gruyere);
            type_of_ingredient.push_back(type_of_ingredient::ham);
            type_of_ingredient.push_back(type_of_ingredient::mushrooms);
        }
        if (my_type == 2) {
            type_of_ingredient.push_back(type_of_ingredient::doe);
            type_of_ingredient.push_back(type_of_ingredient::tomato);
            type_of_ingredient.push_back(type_of_ingredient::gruyere);
        }
        if (my_type == 4) {
            type_of_ingredient.push_back(type_of_ingredient::doe);
            type_of_ingredient.push_back(type_of_ingredient::tomato);
            type_of_ingredient.push_back(type_of_ingredient::gruyere);
            type_of_ingredient.push_back(type_of_ingredient::steack);
        }
        if (my_type == 8) {
            type_of_ingredient.push_back(type_of_ingredient::doe);
            type_of_ingredient.push_back(type_of_ingredient::tomato);
            type_of_ingredient.push_back(type_of_ingredient::eggPlant);
            type_of_ingredient.push_back(type_of_ingredient::goatCheese);
            type_of_ingredient.push_back(type_of_ingredient::chiefLove);
        }
        return (type_of_ingredient);
    }

    void Pizza::makeCooking(float multiplier)
    {
        int check_bake = 0;

        if (Pizza::type == 1)
            check_bake = 2000;
        if (Pizza::type == 2)
            check_bake = 1000;
        if (Pizza::type == 4)
            check_bake = 2000;
        if (Pizza::type == 8)
            check_bake = 4000;

        check_bake *= multiplier;
    }
}