//
// Created by eric on 2020-10-13.
//
#ifndef LAB5_OPERATION_HPP
#define LAB5_OPERATION_HPP

#include <iostream>

class Operation {
public:
    virtual char get_code();
    virtual int perform(int a, int b);
    virtual ~Operation();
};

inline Operation::~Operation() {};
inline int Operation::perform(int a, int b) {};
inline char Operation::get_code() {};


#endif //LAB5_OPERATION_HPP
