#include <iostream>
#include <string>
#include <cstdio>

class Juxing {
public:
    std::string maker;
    double l, w, h, v;
};

inline void display_mem(Juxing ju)
{
    printf("length: %f\n", ju.l);
    printf("wide: %f\n", ju.w);
    printf("high: %f\n", ju.h);
}

inline void set_v(Juxing *p_ju)
{
    if (nullptr == p_ju)
        return;

    p_ju->v = p_ju->l * p_ju->w * p_ju->h;
}

int main()
{
    Juxing ju;

    ju.maker = "Kevin";
    ju.l = 3;
    ju.w = 2;
    ju.h = 1;

    display_mem(ju);

    set_v(&ju);

    printf("maker: %s, volume: %f\n", ju.maker.c_str(), ju.v);

    return 0;
}