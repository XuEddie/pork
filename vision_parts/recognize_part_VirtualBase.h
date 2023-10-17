//
// Created by Sora on 2023/10/17.
//

#ifndef PORK_VISION_RECOGNIZE_PART_VIRTUALBASE_H
#define PORK_VISION_RECOGNIZE_PART_VIRTUALBASE_H
#include <iostream>
enum SIZE{
    HEARTS,
    DIAMONDS,
    CLUBS,
    SPADES,
    NULL_SIZE//作为头指针使用
};
enum POSITION{
    PLAYER1,//地主
    PLAYER2,//地主下家
    PLAYER3 //地主上家
};
class recognize_part_VirtualBase;
class PORK{
private:
    POSITION my_pos;
    //#################################以下作为链表使用
    int value;
    SIZE size;
    PORK* next;
    //################################以下作为数组使用
    int* value_array;
    SIZE* size_array;

public:
    PORK(POSITION pos_in,int* value_in,SIZE* size_in);
    PORK();
    friend class recognize_part_VirtualBase;
};

class recognize_part_VirtualBase {
protected:


    PORK* pork_1 = nullptr;//我的牌组
    PORK* pork_2 = nullptr;//我的下家
    PORK* pork_3 = nullptr;//我的上家
public:
    bool ready;//此处的ready表示是否允许更改
    recognize_part_VirtualBase();
    virtual PORK* Get_PORK1();
    virtual PORK* Get_PORK2();
    virtual PORK* Get_PORK3();
    virtual void Get_ready();
    void change_ready_setting(){ready = !ready;}
};



#endif //PORK_VISION_RECOGNIZE_PART_VIRTUALBASE_H
