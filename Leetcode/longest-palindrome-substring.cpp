class Solution {
public:
    string longestPalindrome(string s) {
        int length = 0;
        int n = s.size();
        int pos1 = 0; // start of palindrome

        for(int i = 0; i < n; i++) {  
            for(int j = i; j < n; j++) {     
                string str = s.substr(i, j-i+1);
                string rev = str;
                reverse(rev.begin(), rev.end());

                if (str == rev){
                    if(length < (j-i+1)){
                        length = (j-i+1);
                        pos1 = i; 
                    }      
                } 
            }
        }

        return s.substr(pos1, length);
    }
};