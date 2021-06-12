<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    int c1=0, c2=1, res=0, count=0;
    for(int i=0; i<s.size(); ++i){
        if( count==0 ){
            if( s[i]=='+' ){
                res = (s[c1]-'0')+(s[c2]-'0');
                count++;
                c2++;
            }
            else if( s[i]=='-' ){
                res = (s[c1]-'0')-(s[c2]-'0');
                count++;
                c2++;
            }
            else if( s[i]=='*' ){
                res = (s[c1]-'0')*(s[c2]-'0');
                count++;
                c2++;
            }
            else if( s[i]=='/' ){
                res = (s[c1]-'0')/(s[c2]-'0');
                count++;
                c2++;
            
            }
        }
        else{
            switch( s[i] ){
                case '+':
                    res = res+(s[c2]-'0');
                    c2++;
                    break;

                case '-':
                    res = res-(s[c2]-'0');
                    c2++;
                    break;

                case '*':
                    res = res*(s[c2]-'0');
                    c2++;
                    break;
                
                case '/':
                    res = res/(s[c2]-'0');
                    c2++;
                    break;
            }
        }


       

    }
    cout << res;
    

=======
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    int c1=0, c2=1, res=0, count=0;
    for(int i=0; i<s.size(); ++i){
        if( count==0 ){
            if( s[i]=='+' ){
                res = (s[c1]-'0')+(s[c2]-'0');
                count++;
                c2++;
            }
            else if( s[i]=='-' ){
                res = (s[c1]-'0')-(s[c2]-'0');
                count++;
                c2++;
            }
            else if( s[i]=='*' ){
                res = (s[c1]-'0')*(s[c2]-'0');
                count++;
                c2++;
            }
            else if( s[i]=='/' ){
                res = (s[c1]-'0')/(s[c2]-'0');
                count++;
                c2++;
            
            }
        }
        else{
            switch( s[i] ){
                case '+':
                    res = res+(s[c2]-'0');
                    c2++;
                    break;

                case '-':
                    res = res-(s[c2]-'0');
                    c2++;
                    break;

                case '*':
                    res = res*(s[c2]-'0');
                    c2++;
                    break;
                
                case '/':
                    res = res/(s[c2]-'0');
                    c2++;
                    break;
            }
        }


       

    }
    cout << res;
    

>>>>>>> 288c648f78d3c8f466a76177e620630812b5d4c1
}