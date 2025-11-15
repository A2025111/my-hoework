#include <stdio.h>

// 1. 定义GPIO速度枚举类型
typedef enum {
    GPIO_Speed_2MHz = 0,   // 2MHz速度
    GPIO_Speed_10MHz,      // 10MHz速度  
    GPIO_Speed_50MHz       // 50MHz速度
} GPIO_Speed_TypeDef;

// 2. 定义GPIO配置结构体
typedef struct {
    GPIO_Speed_TypeDef GPIO_Speed;  // GPIO速度配置
} GPIO_InitTypeDef;

// 3. 函数声明
void GPIO_StructureInit(GPIO_InitTypeDef* GPIO_InitStruct);

int main()
{
    // 4. 创建结构体变量
    GPIO_InitTypeDef GPIO_InitStruct;

    // 5. 调用初始化函数，传入结构体指针
    GPIO_StructureInit(&GPIO_InitStruct);
    return 0;
}

void GPIO_StructureInit(GPIO_InitTypeDef* GPIO_InitStruct)
{
    GPIO_InitStruct->GPIO_Speed = GPIO_Speed_2MHz;
}