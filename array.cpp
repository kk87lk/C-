#include <iostream>
using namespace std;
typedef int Etype;
typedef struct OLnode
{
    int i, j;                    /* �кš��к��� */
    Etype e;                     /*  ������      */
    struct OLnode *right, *down; /* ����ġ������ָ���� */
} OLnode, *OLink;                /* ����Ԫ�ؽ������  */
typedef struct
{
    OLink *rh, *ch;
    int mu, nu, tu;
} Crosslist; /* ʮ�������С��б�ͷ  */
/* �������� */
void creatMatrix(Crosslist *M);
void out_M(Crosslist M);
void search_M(Crosslist *M, Etype x);
void query_M(Crosslist M, int row, int col);
Crosslist ma, mb, mr;
int z;
/*  ������ */
int main()
{
    creatMatrix(&ma);
    out_M(ma);
} /* main */
/* ʮ����������  */
void out_M(Crosslist M)
{
    int i;
    OLnode *p;
    /*  ����������������������������Ԫ���ܸ��� */
    cout << "\n  m=" << M.mu << "   n=" << M.nu << "   t=" << M.tu << "\n";
    for (i = 1; i <= M.mu; i++)
    {
        p = M.rh[i]; /*  ָ���i�� */
        if (p)
        {
            cout << "\n i=" << i;
            while (p)
            {
                cout << "   (";
                cout.width(3);
                cout << p->i;
                cout.width(3);
                cout << p->j;
                cout.width(4);
                cout << p->e;
                cout << ")";
                p = p->right;
            }
        }
        cout << "\n";
    }
    system("cls");
}

void creatMatrix(Crosslist *M)
{
    int m, n, t, row, col, i, j;
    Etype va;
    OLnode *p, *q, *s;
    /*  ����������������������������Ԫ���ܸ��� */
    cout << "\n  m n t=";
    cin >> m >> n >> t;
    M->rh = (OLink *)::operator new((m + 1) * sizeof(OLink));
    if (!M->rh)
        exit(-1);
    M->ch = (OLink *)::operator new((n + 1) * sizeof(OLink));
    if (!M->ch)
        exit(-1);
    for (i = 1; i <= m; i++)
        M->rh[i] = NULL;
    for (j = 1; j <= n; j++)
        M->ch[j] = NULL;
    M->mu = m;
    M->nu = n;
    M->tu = t; /*  �����ɿ�ʮ������  */
    /* ����Ϊ����Ԫ�ص���һ����Ͳ��� */
    for (i = 1; i <= M->tu; i++)
    {
        cout << "\n i j e =";
        cin >> row >> col >> va;
        p = (OLnode *)::operator new(sizeof(OLnode));
        p->i = row;
        p->j = col;
        p->e = va;
        /*  �ڵ�row�������� */
        q = M->rh[row];
        s = q;
        while (q != NULL && q->j < col)
        {
            s = q;
            q = q->right;
        }
        p->right = q;
        if (q == M->rh[row])
            M->rh[row] = p;
        else
            s->right = p;
        /* �ڵ�col��������    */
        q = M->ch[col];
        while (q && q->i < row)
        {
            s = q;
            q = q->down;
        }
        p->down = q;
        if (q == M->ch[col])
            M->ch[col] = p;
        else
            s->down = p;
    } /* for */
} /* creatMatrix */
void search_M(Crosslist *M, Etype x)
{
}
void query_M(Crosslist M, int row, int col)
{
}