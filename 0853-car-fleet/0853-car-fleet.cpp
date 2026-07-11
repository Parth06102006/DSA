class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<pair<int, double>> cars;

        for (int i = 0; i < n; i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }

        sort(cars.begin(), cars.end());

        int cnt = 0;

        while(cars.size() > 0){
            double topElem = cars.back().second;

            cars.pop_back();

            while(cars.size() > 0 && cars.back().second <= topElem) {cars.pop_back();}
            cnt++;
        }

        return cnt;
    }
};