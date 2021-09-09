/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** IPC
*/

#include "IPC.hpp"

/*
    IPC --> message_queue

        - mq_open : Crée une nouvelle file de messages POSIX ou en ouvre une existante
        - mq_receive : Reçoit un message d’une file de messages
        - mq_send : Envoie un message à la message queue
        - mq_close : Ferme la message queue
*/

namespace plazza {

    IPC::IPC() noexcept
    {
        this->number_Q = 0;
    }

    IPC::~IPC() noexcept
    {
        // RAII algorithm ---> use mq_close[send and receive]
        for (auto a : this->send) {
            mq_close(a.my_queue);
        }
        for (auto b : this->receive) {
            mq_close(b.my_queue);
        }
    }

    void IPC::lockMyMutex(bool lock)
    {
        if (lock == true) {
            this->my_mutex.lock();
        }
        if (lock == false) {
            this->my_mutex.unlock();
        }
    }

    void IPC::startForCook(std::string commandPizza, mqd_t receive)
    {
        IPC ipc;
        // print with message " "second argument" cuisine en service"
        ipc.IPCSendMesssageReception(commandPizza, receive);
    }

    int IPC::getMyId(int Kitchen_id, bool activate)
    {
        int index = 0;
        int index2 = 0;

        if (activate == true) {
            for(MESSAGE_Q a : this->send) {
                if (a.ID_Kitchen == Kitchen_id)
                    return (index);
                index++;
            }
        }
        else if (activate == false) {
            for(MESSAGE_Q b : this->receive) {
                if (b.ID_Kitchen == Kitchen_id)
                    return (index2);
                index2++;
            }
        } else {
            throw ("Error detected please reload !");
        }
        return (0);
    }
}

