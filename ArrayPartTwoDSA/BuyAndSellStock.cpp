
// (best buy) -> people always buy stock on less price

// #include<iostream>
// #include<climits>
// using namespace std;

// void maxProfit(int *prices, int n){
//     int bestBuy[100000];   // 10^5
//     bestBuy[0] = INT_MAX;

//     for(int i = 1; i < n; i++){
//         bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
//         cout<<bestBuy[i]<<", ";
//     }
//     cout<<endl;
// }
// int main(){
//     int prices[6] = {7, 1, 5, 3, 6, 4};
//     int n = sizeof(prices)/sizeof(int);
    
//     maxProfit(prices, n);
//     return 0;
// }


//bestbuy and profit

#include<iostream>
#include<climits>
using namespace std;

void bestMaxProfit(int *prices, int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int i = 1; i < n; i++){
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }
    int maxBuy = 0;
    for(int i = 0; i < n; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxBuy = max(maxBuy, currProfit);
         
    }
   cout<<"max Profit = "<<maxBuy<<endl;
    
} 
int main(){
    int prices[5] = {7, 1, 5, 2, 4};
    int n = sizeof(prices)/sizeof(int);

    bestMaxProfit(prices, n);
    return 0;
}