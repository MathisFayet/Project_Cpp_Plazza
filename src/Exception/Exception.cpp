/*
** EPITECH PROJECT, 2021
** B-CCP-400-BDX-4-1-theplazza-william.sautour
** File description:
** Exception
*/

#include "Exception.hpp"

namespace plazza {
    Exception::Exception(std::string const &message, std::string const &status) noexcept : std::exception(),
        message(message), status(status)
    {
        std::cerr << "Error : " << this->what() << std::endl;
    }

    Exception::~Exception() noexcept
    {
    }

    const std::string &Exception::getStatus() const
    {
        return (this->status);
    }

    const char *Exception::what() const noexcept
    {
        return (message.c_str());
    }
}