long long MaxSum(long long int A[], long long int B[], long long int N) {
    // complete the function here
    vector<long long> AA(A,A+N);
    vector<long long> BB(B, B+N);
    sort(AA.rbegin(), AA.rend());
    sort(BB.rbegin(), BB.rend());
    
    long long ans = 0;
    for(int i=0;i<N;i++){
        ans += AA[i]*BB[i];
    }
    
    return ans;
}
