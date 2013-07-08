#ifndef _PROGRAM_MEMORY_
#define _PROGRAM_MEMORY_

/************************************************************************
 * RXDUINO Software, All Rights Reserved 2012
 * This program is not free software; you can not redistribute it and/or modify
 * it under any terms within the written consent of the developer.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * 
 * You should have recieved a copy of the rights associated with this program and
 * all associated source files and hardware related to this program.  If you do
 * not agree to these rights, please cease all use and dispose of this program
 * immidately.
 * 
 * Violation of these terms is prosecutable by law.
 *
 *
 * Author: Paimon Sorornejad
 * Version: v1.00
 * Revision Date: 1/31/2012
 ************************************************************************/

// Initialize Mode Text 
const char* const allModesText[] PROGMEM =
  { ecuMonitorText, milesPerGalText, wheelSpeedText,   wheelPsiText,
    textModeText,   askClockText,    troubleCodesText, systemOffText,   
	respTimeText,   avgMpgText,      wheelTempText,    editTextText,    
	setClockText,   milClearText};
                
// Initialize Installed Monitors
const int allMonitors[] PROGMEM = 
   { ENGINE_RPM,   ENGINE_COOLANT_TEMP, VEHICLE_SPEED, MAF_SENSOR,    THROTTLE,
     OL_AFR,       WB_AFR,              LOAD,          CAT_TEMP,      IAT,
     STFT,         LTFT,                RUNTIME,       FUELLEVEL,     CONTROL_MODULE };  
                           
// Initialize Monitor Text                       
const char* const allMonitorsText[] PROGMEM =  
    { rpmLabel,   engTempLabel, speedLabel, mafLabel,  tpsLabel,  
      olafrLabel, wbafrLabel,   loadLabel,  catLabel,  iatLabel,  
      stftLabel,  ltftLabel,    runtLabel,  fuelLabel, controlLabel }; 
       
#endif