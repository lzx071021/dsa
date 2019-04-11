//
// Created by 聂师聪 on 2019-04-03.
//

#include "../_shared/util.h"

#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
    if (nums.empty())
        return -1;
    int lo = 0, hi = nums.size();
    while (lo < hi) {
        int mi = lo + ((hi - lo) >> 1);
        if (nums[mi] <= nums[hi - 1]) {
            int lb = mi, hb = hi;
            while (lb < hb) {
                int mb = lb + ((hb - lb) >> 1);
                if (nums[mb] < target)
                    lb = mb + 1;
                else if (target < nums[mb])
                    hb = mb;
                else if (target == nums[mb])
                    return mb;
            }
            hi = mi;
        }
        else {
            int la = lo, ha = mi + 1;
            while (la < ha) {
                int ma = la + ((ha - la) >> 1);
                if (nums[ma] < target)
                    la = ma + 1;
                else if (target < nums[ma])
                    ha = ma;
                else if (target == nums[ma])
                    return ma;
            }
            lo = mi + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> vec{4,5,6,7,0,1,2};
    print_vec(vec);
    cout << search(vec, 0) << endl;
}

