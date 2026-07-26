class Solution {
public:
    int isPower(int X, int Y) {

        if (Y == 1)
            return true;
            
            
         if (X == 0)
            return Y == 0;

        if (X == 1)
            return Y == 1;

        long long val = 1;

        while (val < Y) {
            val *= X;
        }

        return val == Y;
    }
};