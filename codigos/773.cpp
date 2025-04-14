#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string start;
        int zeroPos = 0;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 3; ++j) {
                start += char('0' + board[i][j]);
                if (board[i][j] == 0) zeroPos = 3*i + j;
            }
        }

        const string target = "123450";
        vector<vector<int>> moves = {
            {1,3},    // pos 0
            {0,2,4},  // pos 1
            {1,5},    // pos 2
            {0,4},    // pos 3
            {1,3,5},  // pos 4
            {2,4}     // pos 5
        };

        queue<pair<string,int>> q;
        unordered_set<string> seen;
        q.push({start, 0});
        seen.insert(start);

        while (!q.empty()) {
            auto [cur, dist] = q.front(); q.pop();
            if (cur == target) return dist;
            int z = cur.find('0');
            for (int nxt : moves[z]) {
                string nxtState = cur;
                swap(nxtState[z], nxtState[nxt]);
                if (seen.insert(nxtState).second) {
                    q.push({nxtState, dist+1});
                }
            }
        }
        return -1;
    }
};

// Para testar localmente:
// int main() {
//     Solution sol;
//     vector<vector<int>> board = {{1,2,3},{4,0,5}};
//     cout << sol.slidingPuzzle(board) << endl;  // deve imprimir 1
//     return 0;
// }