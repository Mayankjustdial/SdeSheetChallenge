bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;
    for(auto i:expression){
    if(i=='(' || i=='{' || i=='[')
        s.push(i);
    else{
        if(s.empty() || (s.top()=='(' and i!=')') || (s.top()=='{' and i!='}') || (s.top()=='[' and i!=']')) return false;
         s.pop();
    }
    }
    return s.empty();
}