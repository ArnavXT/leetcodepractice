// Last updated: 9/6/2026, 12:29:38 PM
class Solution {
public:
    string winningPlayer(int x, int y) {
        int turns = min(x, y / 4);
        return (turns % 2) ? "Alice" : "Bob";
    }
};