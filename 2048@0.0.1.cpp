#include <iostream>

using namespace std;

int sdvig (char op, int a[4][4], int i , int j , int k , int b[4][4] , char op1 )
{

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            b[i][j] = a[i][j];
        }
    }

    cin >> op;

    switch (op)
    {
        case 'w':
            for (k = 0; k < 4; k++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (i = 0; i < 4; i++)
                    {
                        if ((a[i][j] == 0) && (a[i + 1][j] != 0))
                        {
                            a[i][j] = a[i + 1][j];
                            a[i + 1][j] = 0;
                        }
                        else if (a[i][j] == a[i + 1][j])
                        {
                            a[i][j] = a[i][j] + a[i + 1][j];
                            a[i + 1][j] = 0;
                        }
                    }
                    a[i][j + 1] = 0;
                    a[3][0] = 0;
                }
            }
            for (i = 0 ; i < 4 ; i++)
            {
                for ( j = 0 ; j < 4 ; j++)
                {
                    if (a[i][j] == 0)
                    {
                        cout << "*" << " ";
                    }
                    else cout << a[i][j] << " ";
                }
                cout << endl;
            }
            break ;

        case 's':
            for (k = 0; k < 4; k++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (i = 0; i < 4; i++)
                    {
                        if ((a[3 - i][j] == 0) && (a[2 - i][j] != 0))
                        {
                            a[3 - i][j] = a[2 - i][j];
                            a[2 - i][j] = 0;
                        }
                        else if (a[3 - i][j] == a[2 - i][j])
                        {
                            a[3 - i][j] = a[3 - i][j] + a[2 - i][j];
                            a[2 - i][j] = 0;
                        }
                    }
                }
            }
            do
            {
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if (a[i][j] == 0)
                            cout << "*" << " ";
                        else
                            cout << a[i][j] << " ";
                    }
                    cout << endl;
                }
                cin >> op1;
            } while (op1 == 's');

            if (op1 != 's') op = op1;

            break;

        case 'a':

            for (k = 0; k < 4; k++)
            {
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if ((a[i][j] == 0) && (a[i][j + 1] != 0))
                        {
                            a[i][j] = a[i][j + 1];
                            a[i][j + 1] = 0;
                        }
                        if (a[i][j] == a[i][j + 1])
                        {
                            a[i][j] = a[i][j] + a[i][j + 1];
                            a[i][j + 1] = 0;
                        }
                    }
                    a[3][3] = 0;
                }
            }

            for (i = 0 ; i < 4 ; i++)
            {
                for ( j = 0 ; j < 4 ; j++)
                {
                    if (a[i][j] == 0)
                    {
                        cout << "*" << " ";
                    }
                    else cout << a[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 'd' :
            for (k = 0; k < 4; k++)
            {
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if ((a[i][j + 1] == 0) && (a[i][j] != 0))
                        {
                            a[i][j + 1] = a[i][j];
                            a[i][j] = 0;
                        }
                        if (a[i][j] == a[i][j + 1])
                        {
                            a[i][j + 1] = a[i][j] + a[i][j + 1];
                            a[i][j] = 0;
                        }
                    }
                }
            }

            for (i = 0 ; i < 4 ; i++)
            {
                for ( j = 0 ; j < 4 ; j++)
                {
                    if (a[i][j] == 0)
                    {
                        cout << "*" << " ";
                    }
                    else cout << a[i][j] << " ";
                }
                cout << endl;
            }
            break;
    }
}

int main()
{
    int a[4][4] , b[4][4] , i , j , l1 , m1 , l2 , m2 , l3 , m3 , k ;
    char op , op1;

    srand( time( 0 ) ) ;

    do
    {
        l1 = 0 + rand() % 3;
        m1 = 0 + rand() % 3;
        a[l1][m1] = 2;
        cout << l1 << m1 << endl;

        l2 = 0 + rand() % 3;
        m2 = 0 + rand() % 3;
        a[l2][m2] = 2;
        cout << l2 << m2 << endl;

        l3 = 0 + rand() % 3;
        m3 = 0 + rand() % 3;
        a[l3][m3] = 4;
        cout << l3 << m3 << endl << endl ;
    }
    while ( ( ( l1 == l2 ) && ( m1 == m2 ) ) || ( ( l1 == l3 ) && ( m1 == m3 ) ) || ( ( l2 == l3 ) && ( m2 == m3 ) ) ) ;

    for (i = 0 ; i < 4 ; i++)
    {
        for ( j = 0 ; j < 4 ; j++)
        {
            if ( ( ( i == l1 ) && ( j == m1 ) ) || ( ( i == l2 ) && ( j == m2 ) ) || ( ( i == l3 ) && ( j == m3 ) ) )
            {

            }
            else
            {
                a[i][j] = 0;
            }
        }
    }

    for (i = 0 ; i < 4 ; i++)
    {
        for ( j = 0 ; j < 4 ; j++)
        {
            if (a[i][j] == 0)
                cout << "*" << " ";
            else
                cout << a[i][j] << " ";
        }
        cout << endl;
    }

    sdvig ( op,  a,  i ,  j ,  k , b , op1);

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] != b[i][j])
            {
                sdvig ( op,  a,  i ,  j ,  k, b , op1);
            }
        }
    }

    return 0;
}