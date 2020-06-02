//Utkarsh-raj

#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;


int main()
{
    // number of elements
    int n;
    cin>>n;


    // Take number array as input
    int numbers[n];
    for(int i=0; i<n; i++){
    	cin>>numbers[i];
    }


    //target
    int target;
    cin>>target;


    // hash map to store index of elements
    // unordered map takes constant time to search
    unordered_map<int, int> m;


    // store answer to index1 and index2 variable
    int index1 = -1, index2 = -1;


    for(int i=0; i<n; i++){
    	// if (target - number[i]) is occuring before then
    	// index if (target - number[i]) and i is the answer
    	if(m.count(target - numbers[i]) > 0){
    		index1 = m[target - numbers[i]];
    		index2 = i;
    		break;
    	}
    	// else store current index in the hashmap
    	m[numbers[i]] = i;
    }

    cout<<index1<<" "<<index2<<endl;

	return 0;
}
