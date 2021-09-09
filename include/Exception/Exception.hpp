/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** Exception
*/

#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_

#include <exception>
#include <string>
#include <iostream>

namespace plazza {
    class Exception : std::exception {
        public:
        // all function for my class ---->
            Exception(std::string const &message, std::string const &status = "Unknown") noexcept;
            Exception(Exception const &) noexcept = default;
            Exception(Exception &&) noexcept = default;
            ~Exception() noexcept;
            Exception &operator=(Exception const &) noexcept = default;
            Exception &operator=(Exception &&) noexcept = default;
        // all function for my project ---->
            const std::string &getStatus() const;
            const char *what() const noexcept;
        protected:
        private:
            std::string message;
            std::string status;
    };
}

#endif /* !EXCEPTION_HPP_ */
