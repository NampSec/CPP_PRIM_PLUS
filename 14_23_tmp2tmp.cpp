// tmp2tmp.cpp -- template friends to a template class
#include <iostream>
using  std::cout;
using  std::endl;

// template prototypes
template <typename T> void counts();
template <typename T> void report(T &); // 友元函数声明在类之前

// template class
template <typename TT>
class HasFriendT
{
private:
    TT item;
    static int ct;
public:
    HasFriendT(const TT & i) : item(i) { ct++; };
    ~HasFriendT() {ct--;};
    friend void counts<TT>(); // 具体化模板函数，此时它是所有 HasFriend 类的友元
    friend void report<HasFriendT<TT>>(HasFriendT<TT> &); // 具体化友元函数，以及具体化友元类为TT
};

template <typename T>
int HasFriendT<T>::ct = 0;

template <typename T>
void counts()
{
    cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
    cout << "template counts(): " << HasFriendT<T>::ct << endl;
}

template <typename T>
void report(T & hf)
{
    cout << hf.item << endl;
}

int main()
{
    counts<int>(); // 输出int类型的tempalte size和template counts()
    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double> hfdb(10.5);
    report(hfi1); // 产生友元函数 report(HasFriendT<int> &)
    report(hfi2); // 产生友元函数 report(HasFriendT<int> &)
    report(hfdb); // 产生友元函数 report(HasFriendT<double> &)
    cout << "counts<int>() output:\n";
    counts<int>(); // 输出int类型的tempalte size和template counts()
    cout << "counts<double>() output:\n";
    counts<double>(); // 输出double类型的tempalte size和template counts()
    return 0;

}

