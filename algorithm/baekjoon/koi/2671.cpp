#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string ans = "SUBMARINE";

    string tester;
    cin >> tester;

    int x = tester.length();
    int i = 0;

    while(i < x){
        if (tester.substr(i, i+3) == "100")
        {
            i = i + 3;
            if (i >= x)
            {
                ans = "NOISE";
                break;
            }
            
            while (tester.substr(i) != "0")
            {
                i++;
            }

            
            
        }
        else if (tester.substr(i, i+2) == "01")
        {

        }
        else
            ans = "NOISE";
            break;
    }
}

//(100~1~|01)~ -> SUBMARINE ELSE NOISE