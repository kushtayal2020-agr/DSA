#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
       int n = chars.size();
       int i;
       int indx = 0;
        for(i=0 ; i<n ; ){
            char ch = chars[i];
            int count = 0;
            while( i<n && chars[i] == ch){
           count++;
           i++;
        }
        if(count == 1){
            chars[indx++] = ch;
        }
        else{
            chars[indx++] = ch;
            string str = to_string(count);
            for(char digit : str){
                chars[indx++] = digit ;
            }
        }

        }

        return indx;
    }
};
