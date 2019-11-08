#include <cstring.h>
#include <iostream>

using namespace std;
int ft_strncmp(char *s1, char *s2, unsigned int n);

void display(char *lhs, char *rhs, int result, int count)
{
    if(result > 0)
        cout << rhs << " precedes " << lhs << endl;
    else if (result < 0)
        cout << lhs << " precedes " << rhs << endl;
    else
        cout << "First " << count << " characters of " << lhs << " and " << rhs << " are same" << endl;
}
int main()
{
    char lhs[] = "Armstrong";
    char rhs[] = "Army";
    int result;
    result = ft_strncmp(lhs,rhs,3);
    display(lhs,rhs,result,3);
    result = ft_strncmp(lhs,rhs,4);
    display(lhs,rhs,result,4);
    return 0;
}
