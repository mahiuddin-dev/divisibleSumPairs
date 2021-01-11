#include <iostream>

using namespace std;

int main(){

    short int n,k,j,i;

    cin>> n >> k ;

    short int are[n];

    for( i = 0; i < n; i++){
        cin>>are[i];
    }
    short int sum,count = 0;

    for( i = 0; i < n-1; i++){
        for( j = i+1; j < n; j++){
            sum = are[i]+are[j];
            if(sum%k == 0){
                count++;
            }
        }
    }

    cout<< count <<endl;
    return 0;
}
