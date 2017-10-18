#include <iostream>

using namespace std;

int main()
{
    int matr[4][4]= {0} , schet = 0 , i , j , k , l1 , l2 , l3 , m1 , m2 , m3;
    char op;
    bool res = false;

    srand( time( 0 ) ) ;

    do
    {
        l1 = 0 + rand() % 3;
        m1 = 0 + rand() % 3;
        matr[l1][m1] = 2;

        l2 = 0 + rand() % 3;
        m2 = 0 + rand() % 3;
        matr[l2][m2] = 2;

        l3 = 0 + rand() % 3;
        m3 = 0 + rand() % 3;
        matr[l3][m3] = 4;
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
                matr[i][j] = 0;
            }
        }
    }

    for (i = 0 ; i < 4 ; i++)
    {
        for ( j = 0 ; j < 4 ; j++)
        {
            if (matr[i][j] == 0)
                cout  <<  "*"  <<  " ";
            else
                cout  <<  matr[i][j]  <<  " ";
        }
        cout  <<  endl ;
    }

    cout << endl;

    while (res == false)
    {

        cin >> op;

        switch(op)
        {
            case 'j':

                for(i = 0; i < 4; i++)
                {
                    for(j = 3; j >= 0; j--)
                    {
                        if(matr[j][i] == 0)
                        {
                            for( k = j - 1; k >= 0; k--)
                            {
                                if(matr[k][i] != 0)
                                {
                                    matr[j][i] = matr[k][i];
                                    matr[k][i] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }

                for(i = 0; i < 4; i++)
                {
                    for(j = 3; j > 0; j--)
                    {
                        if(matr[j][i] == matr[j - 1][i])
                        {
                            matr[j][i] = matr[j][i] + matr[j - 1][i];
                            matr[j - 1][i] = 0;
                            schet = schet + matr[j][i];
                        }
                    }
                }

                for(i = 0; i < 4; i++)
                {
                    for(j = 3; j >= 0; j--)
                    {
                        if(matr[j][i] == 0)
                        {
                            for(k = j - 1; k >= 0; k--)
                            {
                                if(matr[k][i] != 0)
                                {
                                    matr[j][i] = matr[k][i];
                                    matr[k][i] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }

                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if(matr[i][j] == 0)

                        {
                            res = false;
                            break;
                        }
                        else res = true;

                    }
                }
                break;

            case 'k':
                for(i = 0; i < 4; i++)
                {
                    for(j = 0; j < 4; j++)
                    {
                        if(matr[j][i] == 0)
                        {
                            for(k = j + 1; k < 4; k++)
                            {
                                if(matr[k][i] != 0)
                                {
                                    matr[j][i] = matr[k][i];
                                    matr[k][i] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for(i = 0; i < 4; i++)
                {
                    for(j = 0; j < 3; j++)
                    {
                        if(matr[j][i] == matr[j + 1][i])
                        {
                            matr[j][i] = matr[j][i] + matr[j + 1][i];
                            matr[j + 1][i] = 0;
                            schet = schet + matr[j][i];
                        }
                    }
                }
                for(i = 0; i < 4; i++)
                {
                    for(j = 0;j < 4; j++)
                    {
                        if(matr[j][i] == 0)
                        {
                            for(k = j + 1; k < 4; k++)
                            {
                                if(matr[k][i] != 0)
                                {
                                    matr[j][i] = matr[k][i];
                                    matr[k][i] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j <4 ; j++)
                    {
                        if(matr[i][j] == 0)

                        {
                            res = false;
                            break;
                        }
                        else res = true;

                    }
                }
                break;

            case 'h':
                for(i = 0; i < 4; i++)
                {
                    for(j = 0; j < 4; j++)
                    {
                        if(matr[i][j] == 0)
                        {
                            for(k = j + 1; k < 4; k++)
                            {
                                if(matr[i][k] != 0)
                                {
                                    matr[i][j] = matr[i][k];
                                    matr[i][k] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for(i = 0;i < 4; i++)
                {
                    for(j = 0;j < 3; j++)
                    {
                        if(matr[i][j] == matr[i][j + 1])
                        {
                            matr[i][j]=matr[i][j] + matr[i][j + 1];
                            matr[i][j + 1] = 0;
                            schet = schet + matr[i][j];
                        }
                    }
                }
                for(i = 0; i < 4; i++)
                {
                    for(j = 0; j < 4; j++)
                    {
                        if(matr[i][j] == 0)
                        {
                            for(k = j + 1; k < 4; k++)
                            {
                                if(matr[i][k] != 0)
                                {
                                    matr[i][j] = matr[i][k];
                                    matr[i][k] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if(matr[i][j] == 0)

                        {
                            res = false;
                            break;
                        }
                        else res = true;

                    }
                }
                break;

            case 'l':
                for(i = 0; i < 4; i++)
                {
                    for(j = 3; j >= 0; j--)
                    {
                        if(matr[i][j] == 0)
                        {
                            for(k = j - 1; k >= 0; k--)
                            {
                                if(matr[i][k] != 0)
                                {
                                    matr[i][j] = matr[i][k];
                                    matr[i][k] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for(i = 0; i < 4; i++)
                {
                    for(j = 3; j >= 0; j--)
                    {
                        if(matr[i][j] == matr[i][j - 1])
                        {
                            matr[i][j] = matr[i][j] + matr[i][j - 1];
                            matr[i][j - 1] = 0;
                            schet = schet + matr[i][j];
                        }
                    }
                }
                for(i = 0; i < 4; i++)
                {
                    for(j = 3; j >= 0; j--)
                    {
                        if(matr[i][j] == 0)
                        {
                            for(k = j - 1; k >= 0; k--)
                            {
                                if(matr[i][k] != 0)
                                {
                                    matr[i][j] = matr[i][k];
                                    matr[i][k] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for(i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if(matr[i][j] == 0)
                        {
                            res = false;
                            break;
                        }
                        else res = true;

                    }
                }

            case 'q':
                cout << "Exit" << endl;
                res = true;
                break;

        }

        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < 4; j++)
            {
                if(matr[i][j] == 0)
                {
                    cout << "*" << " ";
                }
                else
                {
                    cout << matr[i][j] << " ";
                }
            }
            cout <<  endl;
        }
        cout << "Score = " << schet << endl << endl;
    }

    return 0;
}