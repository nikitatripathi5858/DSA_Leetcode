class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       int i = 0 , n = tokens.size();
       stack<int>st;
       while(i<n){
      if(tokens[i] != "+" && tokens[i] != "-" &&tokens[i] != "*" && tokens[i] != "/"){
              int val = stoi(tokens[i]);
                st.push(val);
        }
        else{
            int t1 = st.top();
            st.pop();
            int t2 = st.top();
            st.pop();
            int res = 0;

                if(tokens[i] == "+"){
                    res = t2 + t1;}

                else if(tokens[i] == "-"){
                    res = t2 - t1;}

                else if(tokens[i] == "*"){
                    res = t2 * t1;}

                else{
                    res = t2 / t1;}

                st.push(res);
           
        }
        i++;
       } 
     return st.top();
    }
};