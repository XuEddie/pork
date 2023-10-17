//
// Created by Sora on 2023/10/17.
//

#ifndef PORK_VISION_MAT_LIST_H
#define PORK_VISION_MAT_LIST_H

#include <opencv2/opencv.hpp>

typedef struct Mat_struct{
    cv::Mat *mat;
    Mat_struct* next;
    Mat_struct(cv::Mat* mat_in,Mat_struct* next_in){
        this->mat = mat_in;
        this->next = next_in;
    }
}MAT_LIST;

class Mat_list {
private:
    MAT_LIST *head = nullptr;
    MAT_LIST *last = nullptr;
public:
    Mat_list();
    void insert(MAT_LIST* IN);//插入操作

    void remove(int pos);
    void remove(MAT_LIST* IN);//删除操作

    MAT_LIST * Get_Mat(int pos);
    int Get_Pos(MAT_LIST* IN);//获取相关的值

    MAT_LIST* begin();
    MAT_LIST* end();//迭代器
};


#endif //PORK_VISION_MAT_LIST_H
