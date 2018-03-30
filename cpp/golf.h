#ifndef __GOLF__H__
#define __GOLF__H__

const int clen = 40;

struct golf {
    char name[clen];
    int  handicap;
};

void setgolf(golf &g, const char *name, int hc);
int  setgolf(golf &g);

void handicap(golf &g, int hc);
void showgolf(golf &g);

#endif