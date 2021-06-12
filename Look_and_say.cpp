<<<<<<< HEAD
// C++ program to find n'th term in look and say
// sequence
#include <bits/stdc++.h>
using namespace std;

void countnndSay(int n)
{

    if(n>=2){
        cout<<"1"<<endl<<"11"<<endl;
    }
	else if (n == 1){
        cout<<"1"<<endl;
    }	 

	
	string str = "11"; 
	for (int i = 3; i<=n; i++)
	{
		
		str += '0';
        //cout<<"str = "<<str<<endl;
		int len = str.length();
   

		int cnt = 1;
		string tmp = "";
		for (int j = 1; j < len; j++)
		{
		
			if (str[j] != str[j-1])
			{
				
				tmp += cnt + '0';

				
				tmp += str[j-1];

		
				cnt = 1;
			}


			else cnt++;
		}

		str = tmp;
        cout<<str<<endl;
	}

}


int main()
{
	int N;
    cin>>N;
    countnndSay(N);
	return 0;
}
=======
// C++ program to find n'th term in look and say
// sequence
#include <bits/stdc++.h>
using namespace std;

void countnndSay(int n)
{

    if(n>=2){
        cout<<"1"<<endl<<"11"<<endl;
    }
	else if (n == 1){
        cout<<"1"<<endl;
    }	 

	
	string str = "11"; 
	for (int i = 3; i<=n; i++)
	{
		
		str += '0';
        //cout<<"str = "<<str<<endl;
		int len = str.length();
   

		int cnt = 1;
		string tmp = "";
		for (int j = 1; j < len; j++)
		{
		
			if (str[j] != str[j-1])
			{
				
				tmp += cnt + '0';

				
				tmp += str[j-1];

		
				cnt = 1;
			}


			else cnt++;
		}

		str = tmp;
        cout<<str<<endl;
	}

}


int main()
{
	int N;
    cin>>N;
    countnndSay(N);
	return 0;
}
>>>>>>> 288c648f78d3c8f466a76177e620630812b5d4c1
