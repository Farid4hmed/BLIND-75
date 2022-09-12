//Encode - add (string size + '#') before every string in the array and make it one string
//Decode - whenever we get a number n with a succeeding '#' we seperate the next n chars after the '#'

class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string result = "";
        
        for (int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            result += to_string(str.size()) + "#" + str;
        }
        
        return result;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> result;
        
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, length);
            result.push_back(str);
            i = j + 1 + length;
        }
        
        return result;
    }
private:
};

//TC - O(n)
//SC - O(1)
