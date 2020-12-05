1.所有.h文件只能包括typedef struct #define 函数声明，不能有变量什么的，文件必须加#ifndef XX #defineXX #endif
2.一行少于80字符，每个文件少于1000行
3..h文件中的格式  
/* FILE HEADER
*/
/* INCLUDE FILE DECLARATIONS
 */
/* NAMING CONSTANT DECLARATIONS
 */
/* MACRO FUNCTION DECLARATIONS
 */
/* DATA TYPE DECLARATIONS
 */
/* EXPORTED SUBPROGRAM TEMPLATES
*/
4..c文件规范
/* FILE HEADER
*/
/* INCLUDE FILE DECLARATIONS
 */
/* NAMING CONSTANT DECLARATIONS
 */
/* MACRO FUNCTION DECLARATIONS
 */
/* DATA TYPE DECLARATIONS
 */
/* LOCAL SUBPROGRAM TEMPLATES 
 */
 /* STATIC VARIABLE DECLARATIONS 
 */
/* EXPORTED SUBPROGRAM BODIES
 */
/* LOCAL SUBPROGRAM BODIES
 */

5..h文件中宏定义，枚举类型，结构体定义带模块名前缀，
常量必须大写(宏定义)，数据类型前缀必须是tXxx,
枚举类型前缀eXxx，结构体类型前缀是sXxx


6.宏定义相关
a.	Use macro definitions when a section of code appears repeatedly in a program.
b.	Define macro names in uppercase with the subsystem name as prefix. 
c.	Limit nesting levels in macros to 3.
d.	Limit the number of lines in a macro to 5. 
e.	Use semicolon after the macro name wherever it is called, rather than in the macro definition itself.
f.	All characters should be in capitals and “underscores” may be used to enhance readability.
g.	Macro definitions should always be surrounded by parenthesizes, ( ) or {}.
h.	Macro vs. function call.
7.尽量不要用全局变量，在文件中用static 定义变量，用extern function给其他文件调用
局部变量使用前初始化，缩小static变量作用域范围，如果只是在某个函数中使用，定义在函数前面
指针必须是pXxx，最好初始化为NULL;
8.判断条件最好放在左边，如if(TRUE == variable)，if语句的嵌套最好少于三层
9.函数名，用这种方式定义 module-verb-object，驼峰式写法XxxAaaBbb
10.注释：
单行/* … … … */
多行 
/* 
 * … … …
 * … … …
 */