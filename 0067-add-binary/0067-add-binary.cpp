class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string s;
        int l1=a.size()-1,l2=b.size()-1;
        while(l1>=0 || l2>=0)
        {
            int sum = carry;
            if(l1>=0)
            {
                sum = sum+a[l1--] - '0';
            }
            if(l2>=0)
            {
                sum = sum+b[l2--] - '0';
            }
            s.push_back(sum%2+'0');
            carry=sum/2;
        }
        if(carry!=0){
            s.push_back(carry+'0');
        }
        reverse(s.begin(),s.end());
        return s;
        
    }
};