/*
    Enter an integer and display that many '*' characters in a row
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("Integer: ");
    scanf("%d", &no);

    if (no >= 1) {

        while (no-- > 0)
            putchar('*');

        putchar('\n');
    }

    return 0;
}



// ### 1. **字符常量 (character constant)**

// * 写法：**用单引号 `' '` 括起来**，里面只能有**一个字符**。
// * 类型：在 C 里是 `int` 类型。
// * 本质：表示**某个字符的 ASCII 码值**。
// * 例子：

//   ```c
//   'A'   // 值是 65
//   '0'   // 值是 48
//   '\n'  // 值是 10 (换行符)
//   '*'
//   ```

//   所以：

//   ```c
//   putchar('*');   // 输出一个星号 *
//   putchar('\n');  // 输出一个换行
//   ```

// ---

// ### 2. **字符串常量 (string literal / constant)**

// * 写法：**用双引号 `"` 括起来**，里面可以有**多个字符**（当然也可以只有一个）。
// * 类型：本质是 **字符数组**，类型为 `const char[]`。
// * 结尾：字符串常量在编译时会自动加一个 **`\0`（字符串结束符）**。
// * 例子：

//   ```c
//   "A"      // 实际上是 {'A', '\0'}，长度 2
//   "*"      // 实际上是 {'*', '\0'}
//   "Hello"  // 实际上是 {'H','e','l','l','o','\0'}
//   ```

