/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
      int lo = 1;
      int hi = n;
      
      while(lo <= hi) {
        int m = lo + (hi - lo)/2;
        
        int g = guess(m);
        if(g ==0){
          return m;
        } else if (g == -1){
          hi = m - 1;
        } else {
          lo = m + 1;
        }
      }
      return lo;
    }
};