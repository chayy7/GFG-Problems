class Solution {
  public:
    void func(stack<int>& st, stack<int>& temp){
        if(st.empty()) return;

        temp.push(st.top());
        st.pop();

        func(st, temp);
    }

    void reverseStack(stack<int> &st) {

        stack<int> temp;
        func(st, temp);

        st=temp;
    }
};