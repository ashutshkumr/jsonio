#ifndef JSON_IO_HPP
#define JSON_IO_HPP

#include <string>
#include <any>
#include <variant>

namespace jsonio {

class serdes {
    public:
    std::any from_str(std::string str);
};


}; // namespace


#endif
