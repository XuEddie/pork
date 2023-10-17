//
// Created by 21525 on 2023/10/17.
//

#ifndef PORK_VISION_UI_VIRTUALBASE_H
#define PORK_VISION_UI_VIRTUALBASE_H
#include <iostream>
#include <opencv2/opencv.hpp>
#include <Mat_list.h>




class UI_VirtualBase{
protected:
    Mat_list *list;
public:
    UI_VirtualBase();
    virtual void capture();
    virtual cv::Mat* Get_mat();
    virtual void Get_ready();
};


#endif //PORK_VISION_UI_VIRTUALBASE_H
