//经过我的慎重考虑决定还是使用多线程来完成这次的代码，请大家自学这方面的内容，如果遇到兼容性的问题日后讨论
#include <iostream>
#include <opencv2/opencv.hpp>
#include <thread>
#include <vector>
using namespace cv;

const int num_of_Thread = 3;//初始化的线程池数量
void Thread_function1();//这部分将成为率先运行的内容，然后我会提供一个锁在这个锁没有打开之前，thread2不会运行，请将最终的Mat存在一个链表中
void Thread_function2();//这部分为我们的视觉处理部分，我会提供一个锁，用来保证AI部分的正常运行
void Thread_function3();//这部分为AI部分的函数，我会提供一个锁，用来控制UI部分的显示
int main() {
    std::vector<std::thread*> My_Thread;
    My_Thread.push_back(new std::thread(Thread_function1));
    My_Thread.push_back(new std::thread(Thread_function2));
    My_Thread.push_back(new std::thread(Thread_function3));
    for(auto & i : My_Thread) i->join();
    return 0;
}
void Thread_function1(){
    std::cout << "This is the thread_1!\n";
}
void Thread_function2(){
    std::cout << "This is the thread_2!\n";
}
void Thread_function3(){
    std::cout << "This is the thread_3!\n";
}