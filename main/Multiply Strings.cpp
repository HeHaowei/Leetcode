class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1.size() == 0 || num2.size()==0) return "0";
        if (num1 == "0" || num2=="0") return "0";
        // if (num1.size() != 1) {
        //     string digit ="";
        //     digit.push_back(num1[num1.size()-1]);
        //     num1.pop_back();
        //     return add(multiply(num1, num2), multiply(digit, num2));
        // }
        // else if (num2.size() != 1) {
        //     string digit ="";
        //     digit.push_back(num2[num2.size()-1]);
        //     num2.pop_back();
        //     return add(multiply(num2, num1), multiply(digit, num1));
        //     }
        // else {
        //     return to_string((num1[0] - '0') * (num2[0] - '0'));
        // }
        int len1 = num1.size();
        int len2 = num2.size();
        string remainder1 = "";
        int pow = 0;
        for (int i = len1 - 1; i>=0; i--) {
            int remainder2 = 0;
            string result2 = "";
            for (int j = len2 -1; j>=0; j--) {
                int current = (num1[i] - '0') * (num2[j] - '0') + remainder2;
                remainder2 = current / 10;
                current = current % 10;
                result2.insert(0, to_string(current));
            }
            if (remainder2 != 0) result2.insert(0, to_string(remainder2));
            if (remainder1 == "") remainder1 =result2;
            else {
                result2.append(pow, '0');
                //result2.push_back('0');
                remainder1 = add(result2, remainder1);
            }
            pow++;
        }
        return remainder1;
    }
    
    string add(string num1, string num2) {
        int size1 = num1.size();
        int size2 = num2.size();
        int i=size1-1;
        int j =size2-1;
        int remainder = 0;
        string result = "";
        while (i >=0 && j>=0) {
            int n1 = num1[i] - '0';
            int n2 = num2[j] - '0';
            int sum = n1 + n2 + remainder;
            remainder = sum / 10;
            sum = sum % 10;
            result.insert(0, to_string(sum));
            i--;
            j--;
        }
        while (i>=0) {
            int current = remainder + (num1[i] - '0');
            remainder = current / 10;
            current = current % 10;
            result.insert(0, to_string(current));
            i--;
        }
        while (j>=0) {
            int current = remainder + (num2[j] - '0');
            remainder = current / 10;
            current = current % 10;
            result.insert(0, to_string(current));
            j--;
        }
        if (remainder > 0) result.insert(0,to_string(remainder));
        return result;
    }
};
