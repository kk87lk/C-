#include <iostream>
using namespace std;
typedef struct TriTable
{
    int row = 0;
    int col = 0;
    int data = 0;
};
void creat(TriTable *TriTab)
{
    for (int i = 0; i < 100; i++)
    {
        cout << "Enter the row, col and data(Enter row = 0 to exit):";
        cin >> TriTab[i].row;
        if (TriTab[i].row == 0)
            break;
        cin >> TriTab[i].col;
        cin >> TriTab[i].data;
    }
    return;
}
void output(TriTable *TriTab)
{
    for (int i = 0; TriTab[i].row != 0 || i == 99; i++)
    {
        cout << "row, col and data:";
        cout << TriTab[i].row << " " << TriTab[i].col << " " << TriTab[i].data << "\n";
    }
    return;
}
void transpose(TriTable *TriTab)
{
    int i = 0;
    TriTable TriTab2[100];
    while (TriTab[i].row != 0)
    {
        TriTab2[i].row = TriTab[i].col;
        TriTab2[i].col = TriTab[i].row;
        TriTab2[i].data = TriTab[i].data;
        i++;
    }
    output(TriTab2);
}
int cmp(TriTable *first, int f, TriTable *second, int s)
{
    while (first[f].row != 0 && first[f].row != second[s].row)
        if (second[s].row == 0)
            return 0;
        else
            s++;
}
TriTable *add(TriTable *first, TriTable *second)
{
    TriTable re[100];
    int flag = 0, f = 0, s = 0;

    return re;
}
int main()
{
    TriTable TriTab1[100];
    creat(TriTab1);
    output(TriTab1);
    transpose(TriTab1);
}

// typedef int Etype;
// typedef struct OLnode
// {
//     int i, j;
//     Etype e;
//     struct OLnode *right, *down;
// } OLnode, *OLink;
// typedef struct
// {
//     OLink *rh, *ch;
//     int norow, nocol, noe;
// } Crosslist;
// void creatMatrix(Crosslist *M);
// void out_M(Crosslist M);
// void search_M(Crosslist *M);
// void query_M(Crosslist M, int row, int col);
// Crosslist ma, mb, mr;
// int z;
// int main()
// {
//     creatMatrix(&ma);
//     search_M(&ma);
//     cout << "Input the row and col of element you want to query:";
//     int m = 0, n = 0;
//     cin >> m >> n;
//     query_M(ma, m, n);
// }
// void out_M(Crosslist M)
// {
//     int i;
//     OLnode *p;
//     cout << "\n  m=" << M.norow << "   n=" << M.nocol << "   t=" << M.noe << "\n";
//     for (i = 1; i <= M.norow; i++)
//     {
//         p = M.rh[i];
//         if (p)
//         {
//             cout << "\n i=" << i;
//             while (p)
//             {
//                 cout << "   (";
//                 cout.width(3);
//                 cout << p->i;
//                 cout.width(3);
//                 cout << p->j;
//                 cout.width(4);
//                 cout << p->e;
//                 cout << ")";
//                 p = p->right;
//             }
//         }
//         cout << "\n";
//     }
// }

// void creatMatrix(Crosslist *M)
// {
//     int m, n, t, row, col, i, j;
//     Etype va;
//     OLnode *p, *q, *s;
//     cout << "\n  m n t=";
//     cin >> m >> n >> t;
//     M->rh = (OLink *)::operator new((m + 1) * sizeof(OLink));
//     if (!M->rh)
//         exit(-1);
//     M->ch = (OLink *)::operator new((n + 1) * sizeof(OLink));
//     if (!M->ch)
//         exit(-1);
//     for (i = 1; i <= m; i++)
//         M->rh[i] = NULL;
//     for (j = 1; j <= n; j++)
//         M->ch[j] = NULL;
//     M->norow = m;
//     M->nocol = n;
//     M->noe = t;
//     for (i = 1; i <= M->noe; i++)
//     {
//         cout << "\n i j e =";
//         cin >> row >> col >> va;
//         p = (OLnode *)::operator new(sizeof(OLnode));
//         p->i = row;
//         p->j = col;
//         p->e = va;
//         q = M->rh[row];
//         s = q;
//         while (q != NULL && q->j < col)
//         {
//             s = q;
//             q = q->right;
//         }
//         p->right = q;
//         if (q == M->rh[row])
//             M->rh[row] = p;
//         else
//             s->right = p;
//         q = M->ch[col];
//         while (q && q->i < row)
//         {
//             s = q;
//             q = q->down;
//         }
//         p->down = q;
//         if (q == M->ch[col])
//             M->ch[col] = p;
//         else
//             s->down = p;
//     }
// }
// void search_M(Crosslist *M)
// {
//     Etype x;
//     cout << "Input the data you want to search:";
//     cin >> x;
//     OLnode *p;
//     for (int i = 1; i <= M->norow; i++)
//     {
//         p = M->rh[i];
//         if (p)
//         {
//             while (p)
//             {
//                 if (p->e == x)
//                 {
//                     cout << "   (";
//                     cout.width(3);
//                     cout << p->i;
//                     cout.width(3);
//                     cout << p->j;
//                     cout << ")";
//                 }
//                 p = p->right;
//             }
//         }
//         cout << "\n";
//     }
//     return;
// }
// void query_M(Crosslist M, int row, int col)
// {
//     OLnode *p;
//     for (int i = 1; i <= M.norow; i++)
//     {
//         p = M.rh[i];
//         if (p)
//         {
//             while (p)
//             {
//                 if (row == p->i && col == p->j)
//                     cout << p->e;
//                 p = p->right;
//             }
//         }
//     }
// }

int maze[SIZE][SIZE] =
    {
        {1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 1, 0, 0, 1},
        {1, 0, 0, 1, 0, 1, 1},
        {1, 0, 0, 0, 0, 0, 1},
        {1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1}};
typedef struct
{
    int X;
    int y;
} Direction;
Direction Move[5] = {{0, 0}, {0, 1}, {1, 0}, {0, -1}};
typedef struct
{
    int row;
    int column;
    int direction;
} SElemType;
typedef SElemType elemtype;
int path(SequenStack s.int Maze[ SIZEJ[SIZEJ],Direction MoveC5)
{
    SElemType temp;
    SElemType tryPath;
    int x, y, d, i, j, tryTime;
    temp.row = 1;
    temp.column = 1;
    temp.direction一O;
    Push_ SequenStack(s, temp);
    while (!SequenStack Empty(s))
        GetTop_ SequenStack(s, &.temp);
    X = temp.row;
    y = temp.column;
    d = temp.direction + 1;
    tryTime = 0;
    while (d < 一4)
        i = x + Move[d].x;
    j = y + Move[d].y;
    if (Maze[i][j] == 0)
        if (tryTime == 0)
            Pop_ SequenStack(s, &.tryPath);
    tryPath.direction = d;
    Push_ SequenStack(s, tryPath);
    tryTime++;
    temp.row = i;
    temp.column = j;
    temp.direction = 1;
    Push_ SequenStack(s.temp);
    x = i;
    y = j;
    Maze[xJ][y] = -1;
    if (x == SIZE - 2 && y == SIZE - 2)
        return1;
    else
        d = 1;
}
else
{
    d++;
    tryTime = 0;
}
