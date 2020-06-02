//Utkarsh-raj

#include<bits/stdc++.h>

using namespace std;

int main()
{
    // Taking number as string so that this program can work with larger numbers too
    // Also it helps to work for negative integers as they are not palindrome
    string number;
    cin>>number;


    // Flag variable to check if number is palindrome or not
    // if flag is 1 then it is a palindrome otherwise it is not a palindrome
    int flag = 1; 


    int i = 0, j = number.size() - 1;

    while(i < j){
    	if(number[i] == number[j]){
    		i++;
    		j--;
    	}
    	else{ 
    		// number at both index are not same so it is not a palindrome
    		flag = 0;
    		break;
    	}
    }


    if(flag){
    	cout<<"true"<<endl;
    }
    else{
    	cout<<"false"<<endl;
    }

	return 0;
}
