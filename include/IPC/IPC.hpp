/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** --File description:
** *
*/

#ifndef IPC_HPP_
#define IPC_HPP_

#include <iostream>
#include <mqueue.h> // for IPC -> "les appeles systemes"
#include <vector>
#include <mutex>
#include <condition_variable>

// ---> Goal : IPC with reception class and kitchen class

namespace plazza {
    typedef struct MESSAGE_S {
        int ID_Kitchen;
        mqd_t my_queue;
    } MESSAGE_Q;

    class IPC {
        public:
        // all function for my class ---->
            IPC() noexcept;
            IPC(IPC const &) noexcept = default;
            IPC(IPC &&) noexcept = default;
            ~IPC() noexcept;
            IPC &operator=(IPC const &) noexcept = default;
            IPC &operator=(IPC &&r) noexcept = default;
        // all function for my project ---->
            void addMyIPC(int);
            int getMyId(int, bool);
            void IPCSendMesssageReception(std::string, mqd_t);
            void IPCReceiveMessageReception(std::string &, mqd_t);
            void IPCSendMessageKitchen(std::string, int);
            int IPCReceiveMessageKitchen(std::string &, int);
            void startForCook(std::string, mqd_t);

            void lockMyMutex(bool);

        private:
            int number_Q;
            std::vector<MESSAGE_Q> send;
            std::mutex my_mutex;
            std::vector<MESSAGE_Q> receive;
        protected:
    };
}
#endif /* !IPC_HPP_ */

