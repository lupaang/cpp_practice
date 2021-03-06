#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> kind;
    for(vector<string> cloth : clothes){
        kind[cloth[1]]++;
    }
    
    for(auto k : kind){
        answer *= k.second + 1;
    }
    
    return answer - 1;
}