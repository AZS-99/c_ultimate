////
//// Created by Adam Saher on 2022-09-07.
////
//
//#ifndef C_S3_H
//#define C_S3_H
//using namespace std;
//int houses[3009];
//int houses_count, hydrants;
//
//bool check(int hose_len) {
//    unsigned hose_begin, cnt;
//    for (auto i = 0u; i < houses_count; i++){
//        hose_begin = houses[i];
//        cnt = 1u;
//        for (auto j = i+1; j < houses_count + i; j++) {
//            if(houses[j] - hose_begin > hose_len) {
//                cnt++;
//                hose_begin = houses[j];
//            }
//        }
//        if (cnt <= hydrants) return true;
//    }
//    return false;
//}
//
//int main() {
//    cin >> houses_count;
//    for(int i = 0; i < houses_count; i++) cin >> houses[i];
//
//    sort(houses, houses + houses_count);
//    for(auto i = 0u; i < houses_count; i++) houses[houses_count + i] = houses[i] + 1000000;
//    cin >> hydrants;
//    int low = 0,high = 1000000;
//    int ans=0;
//    while(low<=high)
//    {
//        int mid=(low+high)>>1;
//        if(check(mid)){
//            ans = mid;
//            high = mid-1;
//        }
//        else low = mid+1;
//    }
//    cout<<(ans+1)/2<<endl;
//}
//
//
//
//
//#include <array>
//#include <vector>
//
//class CircularNode {
//    bool exists_;
//    unsigned value_;
//    CircularNode* nxt_;
//public:
//    explicit CircularNode(const unsigned&, const bool& = false);
//    unsigned operator-(const CircularNode&) const;
//};
//
//class Circular {
//    std::array<unsigned, 1000000> circle_;
//    std::vector<unsigned> houses;
//public:
//    Circular(const unsigned&);
//    unsigned& operator[](const unsigned&);
//};
//
//
//#endif //C_S3_H
