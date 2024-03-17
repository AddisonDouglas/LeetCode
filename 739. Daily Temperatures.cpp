class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        stack<int> meow;
        stack<int> answer;

        for(int i = temperatures.size() - 1; i >= 0; i--)
        {
            while(!meow.empty())
            {
                if(temperatures[meow.top()] > temperatures[i])
                {
                    answer.push(meow.top() - i);
                    meow.push(i);
                    break;

                }
                else
                {
                    meow.pop();
                }

            }
            if(meow.empty())
            {
                answer.push(0);
                meow.push(i);
            }
        }
        vector<int> dog;
        while (!answer.empty()) 
        { 
            dog.push_back(answer.top());
            answer.pop(); 
        } 
        return dog;
        
    }
};      