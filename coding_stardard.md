1.����.h�ļ�ֻ�ܰ���typedef struct #define ���������������б���ʲô�ģ��ļ������#ifndef XX #defineXX #endif
2.һ������80�ַ���ÿ���ļ�����1000��
3..h�ļ��еĸ�ʽ  
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
4..c�ļ��淶
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

5..h�ļ��к궨�壬ö�����ͣ��ṹ�嶨���ģ����ǰ׺��
���������д(�궨��)����������ǰ׺������tXxx,
ö������ǰ׺eXxx���ṹ������ǰ׺��sXxx


6.�궨�����
a.	Use macro definitions when a section of code appears repeatedly in a program.
b.	Define macro names in uppercase with the subsystem name as prefix. 
c.	Limit nesting levels in macros to 3.
d.	Limit the number of lines in a macro to 5. 
e.	Use semicolon after the macro name wherever it is called, rather than in the macro definition itself.
f.	All characters should be in capitals and ��underscores�� may be used to enhance readability.
g.	Macro definitions should always be surrounded by parenthesizes, ( ) or {}.
h.	Macro vs. function call.
7.������Ҫ��ȫ�ֱ��������ļ�����static �����������extern function�������ļ�����
�ֲ�����ʹ��ǰ��ʼ������Сstatic����������Χ�����ֻ����ĳ��������ʹ�ã������ں���ǰ��
ָ�������pXxx����ó�ʼ��ΪNULL;
8.�ж�������÷�����ߣ���if(TRUE == variable)��if����Ƕ�������������
9.�������������ַ�ʽ���� module-verb-object���շ�ʽд��XxxAaaBbb
10.ע�ͣ�
����/* �� �� �� */
���� 
/* 
 * �� �� ��
 * �� �� ��
 */