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
         int maxNumber = n, minNumber = 1;
        while (true) {
            int mid = (maxNumber - minNumber) / 2 + minNumber;
            int res = guess(mid);
            if (res == 0) { 
                return mid;
            } else if (res == 1) {
                minNumber = mid + 1;
            } else {
                maxNumber = mid - 1;
            }
        }
    }
};