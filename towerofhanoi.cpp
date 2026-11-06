#include <iostream>

// Standard 3-Tower of Hanoi: O(2^n)
void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        
        TOH(n - 1, B, A, C);
    }
}

// 4-Tower of Hanoi (Reve's Puzzle / Frame-Stewart variant structure)
void TOH1(int n, int A, int B, int C, int D)
{
    if (n > 0)
    {
        TOH1(n - 1, A, B, D, C);
        
        TOH1(n - 1, C, A, B, D); 
    }
}

int main()
{
    
    std::cout << "--- 3 Towers (n=3) ---\n";
    TOH(62, 1, 2, 3);
    
    std::cout << "--- 4 Towers (n=5) ---\n";
    TOH1(5, 1, 2, 3, 4);
    
    return 0;
}
