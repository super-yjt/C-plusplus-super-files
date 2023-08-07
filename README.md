# C-plusplus-super-files
## ***A universal learning file containing C++from beginners to kernels***
## RENEW?<br/>**~~END~~**<br/>Continuously keeping up with the new<br/>
### ~~emm...Suddenly realized that I seemed to be missing quite a few. cpp files , But the core parts are all in place~~<br/>
## Directory
* [Loop Structure](#Loop_Structure)
* [Training about loop](#Training_about_loop)
* [Array files](#Array_files)
* [Pointer](#Pointer)
* [Writing Function Files](#Writing_Function_Files)
* [Structure](#Structure)
* [C++_Foundation_Final_Flies](#C++_Foundation_Final_Flies)

# Fundamentals of C++ Grammar
### Loop_Structure
>> + [nesting loop](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/Loop%20Structure/nesting%20loop.cpp)
>> + [switch](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/Loop%20Structure/switch.cpp)
>> + [while](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/Loop%20Structure/while.cpp)
>> + [do while](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/Loop%20Structure/Do%20while.cpp)
>> + [Skip statement continue](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/Loop%20Structure/Skip%20statement%20continue.cpp)
>> + [Skip statement break](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/Loop%20Structure/Skip%20statement%20break.cpp)
>> + [Skip statement goto](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/Loop%20Structure/Skip%20statement%20goto.cpp)

### Training_about_loop
>> + [Guessing Numbers](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/training/Guessing%20Numbers.cpp)
>> + [Knocking on the table](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/training/Knocking%20on%20the%20table.cpp)
>> + [Narcissistic number](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/training/Narcissistic%20number.cpp)
>> + [Table](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/training/Table.cpp)
>> + [if conditional sentence training](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/training/if%20conditional%20sentence%20training.cpp)

### Array_files
>> + [array](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/array%20files/array.cpp)
>> + [array'name](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/array%20files/array'name.cpp)
>> + [Maximum number](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/array%20files/Maximum%20number.cpp)
>> + [Element inversion](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/array%20files/Element%20inversion.cpp)
>> + [bubble sort](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/array%20files/bubble%20sort.cpp)
>> + [Two-dimensional array](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/array%20files/Two-dimensional%20array.cpp)
>> + [Two-dimensional array's training](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/array%20files/Two-dimensional%20array's%20training.cpp)

### Pointer
>> + [pointer](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/pointer/pointer.cpp)
>> + [Memory space where the pointer is located](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/pointer/Memory%20space%20where%20the%20pointer%20is%20located.cpp)
>> + [Pointer and Wild Pointer](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/pointer/Pointer%20and%20Wild%20Pointer.cpp)
>> + [Pointer and null pointer](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/pointer/Pointer%20and%20null%20pointer.cpp)
>> + [Pointers and functions](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/pointer/Pointers%20and%20functions.cpp)
>> + [Pointers and Arrays](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/pointer/Pointers%20and%20Arrays.cpp)
>> + [Const decorated pointer](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/pointer/Const%20decorated%20pointer.cpp)

### Writing_Function_Files
>> + [Writing Function Files](https://github.com/super-yjt/My--C-plusplus-super-files/tree/main/Writing%20Function%20Files) : **Can be used for multiplayer compilation**

### Structure
>>  + [Writing Function Files](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/structure/structure.cpp)
>>  + [structure and pointer](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/structure/structure%20and%20pointer.cpp)
>>  + [Structure as function parameter](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/structure/Structure%20as%20function%20parameter.cpp)
>>  + [Const modified structure](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/structure/Const%20modified%20structure.cpp)
>>  + [Nested structures within structures](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/structure/Nested%20structures%20within%20structures.cpp)
>>  + [Structure and Bubble sort](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/structure/Structure%20and%20Bubble%20sort.cpp)
>>  + [Structure Case 1](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/structure/Structure%20Case%201.cpp)

### C++_Foundation_Final_Flies
>> + [Address Book Management System](https://github.com/super-yjt/My--C-plusplus-super-files/blob/main/Address%20Book%20Management%20System/Address%20Book%20Management%20System.cpp)

### Simple Summary`Does not include content in function`:
```
int main(void)
{
    Addressbooks abs;
    abs.m_Size = 0;
    int select = 0;
    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1:
            addPerson(&abs);
            break;
        case 2:
            showPerson(&abs);
            break;
        case 3:
            deletPerson(&abs);
            break;
        case 4:
            findPerson(&abs);
            break;
        case 5:
            modifyPerson(&abs);
            break;
        case 6:
            cleanPerson(&abs);
            break;
        case 0:
            cout << "欢迎下次使用\n";
            return 0;
            system("pause");
            break;
        default:
            cout << "输入错误\n";
            break;
        }
    }
}
```

### Results Display:
```
******************************
*********1.添加联系人**********
*********2.显示联系人**********
*********3.删除联系人**********
*********4.查找联系人**********
*********5.修改联系人**********
*********6.清空通讯录**********
*********0.推出通讯录**********
*******输入数字使用功能********
******************************
```


