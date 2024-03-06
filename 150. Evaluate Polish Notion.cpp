class Solution {
public:
    int evalRPN(vector<string>& tokens)
     {
         stack<int> stack;
         for(auto a : tokens)
         {
             if(a == "+")
             {
                int g = stack.top();
                stack.pop();
                int f = stack.top();
                stack.pop();
                int h = g + f;
                stack.push(h);


             }
             else if(a == "/")
             {
                int g = stack.top();
                stack.pop();
                int f = stack.top();
                stack.pop();
                int h = f / g;
                stack.push(h);

             }
            else if(a == "*")
             {
                int g = stack.top();
                stack.pop();
                int f = stack.top();
                stack.pop();
                int h = g * f;
                stack.push(h);

             }
            else if(a == "-")
             {
                int g = stack.top();
                stack.pop();
                int f = stack.top();
                stack.pop();
                int h = f - g;
                stack.push(h);

             }
             else
             {
                stack.push(stoi(a));
             }
         }
        return stack.top();
        
    }
};