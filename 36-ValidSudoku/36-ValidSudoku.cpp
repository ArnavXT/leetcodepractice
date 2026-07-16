// Last updated: 7/16/2026, 4:39:11 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int sqrtN = sqrt(n);

    for (int i = 0; i < n; i++) {
        vector<bool> seen(n + 1, false);
        for (int j = 0; j < n; j++) {
            char c = board[i][j];
            if (c != '.') {
                int val = c - '0';
                if (val < 1 || val > n || seen[val]) return false;
                seen[val] = true;
            }
        }
    }

    for (int j = 0; j < n; j++) {
        vector<bool> seen(n + 1, false);
        for (int i = 0; i < n; i++) {
            char c = board[i][j];
            if (c != '.') {
                int val = c - '0';
                if (val < 1 || val > n || seen[val]) return false;
                seen[val] = true;
            }
        }
    }

    for (int box = 0; box < n; box++) {
        vector<bool> seen(n + 1, false);
        int rowStart = (box / sqrtN) * sqrtN;
        int colStart = (box % sqrtN) * sqrtN;

        for (int r = 0; r < sqrtN; r++) {
            for (int c = 0; c < sqrtN; c++) {
                char current = board[rowStart + r][colStart + c];
                if (current != '.') {
                    int val = current - '0';
                    if (val < 1 || val > n || seen[val]) return false;
                    seen[val] = true;
                }
            }
        }
    }

    return true;
}

int main() {
    int n;
    if (cin >> n) {
        vector<vector<char>> board(n, vector<char>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> board[i][j];
            }
        }
        Solution sol;

        if (sol.isValidSudoku(board)) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
}
};