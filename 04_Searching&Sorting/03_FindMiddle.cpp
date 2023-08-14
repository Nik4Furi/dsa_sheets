// https://practice.geeksforgeeks.org/problems/middle-of-three2926/14

int middle(int A, int B, int C)
{
    // code here//Position this line where user code will be pasted.
    if ((B > C && B < A) || (B < C && B > A))
        return B;

    else if ((C < B && C > A) || (C > B && C < A))
        return C;

    return A;
}