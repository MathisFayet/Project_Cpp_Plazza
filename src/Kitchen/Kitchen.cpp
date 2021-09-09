/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** main
*/

#include "Kitchen.hpp"

/* Class for my kitchen :
 *  ---> Goal :
 *      Cook == thread;
 *      Object encapdulation my processes, threads, mutex, conditionnal variables
 *          --> thread and join for threadPool
 */

namespace plazza {
    Kitchen::Kitchen(int idPizza, int numberCooks, int replace, float multiplier) noexcept
    {
        // RAI method ---> fill variables
        int index = 0;
        this->idPizza = idPizza;
        this->numberCooks = numberCooks;
        this->replace = replace;
        this->multiplier = multiplier;
        this->initMyQueue();

        while (index < this->numberCooks) {
            this->cooks.push_back(initCook(multiplier, replace, send, receive));
            index += 1;
        }
        this->threadPool();
    }

    std::thread Kitchen::initCook(float multiplier, int replace, mqd_t send, mqd_t receive)
    {
        // A thread is a way to execute a set of instructions independent of the thread
        std::thread thread(&Kitchen::myCooker, replace, multiplier, send, receive);
        return (thread);
    }

    void Kitchen::initMyQueue(void) // function for check my message queue
    {
        struct mq_attr attr;
        this->send = mq_open("/send", O_RDWR | O_CREAT, 0600, &attr);
        if (this->send == -1) {
            throw Exception("Open message queue failed ", "in the Kitchen !");
        }
        this->receive = mq_open("/receive", O_RDWR | O_CREAT, 0600, &attr);
        if (this->receive == -1) {
            throw Exception("Open message queue failed", "in the Kitchen !");
        }
    }

    void Kitchen::myCooker(int replace, float multiplier, mqd_t send, mqd_t receive)
    {
        IPC ipc;
        Ingredient ingredient;
        Pizza piz;
        bool status = true;
        std::string input;
        std::string commandPizza;

// Dont forget mutex
        ipc.lockMyMutex(true);
        while (status == true) {
            ipc.IPCReceiveMessageReception(input, receive);
            if (input.compare("exit") == 0 && replace == multiplier) {
                ipc.IPCSendMesssageReception(input, send);
                status = false;
            }
            piz.makeCooking(multiplier);
            ipc.startForCook(commandPizza, receive);
            ipc.lockMyMutex(false);
        }
    }

    void Kitchen::threadPool(void)
    {
        // Un pool de threads est un ensemble de threads utilisables pour exécuter des tâches en fonction des besoins
        int index = 0;

        while (index < this->numberCooks) {
            this->cooks[index].join(); // mise en attente du thread en cours d'exécution
            index += 1;
        }
    }
}