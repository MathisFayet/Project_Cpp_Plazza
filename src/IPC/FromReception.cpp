/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** FromReception
*/

#include "IPC.hpp"

namespace plazza {
    void IPC::IPCSendMesssageReception(std::string my_messageS, mqd_t my_queueS)
    {
        int send = mq_send(my_queueS, my_messageS.c_str(), my_messageS.length(), 0);

        if (send == -1) {
            throw ("Send message failed please reload !");
        }
    }

    void IPC::IPCReceiveMessageReception(std::string &my_messageR, mqd_t my_queueR)
    {
        char better_message[100]; // because mq_receive want char *
        int receive = mq_receive(my_queueR, better_message, 100, NULL);
        my_messageR.assign(better_message);
        if (receive == -1) {
            throw ("Receive message failed please reload !");
        }
    }
}