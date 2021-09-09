/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** FromKitchen
*/

#include "IPC.hpp"

namespace plazza {
    void IPC::IPCSendMessageKitchen(std::string my_messageK, int id_sendK)
    {
        int get_my_ID = this->getMyId(id_sendK, true);
        int send = mq_send(this->send[get_my_ID].my_queue, my_messageK.c_str(), my_messageK.length(), 0);
        if (send == -1) {
            throw ("Send message failed please reload !");
        }
    }

    int IPC::IPCReceiveMessageKitchen(std::string &my_message, int id_receive)
    {
        int get_my_ID = this->getMyId(id_receive, false);
        char better_message[100];  // because mq_receive want char *
        std::cout << "Got message" << std::endl;
        int receive = mq_receive(this->receive[get_my_ID].my_queue, better_message, 100, NULL);
        my_message.assign(better_message);

        if (receive == -1) {
            throw ("Receive message failed please reload !");
        }
        return (receive);
    }
}
