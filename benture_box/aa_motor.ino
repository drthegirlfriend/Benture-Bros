
//initialize classes
Adafruit_ADS1015 ads;     /* Use this for the 12-bit version */
int16_t adc[3]; // ADS1015

// escon pins and motor vars
int motorPin[3] = {12, 33, 15};
int enablePin = 13;
int lowPWM = 6554; // 10% from 65535 (16bit PWM)
int highPWM = 58982; // 90% from 65535 (16bit PWM)
int nullPWM = (highPWM + lowPWM) / 2; // Zero PWM for escons
double ampPWM = nullPWM;
double omega[3]; //escon angular velocities
double manualAmps; //Used only for manual control

// set ledc params
int freq = 10000; // PWM freq
int16_t ledChannel[3] = {0, 1, 2}; // PWM channels
int resolution = 16; // in bits
