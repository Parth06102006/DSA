#include <bits/stdc++.h>
using namespace std;

void printPattern(int row ,  int column)
{
    int num = 1;
    char alpha = 'a';
    int first = -1;
    for(int i=0;i<row;i++)
    {
        string pattern;
        int characters = 0;
        while(characters != column)
        {
            if (first == -1)
            {
                pattern += to_string(num % 10);
                if(num == 9)
                {
                    num = 1;
                }
                else
                {
                    num++;
                }
                first = 1;
                characters++;
                if(characters == column) break;
            }

            if(first == 1)
            {

                pattern += alpha;
                if(alpha == 'z')
                {
                    alpha = 'a';
                }
                else{
                    alpha = (char)((int)alpha + 1);
                }
                first = -1;
                characters++;
                if(characters == column) break;
            }

        }
        for(int k=0;k<pattern.size();k++)
        {
            cout<<pattern[k];
        }
        cout<<endl;
    }
}

int main()
{
    int row;
    int column;
    cin>>row>>column;
    printPattern(row,column);
}