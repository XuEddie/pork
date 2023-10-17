//
// Created by Sora on 2023/10/17.
//

#include "UI_VirtualBase.h"
cv::Mat *UI_VirtualBase::Get_mat(){
    std::cerr << "Please rewrite this function(UI_VirtualBase Getmat() )!!!" << std::endl;
    exit(-1);
}

void UI_VirtualBase::Get_ready() {
    std::cerr << "Please rewrite this function(UI_VirtualBase::Get_ready() )!!!" << std::endl;
    exit(-1);
}

void UI_VirtualBase::capture() {
    std::cerr << "Please rewrite this function(UI_VirtualBase::capture() )!!!" << std::endl;
    exit(-1);
}

UI_VirtualBase::UI_VirtualBase() {
    this->list = new Mat_list();
}
