#pragma once
#ifndef _LEETCODE_657_H
#define _LEETCODE_657_H

#include <string>

using namespace std;

class Solution657 {
public:
    bool judgeCircle(string &moves) {
        int x = 0;
        int y = 0;
        for (int i = 0; i < moves.size(); i++) {
            switch (moves[i]) {
                case ('L'): {
                    x += 1;
                    break;
                }
                case ('R'): {
                    x -= 1;
                    break;
                }
                case ('U'): {
                    y += 1;
                    break;
                }
                case ('D'): {
                    y -= 1;
                    break;
                }
            }
        }
        return !((bool) (x) && (bool) (y));
    }
};

#endif
