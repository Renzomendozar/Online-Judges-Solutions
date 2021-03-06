/*******************************************
 ***Problema: Flip String to Monotone Increasing
 ***ID: 926
 ***Juez: LeetCode
 ***Tipo: Prefix Sums
 ***Autor: Jhosimar George Arias Figueroa
 *******************************************/

class Solution {
public:

    int minFlipsMonoIncr(string &S) {
        S += "1";
        int n = S.size();
        int zeros = 0, ones = 0;
        for( int i = 0 ; i < n ; ++i )
            zeros += (S[i] == '0');
        
        int min_flips = 1<<30;
        for( int i = 0 ; i < n ; ++i ){
            min_flips = min( min_flips, zeros + ones );
            if( S[i] == '0') zeros--;
            else ones++;
        }
        return min_flips;
    }
};
