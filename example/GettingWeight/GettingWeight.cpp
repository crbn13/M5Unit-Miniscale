#include "UNIT_SCALES.h"

#include <iostream>

UNIT_SCALES scales;

void setup() {
    std::cout << "hello world" << std::endl;
    // M5.begin();
    // display.begin();
    // canvas.setColorDepth(8);  // mono color
    // canvas.setFont(&fonts::efontCN_12);
    // canvas.createSprite(display.width(), display.height());
    // canvas.setTextSize(2);
    while (!scales.begin(DEVICE_DEFAULT_ADDR)) {
        // Serial.println("scales connect error");
        // M5.Lcd.print("scales connect error");
        std::cout << "scales connect error" << std::endl;
        delay(1000);
    }
    std::cout << "scales setup " << std::endl;
    scales.setLEDColor(0x001000);
    return;
}

void loop() {

    std::cout << "Loop start" << std::endl;
    float weight = scales.getWeight();
    std::cout << " weight read is : " << weight << " units" << std::endl;

    int32_t adc = scales.getRawADC();
    std::cout << " adc read is : " << adc << " " << std::endl;

    delay(10);


    // float gap    = scales.getGapValue();
    // int adc      = scales.getRawADC();

    // canvas.fillSprite(BLACK);
    // canvas.setTextSize(2);
    // canvas.drawString("Unit Scale Weight Getting", 10, 10);
    // canvas.setTextColor(WHITE);
    // canvas.setCursor(10, 50);
    // canvas.setTextSize(2);
    // canvas.printf("WEIGHT:");
    // canvas.setTextColor(GREEN);
    // canvas.setTextSize(3);
    // canvas.printf("%.2fg", weight);
    // canvas.setCursor(10, 100);
    // canvas.setTextColor(WHITE);
    // canvas.setTextSize(2);
    // canvas.printf("ADC:");
    // canvas.setTextColor(GREEN);
    // canvas.setTextSize(3);
    // canvas.printf("%d", adc);
    // canvas.setTextColor(ORANGE);
    // canvas.setTextSize(2);
    // canvas.drawString("[Offset]", 110, 210);
    // canvas.pushSprite(0, 0);

    // M5.update();
    // if (M5.BtnB.wasPressed()) {
    // }

    return;
}

int main()
{
    setup();
    for(int i = 0; i<1000; i++)
        loop();

    return 0;
}