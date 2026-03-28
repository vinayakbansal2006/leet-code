class Solution {
public:
    int romanToInt(string s) {
        int current_value=0;
        int next_value=0;
        int total=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='I') current_value=1;
            if(s[i]=='V') current_value=5;
            if(s[i]=='X') current_value=10;
            if(s[i]=='L') current_value=50;
            if(s[i]=='C') current_value=100;
            if(s[i]=='D') current_value=500;
            if(s[i]=='M') current_value=1000;


            if(i+1 < s.length()){
                if(s[i+1]=='I') next_value=1;
                if(s[i+1]=='V') next_value=5;
                if(s[i+1]=='X') next_value=10;
                if(s[i+1]=='L') next_value=50;
                if(s[i+1]=='C') next_value=100;
                if(s[i+1]=='D') next_value=500;
                if(s[i+1]=='M') next_value=1000;
            } else {
                next_value = 0;
            }
        
            
            
            if (current_value < next_value)
            total -= current_value;
            else
            total += current_value;
        }
        return total;
    }
};