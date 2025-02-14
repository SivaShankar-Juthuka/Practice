class ProductOfNumbers {
public:
    vector<int> pro;
    ProductOfNumbers() {
    }
    
    void add(int num) {
        pro.emplace_back(num);
    }
    
    int getProduct(int k) {
        int res = 1, n = pro.size() - 1;
        for(int i = 0; i < k; i++) {
            res *= pro[n];
            n -= 1;
        }
        return res;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */