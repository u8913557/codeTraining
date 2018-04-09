#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
	
	// Add your code here
    Difference(vector<int> elms){
        maximumDifference = 0;
        elements = elms;
    }
    int computeDifference(){
        int diff = 0;
        int n = elements.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                diff = abs(elements[i] - elements[j]);
                if(maximumDifference < diff)
                    maximumDifference = diff; 
            }
        }
        return maximumDifference;
    }
	
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}