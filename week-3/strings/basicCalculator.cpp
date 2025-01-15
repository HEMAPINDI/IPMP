class Solution {
public:
//using 2 stacks... 
    int precedence(char x){
        if(x=='+'||x=='-') return 1;
        if(x=='*'||x=='/') return 2;
        return -1;
    }
    int calculate(string s) {
        stack<int>operands;
        stack<int>operators;
        int num=0;
        s+='#';
        for(auto i:s){
          if(i==' ') continue;
          else if(isdigit(i)) num=num*10+(i-'0');
          else {
            operands.push(num);
            while(!operators.empty()&&precedence(i)<=precedence(operators.top())){
                 int operand1=operands.top();operands.pop();
                 int operand2=operands.top();operands.pop();
                 char op=operators.top();operators.pop();
                 switch(op){
                    case '+': operands.push(operand2+operand1);
                    break;
                    case '-':operands.push(operand2-operand1);
                    break;
                    case '*':operands.push(operand2*operand1);
                    break;
                    case '/':operands.push(operand2/operand1);
                 }
                
            }
             operators.push(i);
             num=0;
          }
        }
        return operands.top();
    }
};