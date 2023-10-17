//
// Created by Sora on 2023/10/17.
//

#ifndef PORK_VISION_AI_PART_VIRTUALBASE_H
#define PORK_VISION_AI_PART_VIRTUALBASE_H


class AI_part_VirtualBase {
protected:
    static bool recognize_ready;
public:
    static void change_recognize_ready(){recognize_ready = !recognize_ready;}
};


#endif //PORK_VISION_AI_PART_VIRTUALBASE_H
