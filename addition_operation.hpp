//
// Created by eric on 2020-10-13.
//
#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP


#include "abstract_operation.hpp"

class Addition_Operation: public Abstract_Operation {
public:
    static const char ADDITION_CODE = '+';
    Addition_Operation() : Abstract_Operation(ADDITION_CODE) {

    };
    int perform(int a, int b) {
        return a + b;
    }

    virtual ~Addition_Operation();
};
inline Addition_Operation::~Addition_Operation() {};

#endif //LAB5_ADDITION_OPERATION_HPP
