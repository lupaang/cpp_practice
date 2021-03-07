#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    double mx = 0;
    int N;
    cin >> N;
    
    vector<double> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    
    vector<double> dp(N);
    dp[0] = v[0];
    for(int i = 1; i < N; i++){
        if(dp[i-1] < 1){
            dp[i] = v[i];
        }
        else {
            dp[i] = dp[i-1] * v[i];
        }
        
        mx = max(dp[i], mx);
    }
    
    printf("%.3lf\n", mx);
}