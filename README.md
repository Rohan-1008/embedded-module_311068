# Embedded-Activities_311068
# SeatHeatingApplication
# Activity-1
## If the person sit in the car seat then the ButtonSensor activate and if the person turns ON the heater then LED Glows

|ON|OFF|
|:--:|:--:|
|![LED_ON](https://user-images.githubusercontent.com/85540441/126935908-3082a65d-8398-48c8-b1b3-7411d664f98d.png)|![LED_OFF](https://user-images.githubusercontent.com/85540441/126936040-41afe188-7307-4092-b3d5-d1c255db5ee0.png)|
## Activity_2
## If both the above conditions are true, then input analog temperature readings are converted into digital values.
![ADC](https://user-images.githubusercontent.com/85540441/127325146-e45f0d5b-9173-4669-bcef-7cc735d272af.png)
## Activity_3
## Using PWM the digital values are shown in Oscilloscope
|PWM_20%|PWM_40%|
|:--:|:--:|
|![PWM_20%](https://user-images.githubusercontent.com/85540441/127325740-902f3538-a1d0-46e7-8c9b-b015f2565e37.png)|![PWM_40%](https://user-images.githubusercontent.com/85540441/127325787-d806d9f6-56aa-4d48-bb18-0d1d36f77b60.png)
|PWM_70%|PWM_95%|
|   |   |
![PWM_70%](https://user-images.githubusercontent.com/85540441/127325848-6445b58f-727f-4bf3-88a4-a5b7eee9aa98.png)|![PWM_95%](https://user-images.githubusercontent.com/85540441/127325926-b8e7bfc2-e619-4f55-933b-cb56376f3e2f.png)
## Activity_4
## The digital temperature values can be visualized in serial monitor using USART protocol
![serial communication](https://user-images.githubusercontent.com/85540441/127324544-94917683-705e-4df5-8333-6ec753d91eb4.png)
## Functioning of Application
![function Application](https://user-images.githubusercontent.com/85540441/127324870-8ef9ecd0-55a7-4353-9411-d1b2f312ac81.gif)

## CI and Code Quality
|Build|Cppcheck|Codacy|Code Inspector|Code Grade|
|:--:|:--:|:--:|:--|:---|
