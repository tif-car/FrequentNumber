//finding the most frequent number in an array using hashing

#include <iostream>
#include <unordered_map>
#include <string>


using namespace std;

class HashTable {

  public:
    int findMostFrequent(int arr[], int n) {
      unordered_map<int, int> hash;

      for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
      }//end of for loop

      int mostFrequent = 0;
      int maxCount = 0;

      for(auto it = hash.begin(); it != hash.end(); it++) {
        if(it->second > maxCount){
          maxCount = it->second;
          mostFrequent = it->first;
        }
      }
          
    
    return mostFrequent;
}
};


int main(){
  int arr[] = {1, 2, 3, 2, 2, 3, 1, 3, 3, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  HashTable hashtable;
  int mostFrequent = hashtable.findMostFrequent(arr, n);

  cout << "Most frequent number: " << mostFrequent << endl;

  return 0;
  
}






