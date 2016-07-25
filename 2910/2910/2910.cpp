#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


typedef struct num_t
{
    int num;
    int freq;
} num_t;


bool num_t_lt(const num_t& a, const num_t& b)
{
    return a.freq > b.freq;
}


int main(int argc, char* argv[])
{
    vector< num_t > vec;

    int N, C, tmp;
    cin >> N >> C;

    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        
        vector< num_t >::iterator it = vec.begin();
        while (it != vec.end())
        {
            if (it->num == tmp)
            {
                it->freq += 1;
                break;
            }
            ++it;
        }
        if (it == vec.end())
        {
            num_t tmp_num = { tmp, 1 };
            vec.push_back(tmp_num);
        }
    }

    stable_sort(vec.begin(), vec.end(), num_t_lt);

    for (vector< num_t >::iterator it = vec.begin(); it != vec.end(); it++)
        for (int i = 0; i < it->freq; i++)
            cout << it->num << " ";
    cout << endl;

    return 0;
}
