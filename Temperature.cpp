#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    int a[n];
    int min1=100;
    int min2=-100;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        a[i]=t;
        if(a[i]>0 && a[i]<min1){
                min1=a[i];
            }
        
         if(a[i]<0 && a[i]>min2){
                min2=a[i];
            }
    }   
    
    
    if(min1==100 && min2==-100){
        cout << "0" << endl;
    }else if((min1+min2)<0){
    cout << min1 << endl;    
    }else if(min1==abs(min2)){
     cout << min1 << endl;            
    }else if((min1+min2)>0){
        cout << min2 << endl;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    
}
