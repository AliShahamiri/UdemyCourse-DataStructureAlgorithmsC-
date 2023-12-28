#include <unordered_map>
#include "FindDuplicates.h"
//using namespace std;

vector<int> findDuplicates(const vector<int>& nums) {
    // FINISH WRITING THE FINDDUPLICATES FUNCTION HERE // 
    vector<int> vec1;
    unordered_map<int, int> mymap;
    
    for (int i : nums)
    {  
        if (mymap[i])
        {
            vec1.push_back(i);
        }
        else
        {
            mymap.insert({i,1});
        }
        
    }
    //cout << vec1[1] << endl;
    return vec1;
    
}
