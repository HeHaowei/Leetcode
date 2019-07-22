/*
This method is to do full permutation of all the combination strings;
Will result in TLE
*/

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
        int num_words = words.size();

        unordered_set<string> allString = findAllString(words);
        
        vector<int> result;

        int begin = -1;
        
//         unordered_set<string>::iterator it;
        
//         for (it = allString.begin(); it != allString.end(); it++) {
        
        for (auto &it:allString){
            string::size_type position = 0;
            while ((position = s.find((it), position))!= string::npos)
        	{
        		result.push_back(position);
        		position++;
        	}
        }

        sort(result.begin(),result.end());
        
        return result;


    }

    unordered_set<string> findAllString(vector<string> words) {

    	unordered_set<string> result;

    	if (words.size() == 1) {
    		result.insert(words[0]);
    		return result;
    	}

    	else
    	{
            int time = words.size();

    	for (int i=0; i < time; i++ )
    	{
    		string current = words[0];
    		words.erase(words.begin());

    		unordered_set<string>previous = findAllString(words);
            words.push_back(current);
            
             unordered_set<string>::iterator it;
        
             for (it = previous.begin(); it != previous.end(); it++) {
    			result.insert(current + (*it));
    		}
    	}
    	return result;
    }
    }
};
