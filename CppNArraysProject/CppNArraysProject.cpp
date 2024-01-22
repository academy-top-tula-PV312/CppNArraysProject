#include <iostream>
#include <iomanip>

const int cols{ 7 };

void MatrixInit(int matrix[][cols], int rows);
void MatrixPrint(int matrix[][cols], int rows);
void MatrixShiftLeft(int matrix[][cols], int rows, int steps);


int main()
{
    srand(time(nullptr));

    const int rows{ 5 };
    int matrix[rows][cols]{};

    MatrixInit(matrix, rows);
    MatrixPrint(matrix, rows);
    std::cout << "\n";

    MatrixShiftLeft(matrix, rows, 2);

    MatrixPrint(matrix, rows);
    std::cout << "\n";

    bool f{ true };
    std::cout << std::boolalpha << f << "\n";

    //int count{};

    /*for (int i{}; i < rows; i++)
        for (int j{}; j < cols; j++)
            matrix[i][j] = (i + 1) * 10 + (j + 1); *///++count;

    return 0;
}

void MatrixInit(int matrix[][cols], int rows)
{
    for (int i{}; i < rows; i++)
        for (int j{}; j < cols; j++)
            matrix[i][j] = rand() % 100;
}

void MatrixPrint(int matrix[][cols], int rows)
{
    for (int i{}; i < rows; i++)
    {
        for (int j{}; j < cols; j++)
            std::cout << std::setw(4) << matrix[i][j];
        std::cout << "\n";
    }
}

void MatrixShiftLeft(int matrix[][cols], int rows, int steps)
{
    steps %= cols;
    int temp;

    for (int i{}; i < rows; i++)
    {
        for (int s{}; s < steps; s++)
        {
            int temp{ matrix[i][0] };
            for (int j{}; j < cols - 1; j++)
                matrix[i][j] = matrix[i][j + 1];
            matrix[i][cols - 1] = temp;
        }
    }
    
}
