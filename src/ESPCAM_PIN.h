//===============================  PINES AI-THINKER con camara OV2460 ======

#ifndef _ESPCAM_PIN_H
#define _ESPCAM_PIN_H

#define CAMERA_MODEL_AI_THINKER // Camara AI Thinker con PSRAM

#define PWDN_GPIO_NUM     32
#define RESET_GPIO_NUM    -1
#define XCLK_GPIO_NUM      0
#define SIOD_GPIO_NUM     26
#define SIOC_GPIO_NUM     27

#define Y9_GPIO_NUM       35
#define Y8_GPIO_NUM       34
#define Y7_GPIO_NUM       39
#define Y6_GPIO_NUM       36
#define Y5_GPIO_NUM       21
#define Y4_GPIO_NUM       19
#define Y3_GPIO_NUM       18
#define Y2_GPIO_NUM        5
#define VSYNC_GPIO_NUM    25
#define HREF_GPIO_NUM     23
#define PCLK_GPIO_NUM     22

// 4 for flash led or 33 for normal led
#define LED_GPIO_NUM       4
#define GPIO_LEDROJO       33
#define LED_LEDC_CHANNEL 2 // Canal diferente de la camara
#define CONFIG_LED_MAX_INTENSITY 255

#endif