/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** kitchen
*/

#ifndef KITCHEN_HPP_
#define KITCHEN_HPP_

#include <mutex>
#include <thread>
#include <vector>
#include <mqueue.h>
#include <condition_variable>

#include "Ingredient.hpp"
#include "Exception.hpp"
#include "IPC.hpp"
#include "Pizza.hpp"

namespace plazza {
    class Kitchen {
        public:
        // all function for my class ---->
            Kitchen(int, int, int, float) noexcept;
            Kitchen(Kitchen const &) noexcept = default;
            Kitchen(Kitchen &&r) noexcept = default;
            ~Kitchen() noexcept = default;
            Kitchen &operator=(Kitchen const &) noexcept = default;
            Kitchen &operator=(Kitchen &&) noexcept = default;
        // all function for my project ---->
            void threadPool(void);
            void initMyQueue(void);
            static std::thread initCook(float, int,mqd_t, mqd_t); // for thread with rvalue
            static void myCooker(int, float, mqd_t, mqd_t); // for thread with rvalue
            void stopForCook(void);
            void checkMyIngredient(void);
            void regenerateIngredient(void);
        private:
            int multiplier;
            int replace;
            int numberPizza;
            int numberCooks;
            int idPizza;
            mqd_t send;
            mqd_t receive;
            std::vector<std::thread> cooks; // create my thread for new process
            std::condition_variable cv;
        protected:
    };
}

#endif /* !KITCHEN_HPP_ */
