class Solution {
public:
    int romanToInt(string s) {

    int n= s.size();
    int count=0;

        for(int i=0;i<n;i++){
            if(s[i] =='I' && s[i+1]=='V'){
                count += 4;
                i++;
                continue;
            }
            else if(s[i] =='I' && s[i+1]=='X'){
                count += 9;
                i++;
                continue;
            }
            else if(s[i] =='X' && s[i+1]=='L'){
                count += 40;
                i++;
                continue;
            }
            else if(s[i] =='X' && s[i+1]=='C'){
                count += 90;
                i++;
                continue;
            }
            else if(s[i] =='C' && s[i+1]=='D'){
                count += 400;
                i++;
                continue;
            }
            else if(s[i] =='C' && s[i+1]=='M'){
                count += 900;
                i++;
                continue;
            }
            else if(s[i] == 'I'){
                count += 1;
                continue;
            }
            else if(s[i] == 'V'){
                count += 5;
                continue;
            }
            else if(s[i] == 'X'){
                count += 10;
                continue;
            }
            else if(s[i] == 'L'){
                count += 50;
                continue;
            }
            else if(s[i] == 'C'){
                count += 100;
                continue;
            }
            else if(s[i] == 'D'){
                count += 500;
                continue;
            }
            else if(s[i] == 'M'){
                count += 1000;
                continue;
            }
        }
                return count;
    }
};