class Solution {
public:
    string addBinary(string a, string b) {
        string  c = "";
        char carry = '0';
        int i = a.size()-1;
        int j = b.size()-1;
        while(j>=0 && i>=0){
            if ((a[i] == '1' && b[j] == '0') || (a[i] == '0' && b[j] == '1')){
                if(carry == '1'){
                    c.push_back('0');
                    carry = '1';
                }else{
                    c.push_back('1');
                    carry = '0';
                }
            }
            else{
                if(a[i] == '1' && b[j] == '1' && carry == '1'){
                    c.push_back('1');
                    carry = '1';
                }else if(a[i] == '1' && b[j] == '1' && carry == '0'){
                    c.push_back('0');
                    carry = '1';
                }else if(a[i] == '0' && b[j] == '0'){
                    c.push_back(carry);
                    carry = '0';
                }
            }
            i--;j--;
        }

        if(i >= 0){
            while(i>=0){
                if(carry == '1'){
                    if(a[i] == '1'){
                        c.push_back('0');
                        carry = '1';
                    }else{
                        c.push_back('1');
                        carry = '0';
                    }
                }else{
                    c.push_back(a[i]);
                }
                i--;
            }
        }

        if(j >= 0){
            while(j>=0){
                if(carry == '1'){
                    if(b[j] == '1'){
                        c.push_back('0');
                        carry = '1';
                    }else{
                        c.push_back('1');
                        carry = '0';
                    }
                }else{
                    c.push_back(b[j]);
                }
                j--;
            }
        }    
        
        if(carry == '1') c.push_back(carry);
        reverse(c.begin(),c.end());

        return c;
        
    }

    /* string convertBinaryToString(__int128 n){
        if(n==0) return "0";
        string s = "";
        while(n != 0){
            if(n%2 == 0) s.push_back('0');
            else s.push_back('1');
            n/=2;
        }
        reverse(s.begin(),s.end());
        return s;
    }

    __int128 convertStringToBinary(string s){
        __int128 result = 0;
        __int128 pow2 = 1;
        for(long long i=s.length()-1;i>=0;i--){
            if(s[i] == '1') result += pow2;
            pow2*=2;
        }
        return result;
    } */
};