class Solution {
public:
    //pass board by reference
    bool search(vector<vector<char>>& board, string word, int i, int j, int n) {
		//check if all the alphabets in the word is checked
        if(n == word.size()) return true; 
		//check if i and j are out of bound or if the characters aren't equal
        if(i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || board[i][j] != word[n]) return false;
		//mark as visited 
        char ch = board[i][j];
        board[i][j] = '*';
		//branch out in all 4 directions
        bool status = search(board, word, i + 1, j, n + 1) ||  //down
                      search(board, word, i, j + 1, n + 1) ||  //right
                      search(board, word, i - 1, j, n + 1) ||  //up
                      search(board, word, i, j - 1, n + 1);  //left
		//change the character back for other searches
        board[i][j] = ch;
        return status;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++) 
            for(int j = 0; j < board[i].size(); j++) 
				//check if the characters are equal then call DFS
                if(board[i][j] == word[0]){
                    if(search(board, word, i, j, 0)){
                        return true;
                    }
                }
        
        return false;
    }
};