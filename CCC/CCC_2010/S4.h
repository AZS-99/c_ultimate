//
// Created by Adam Saher on 2022-09-09.
//

#ifndef C_S4_H
#define C_S4_H

#include <array>
#include <vector>

class PenNode;

struct Edge {
    PenNode* left;
    PenNode* right;
    unsigned weight;

};

class PenNode {
    std::vector<Edge*> edges;
};


class AnimalGraph {
    std::array<PenNode*, 100> graph;

};

//#include <bits/stdc++.h>
//using namespace std;
//int par[1009];
//int findp(int x)
//{
//    if(x==par[x]) return x;
//    return par[x]=findp(par[x]);
//}
//
//int ind[1009][1009];
//struct edge {
//    int cost, pen1, pen2;
//    bool operator < (const edge& other)const {return cost < other.cost;};
//
//};
//
//vector<edge> v;
//int w[1009][1009];
//int n;
//int mst()
//{
//    for(int i=0;i<=n;i++) par[i]=i;
//    sort(v.begin(),v.end());
//    int ans=0;
//    for(auto x: v)
//    {
//        int pa=findp(x.pen1);
//        int pb=findp(x.pen2);
//        if(pa==pb) continue;
//        par[pa]=pb;
//        ans+=x.cost;
//    }
//    return ans;
//}
//int main()
//{
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//        int k; cin>>k;
//        vector<int>temp(k);
//        for(auto &x: temp) cin>>x;
//        for(int j=0;j<k;j++)
//        {
//            int a=temp[j];
//            int b=temp[(j+1)%k];
//            if(a>b) swap(a,b);
//            cin>>w[a][b];
//            if(ind[a][b])
//            {
//                v.push_back({w[a][b],i,ind[a][b]});
//                ind[a][b]=0;
//            }
//            else ind[a][b]=i;
//        }
//    }
//    int ans=mst();
//    for(int i=1;i<1009;i++)
//    {
//        for(int j=i+1;j<1009;j++)
//        {
//            if(ind[i][j]) v.push_back({w[i][j],0,ind[i][j]});
//        }
//    }
//    ans=min(ans,mst());
//    cout<<ans<<endl;
//}

#endif //C_S4_H
