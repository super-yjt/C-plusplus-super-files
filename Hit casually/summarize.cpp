#include <iostream>
#include <string>
#define de 10 // #define宏常量，不可发生改变,无论你在之后给de赋任何值他永远是10
// 函数：一般分为有返回值和无返回值，无返回值实现功能最终不返回结果，有返回值的最终返回函数的计算结果
int main(void)
{
    // using namespace std 意思是使用标准命名空间，命名空间是用来避免命名冲突的
    // 也可以不使用命名空间，可以使用“std::cout（cout输出）”来指定命名空间
    using namespace std;
    //-------------------------------------------------------------------------------------------------
    cout << endl;
    // 1.整形变量
    int a = 1; // 定义一个a并将1赋值给a
    cout << "a的值为:" << a << endl /*"endl"换行*/;
    // 代码运行后将会显示："a的值为：1"
    //-------------------------------------------------------------------------------------------------
    cout << endl;
    // 2.整形的四种表达形式与sizeof
    // 四种表达式分别为short int long long 不同的表达式站内存大小不同其中 short占2字节 int long 占4字节 longlong占8字节
    // 使用sizeof()查看所占字节大小
    cout << "short     所占字节为：" << sizeof(short) << endl;
    cout << "int       所占字节为：" << sizeof(int) << endl;
    cout << "long      所占字节为：" << sizeof(long) << endl;
    cout << "long long 所占字节为：" << sizeof(long long) << endl;
    //-------------------------------------------------------------------------------------------------
    cout << endl;
    // 3.常量(记录程序中不可修改的数据)
    const int c = 10;
    cout << "c的值为:" << c << endl;
    cout << "de的值为:" << de << endl;
    // 当给b重新赋值为20时，程序会报错，de同理
    //-------------------------------------------------------------------------------------------------
    cout << endl;
    // 4.实形（浮点型）
    // 分为float(单精度)和double(双精度)
    float fl = 3.14f;
    double dl = 3.14;
    cout << "fl的值为:" << fl << endl;
    cout << "dl的值为:" << dl << endl;
    // 同时无论float 还是double 类型，其默认显示6位有效数字
    float fl2 = 3.14159265f;
    cout << fl2 << endl; // 输出为3.14159
    double bl2 = 3.14159265;
    cout << bl2 << endl; // 输出为3.14159
    // 同时我们也可以看看两种实行所占字节
    cout << "float 所占字节为：" << sizeof(float) << endl;   // 四字节
    cout << "double 所占字节为：" << sizeof(double) << endl; // 八字节
    //-------------------------------------------------------------------------------------------------
    cout << endl;
    // 5.字符型
    char ch1 = 'a'; // 注意char采用的是"  '字符'  ""  所以char ch = "a"; ，char ch = 'abcde'均为错误
    cout << "字符为：" << ch1 << endl;
    // 我们也可以看看字符型所占字节
    cout << "char所占字节为:" << sizeof(char) << endl;
    //-------------------------------------------------------------------------------------------------
    cout << endl;
    // 6.字符串
    // 字符串分为两种一种时c语言风格的 char 变量名[] = "字符串" 和 string 变量名 = "字符串"
    char str[] = "hello";
    cout << "字符串str为:" << str << endl;
    // 使用string需要#include<string>头文件
    string str2 = "world";
    cout << "字符串str2为:" << str2 << endl;
    //-------------------------------------------------------------------------------------------------
    cout << endl;
    // 7.bool类型
    bool bl1 = true; // bl1 = true 时 bl1 = 1
    cout << "bool = true时bl1为:" << bl1 << endl;
    bl1 = false; // bl1 = false 时 bl1 = 0
    cout << "bool = flase时bl1为:" << bl1 << endl;
    // 查看bool类型所占字节
    cout << "bool类型所占字节:" << sizeof(bl1) << endl; // 占一字节
    //-------------------------------------------------------------------------------------------------
    cout << endl;
    // 8.前置递增 后置递增 前置递减 后置递减
    int a0 = 10;        // 定义a0 = 10
    int b0 = a0++ * 10; // 后置递增：先运行a0 * 10 后运行a0=a0+1
    cout << "后置递增:" << b0 << "\t" << a0 << endl;
    int a1 = 10;
    int b1 = ++a1 * 10; // 前置递增：先运行a=a+1 后运行a*10(此时a=11)
    // 以下同理
    cout << "前置递增:" << b1 << "\t" << a1 << endl;
    int a2 = 10;
    int b2 = a2-- * 10;
    cout << "后置递减:" << b2 << "\t" << a2 << endl;
    int a3 = 10;
    int b3 = --a3 * 10;
    cout << "前置递减:" << b3 << "\t" << a3 << endl;
    // 这几个不好理解，需要仔细揣摩
    //-------------------------------------------------------------------------------------------------
    cout << endl;
    // 9.转义字符
    //  \n 换行
    cout << "hello\n";
    cout << "world\n";
    // \\ 代表一个"\"
    cout << "\\\n";
    // \t 水平制表
    cout << "aaaaa\thello world\n";
    cout << "aa\thello world\n";
    cout << "aaaa\thello world\n";
    // 可以整齐输出数据
    //-------------------------------------------------------------------------------------------------
    cout << endl;
    // 10.输入
    int f;
    cout << "请输入f的值:";
    cin >> f; // f的值将由你来赋值，通过输入来给f赋值
    cout << "f的值为:" << f << endl;
    // 小小扩展
    bool flag = true;
    cout << "请输入flag的值:";
    cin >> flag; // bool类型只要输入的数非零都代表真
    cout << "flag的值为:" << flag << endl;
    //-------------------------------------------------------------------------------------------------
    // return 0; 返回值就是通过程序计算之后得到的结果，也是函数最终实现返回最终的结果
}
