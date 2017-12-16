/****************************/
/* Author:  MIECIELICA YANN */
/* Date:    07/09/2017 23:00*/
/* P-Name:  Sensors         */
/****************************/

#include "PHmeterBNC.h"
//#include <pHProbe>

//#define ADC_MAX 4095
//#define ADC_MAX 1023

PHmeterBNC::PHmeterBNC(uint8_t pin)
    :m_pin(pin)
{ }

PHmeterBNC::~PHmeterBNC()
{}

float PHmeterBNC::pH()
{

  /*int value = analogRead(m_pin);
  m_po = (ADC_MAX - value);

  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = value * (5.0 / (float)ADC_MAX);


  float calibration = 0.00; //change this value to calibrate
  const int analogInPin = A0;
  int sensorValue = 0;
  unsigned long int avgValue;
  float b;
  int buf[10],temp;


  for(int i=0;i<10;i++)
  {
    buf[i]=analogRead(analogInPin);
    delay(30);
  }

  for(int i=0;i<9;i++)
  {
    for(int j=i+1;j<10;j++)
    {
      if(buf[i]>buf[j])
      {
        temp=buf[i];
        buf[i]=buf[j];
        buf[j]=temp;
      }
    }
  }
  avgValue=0;
  for(int i=2;i<8;i++)
    avgValue+=buf[i];
  float pHVol=(float)avgValue*5.0/ADC_MAX/6;
  float m_currentPH = -5.70 * pHVol + calibration;
  printf("[PHmeterBNC::pH] Current pH: %.2f - Voltage: %.2f\n", m_currentPH, voltage);*/


  //This is the raw voltage value for the pH module
  //Calibration values:
  //405@pH7
  //290@ph4

  /*float pHm = map(m_po, 290, 406, 400, 700); //maps voltage(Po) from calibration values at 4.00 and 7.00 pH
  m_pH = (pHm/100);

  printf("[PHmeterBNC::pH] Current pH: %.2f for po: %.2f val:%i .\n", m_currentPH, m_po, value);*/

    return m_pH;
}
