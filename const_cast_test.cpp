#include <iostream>

void modify(int* ptr) {
    *ptr = 20; // 修改指针指向的值
}

int main() {
    const int original = 10; // 常量变量
    std::cout << "Original value: " << original << std::endl;

    // 使用const_cast去掉const
    const int* nonConstPtr = &original;
    auto * ptr = &nonConstPtr;


    // 修改值
    // modify(nonConstPtr);

    // 再次加上const
    const int* constPtr = const_cast<const int*>(nonConstPtr);

    std::cout << "Modified value: " << *constPtr << std::endl;

    return 0;
}
