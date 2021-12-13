void fun(int *a,int *b)
{
(*a)++;(*b)++;

}
main()
{
    int a=3,b=8;
    fun(a,b);
    printf("a=%d,b=%d\n",a,b);

}
