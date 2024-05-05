// tempmemb.cpp -- template members
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class beta
{
private:
    template <typename V>
    class hold
    {
    private:
        V val;
    public:
        hold(V v) : val(v) { }
        void show() const { cout << val << endl; }
    };
    hold<T> q; // hold object
    hold<int> n; // hold object
public:
    beta(T t, int i) : q(t), n(i) {}
    template <typename U>
    U blab(U u, T t)
    {
        return u * t;
    }
    void show() const { q.show(); n.show(); }
};

int main()
{
    beta<double> guy(3.5, 3);
    cout << "T was set to double\n";
    guy.show();
    cout << "V was set to T, which is double, then V was set to int\n";
    cout << guy.blab(10, 2.3) << endl;
    cout << "U was set to int\n";
    cout << guy.blab(2.3, 10) << endl;
    cout << "U was set to double\n";
    cout << "Done\n";
    return 0;
}
