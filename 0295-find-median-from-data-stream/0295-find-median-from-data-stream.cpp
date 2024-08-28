class MedianFinder {

    priority_queue<int>minele;
    priority_queue<int,vector<int>,greater<int>>maxele;


public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {

        if(minele.empty() || minele.top()>num)minele.push(num);
        else maxele.push(num);


        if(maxele.size()>minele.size()){
            minele.push(maxele.top());
            maxele.pop();
        }

        if(minele.size()>maxele.size()+1){
            maxele.push(minele.top());
            minele.pop();
        }
        
    }
    
    double findMedian() {
        if(minele.size()==maxele.size()){
            return (maxele.top()+minele.top())/2.0 ;
        }else return minele.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */