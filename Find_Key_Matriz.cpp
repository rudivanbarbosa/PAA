#include <iostream>
#include <vector>

using namespace std;

bool SearchM(vector<vector<int>>v, int k, int beginl, int end_l, int beginc, int endc) {
    int cutl = (end_l + beginl) / 2;
    int cutc = (endc + beginc) / 2;

    if (end_l-beginl == 0) {
        if (endc - beginc == 0) {
            if (v[beginl][beginc] == k) {
                return true;
            }else{
                return false;
            }
        }
        else {

            bool r1 = SearchM(v, k, beginl, end_l, beginc, cutc);
            bool r2 = SearchM(v, k, beginl, end_l, cutc+1, endc);

            return r1 || r2;
        }

    }
    else if (endc-beginc == 0) {

        bool s1 = SearchM(v, k, beginl, cutl, beginc, endc);
        bool s2 = SearchM(v, k, cutl+1, end_l, beginc, endc);

        return s1 || s2;

    }else {

        bool q1 = SearchM(v, k, beginl, cutl, beginc, cutc);
        bool q2 = SearchM(v, k, beginl, cutl, cutc + 1, endc);
        bool q3 = SearchM(v, k, cutl + 1, end_l, beginc, cutc);
        bool q4 = SearchM(v, k, cutl + 1, end_l, cutc + 1, endc);

        return q1 || q2 || q3 || q4;

    }
}

bool SearchMatrix(vector<vector<int>> v, int k) {
    return SearchM(v, k, 0, v.size() - 1, 0, v[0].size()-1);
}

int main()
{
    vector<vector<int>> v = { {1,2,3,10},
                              {4,5,6,11},
                              {7,8,9,12} };
    cout << SearchMatrix(v, 16) << "\n";
    return 0;
}
