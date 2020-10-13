//
// Created by eric on 2020-10-13.
//
#ifndef LAB5_ABSTRACT_OPERATION_HPP
#define LAB5_ABSTRACT_OPERATION_HPP


#include "operation.hpp"

class Abstract_Operation : public Operation{
private:
    char operation_type;
public:
    Abstract_Operation(char operation) {
        operation_type = operation;
    };
    char get_code() {
        return operation_type;
    };
    virtual ~Abstract_Operation();
};

Abstract_Operation::~Abstract_Operation() {
    std::cout << "Abstract Operation destroyed" << std::endl;
}

#endif //LAB5_ABSTRACT_OPERATION_HPP
