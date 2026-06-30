class Solution {
public:
    int numberOfSubstrings(string s) {

        // BRUTE FORCE
        /* int n = s.length();
        int count = 0;
        int i=0;

        char first = s[i];

        int j = i+1;
        int k = i+1;

        while((j<n) && (first == s[j])) j++;

        char second = s[j];

        char third = ' ';

        while(i<n){
            first = s[i];

            while((j<n) && (first == s[j])) j++;

            second = s[j];

            while((k<n) && (first == s[k] || second == s[k])) k++;

            third = s[k];

            if(j==n || k==n) break;

            cout<<i<<" "<<j<<" "<<k<<" "<<endl;

            int contribution = 1;


            if(j-i > 1){
                contribution *= j-i;
            }

            if(k-i <n){
                contribution *= n-k;
            }

            count+=contribution;

            i=j;
        }

        return count; */

        // OPTIMAL SOLUTION

        int n = s.length();
        int left = 0;
        int count = 0;
        int a=0,b=0,c=0;

        for(int right=0;right<n;right++){
            char character = s[right];

            if(s[right] == 'a')a++;
            else if(s[right] == 'b')b++;
            else c++;

            while(a>0 && b>0 && c>0){
                count += (n-right);

                if(s[left] == 'a')a--;
                else if(s[left] == 'b')b--;
                else c--;

                left++;
            }

        }

        return count;
        
    }
};