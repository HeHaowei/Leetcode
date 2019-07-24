class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        

        vector<int> result;

        int size = words.size();

        if (size == 0) return result;

        int word_len = words[0].length();

        int total_len = word_len * size;
        
        if (s.length() < total_len) return result;

        unordered_map <string, int> store_words;

        for (int i=0; i < size; i++) {
        	if (store_words.find(words[i]) == store_words.end()) {
        		store_words[words[i]] = 1;
        	}
        	else {
        		store_words[words[i]]++;
        	}
        }

        int pos = 0;

        while (pos <= s.length() - total_len) 
        {
        	int current_len = 0;
        	int current_pos = pos;
        	unordered_map<string,int> current_words;
        	while (current_len < total_len) {
        		string current_word;
        		current_word = s.substr(current_pos, word_len);
        		if (store_words.find(current_word) == store_words.end())
        			{
        				break;
        			}

        			else
        			{
        				if (current_words.find(current_word) == current_words.end())
        				{
        					current_words[current_word] = 1;
        				}

        				else {
        					current_words[current_word]++; 
        				}

        				if (current_words[current_word] > store_words[current_word]) 
        					{
        						break;
        					}

        					else {
        						current_pos += word_len;
        						current_len += word_len;

        						if (current_len == total_len) {
        							result.push_back(pos);
        						}
        					}
        			}
        	}
        	pos++;
        }
        return result;
    }
};
