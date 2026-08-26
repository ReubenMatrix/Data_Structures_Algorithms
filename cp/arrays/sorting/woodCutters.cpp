//   https://codeforces.com/problemset/problem/545/C



#include <iostream>
#include <vector>
using namespace std;

struct Tree {
    int x;
    int h;
};

int solution(vector<Tree> trees) {
    int n = trees.size();

    if (n <= 2)
        return n;

    int count = 2;

    int last = trees[0].x;

    for (int i = 1; i < n - 1; i++) {

        if (trees[i].x - trees[i].h > last) {
            count++;
            last = trees[i].x;
        }

        else if (trees[i].x + trees[i].h < trees[i + 1].x) {
            count++;
            last = trees[i].x + trees[i].h;
        }


        else {
            last = trees[i].x;
        }
    }

    return count;
}

int main() {
    vector<Tree> trees = {
        {1, 2},
        {3, 1},
        {5, 2},
        {7, 1},
        {9, 2}
    };

    cout << solution(trees) << endl;

    return 0;
}