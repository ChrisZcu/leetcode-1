/**
 * @Github: https://github.com/Certseeds/leetcode
 * @Organization: SUSTech
 * @Author: nanoseeds
 * @Date: 2020-07-21 21:00:02
 * @LastEditors  : nanoseeds
 */
/*  leetcode
    Copyright (C) 2020  nanoseeds

    leetcode is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    leetcode is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
    */
#ifndef LEETCODE_SOURCE_LEETCODE_13_H
#define LEETCODE_SOURCE_LEETCODE_13_H

#include <array>
#include <string>
#include <algorithm>

using std::array;
using std::vector;
using std::string;

/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 
two is written as II in Roman numeral, 
just two one's added together. 
Twelve is written as, 
XII, which is simply X + II. 
The number twenty seven is written as XXVII,
which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. 
However, the numeral for four is not IIII. Instead, 
the number four is written as IV. 
Because the one is before the five we subtract it making four. 
The same principle applies to the number nine, 
which is written as IX. 
There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer. 
Input is guaranteed to be within the range from 1 to 3999.
*/
class Solution13 {
public:
    int romanToInt(const string &s) {
        const vector<array<string, 9>> vas = {
                {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
                {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
                {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}
        };
        int will_return = 0;
        int begin = 0;
        int added = 1000;
        while (s[begin] == 'M') {
            will_return += added;
            begin++;
        }
        for (const auto &i  :vas) {
            added /= 10;
            for (auto j = i.crbegin(); j != i.crend(); j++) {
                if (!s.compare(begin, j->size(), *j, 0, j->size())) {
                    will_return += std::distance(j, i.crend() - 1 + 1) * added;
                    begin += j->size();
                    break;
                }
            }
        }
        return will_return;
    }
};
/*
Runtime: 16 ms,
Memory Usage: 8.6 MB,
60.66%,44.12%.
*/

#endif //LEETCODE_CPP_SOURCE_LEETCODE_13_H