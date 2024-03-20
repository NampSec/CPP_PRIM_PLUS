#include <iostream>


struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void showbox(const box &b);
void changeboxvolume(box &b);
int main()
{
    box test[2]{{"fucker", 1, 1, 1, 1},{"shabi", 2, 2, 2, 2}};
    showbox(test[0]);
    showbox(test[1]);
    changeboxvolume(test[0]);
    changeboxvolume(test[1]);
    showbox(test[0]);
    showbox(test[1]);
    return 0;
}
void showbox(const box &b)
{
    std::cout << "maker: " << b.maker << std::endl;
    std::cout << "height: " << b.height << std::endl;
    std::cout << "width: " << b.width << std::endl;
    std::cout << "length: " << b.length << std::endl;
    std::cout << "volume: " << b.volume << std::endl;
    std::cout << std::endl;
}
void changeboxvolume(box &b)
{
    b.volume = b.height * b.width * b.length;
}
