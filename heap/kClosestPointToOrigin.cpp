vector<vector<int>> kClosest(vector<vector<int>> points, int k) {
    vector<vector<int>> res;
    priority_queue<pair<int, pair<int,int>>> maxHeap; // {dist, {x,y}}

    for(int i=0; i<points.size(); i++){
        int dist = points[i][0]*points[i][0] + points[i][1]*points[i][1];
        maxHeap.push({dist, {points[i][0], points[i][1]}});
        if(maxHeap.size() > k){
            maxHeap.pop();
        }
    }

    while(!maxHeap.empty()){
        res.push_back({maxHeap.top().second.first, maxHeap.top().second.second});
        maxHeap.pop();
    }

    return res;
}
