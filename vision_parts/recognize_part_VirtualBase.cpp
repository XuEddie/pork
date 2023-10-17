//
// Created by Sora on 2023/10/17.
//

#include "recognize_part_VirtualBase.h"
#include "AI_part_VirtualBase.h"

recognize_part_VirtualBase::recognize_part_VirtualBase() {
    this->ready = false;
}

PORK *recognize_part_VirtualBase::Get_PORK3() {
    return this->pork_3;
}

PORK *recognize_part_VirtualBase::Get_PORK2() {
    return this->pork_2;
}

PORK *recognize_part_VirtualBase::Get_PORK1() {
    return this->pork_1;
}

void recognize_part_VirtualBase::Get_ready() {
    std::cerr << "Please rewrite this function(recognize_part_VirtualBase::Get_ready())!!!" << std::endl;
    exit(-1);
}

PORK::PORK(POSITION pos_in, int *value_in, SIZE *size_in) {
    this->my_pos = pos_in;
    this->value_array = value_in;
    this->size_array = size_in;
}

PORK::PORK(){
    this->value = 0;
    this->size = NULL_SIZE;
    this->next = nullptr;
}
