class Solution {
public:
    int countOrders(int n) {

        long long int count = 1, m = 1e9+7;

        for(int i=2; i<=n; i++){
            count = ((count)* (2*i-1)*(i))%m;
        }

        return (int)count; 
    }
};