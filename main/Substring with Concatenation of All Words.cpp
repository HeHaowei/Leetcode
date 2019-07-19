class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
        int num_words = words.size();

        vector<string> allString = findAllString(words);
        
        vector<int> result;

        int begin = -1;

        for (int i = 0; i < allString.size(); i++)
        {
        	string::size_type position = 0;
        	while ((position = s.find(allString[i], position))!= string::npos)
        	{
        		result.push_back(position);
        		position++;
        	}
        }

        sort(result.begin(),result.end());
        
        return result;


    }

    vector<string> findAllString(vector<string> words) {

    	vector<string> result;

    	if (words.size() == 1) {
    		result.push_back(words[0]);
    		return result;
    	}

    	else
    	{


            int time = words.size();

    	for (int i=0; i < time; i++ )
    	{
    		string current = words[0];
    		words.erase(words.begin());

    		vector<string>previous = findAllString(words);
            words.push_back(current);

    		for (int j=0; j<previous.size();j++) {
    			result.push_back(current + previous[j]);
    		}


    	}

    	return result;

    }



    }



};
