class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int id=upper_bound(letters.begin(),letters.end(),target)-letters.begin();
        if(id==letters.size())
        return letters[0] ;
        else
            return letters[id];
    }
};