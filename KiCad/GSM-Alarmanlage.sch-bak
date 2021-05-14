EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "GSM-Alarmanlage"
Date "2021-04-26"
Rev "1"
Comp ""
Comment1 "GSM-Modul SIM800L"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L RF_Module:SIM800L_7-Pin U2
U 1 1 6086E40C
P 6400 1700
F 0 "U2" H 6350 2065 50  0000 C CNN
F 1 "SIM800L_7-Pin" H 6350 1974 50  0000 C CNN
F 2 "RF_Module:SIM800L_7-Pin" H 6300 2000 50  0001 C CNN
F 3 "" H 6300 2000 50  0001 C CNN
	1    6400 1700
	1    0    0    -1  
$EndComp
$Comp
L Regulator_Switching:CRE1S1205SC U1
U 1 1 60877696
P 3500 1800
F 0 "U1" H 3500 2267 50  0000 C CNN
F 1 "CRE1S1205SC" H 3500 2176 50  0000 C CNN
F 2 "Converter_DCDC:Converter_DCDC_LM2596S_Modul" H 3500 1400 50  0001 C CNN
F 3 "http://power.murata.com/datasheet?/data/power/ncl/kdc_cre1.pdf" H 3500 1300 50  0001 C CNN
	1    3500 1800
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D2
U 1 1 60878606
P 7650 3950
F 0 "D2" V 7597 4029 50  0000 L CNN
F 1 "scharf" V 7688 4029 50  0000 L CNN
F 2 "LED_THT:LED_D5.0mm" H 7650 3950 50  0001 C CNN
F 3 "~" H 7650 3950 50  0001 C CNN
	1    7650 3950
	0    1    1    0   
$EndComp
$Comp
L Device:LED D1
U 1 1 6087906D
P 7400 4350
F 0 "D1" V 7500 4550 50  0000 C CNN
F 1 "Motion" V 7400 4600 50  0000 C CNN
F 2 "LED_THT:LED_D5.0mm" H 7400 4350 50  0001 C CNN
F 3 "~" H 7400 4350 50  0001 C CNN
	1    7400 4350
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R3
U 1 1 608795BC
P 7650 4650
F 0 "R3" H 7709 4696 50  0000 L CNN
F 1 "330" H 7709 4605 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" H 7650 4650 50  0001 C CNN
F 3 "~" H 7650 4650 50  0001 C CNN
	1    7650 4650
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R2
U 1 1 608798AA
P 7400 4850
F 0 "R2" H 7459 4896 50  0000 L CNN
F 1 "330" H 7459 4805 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" H 7400 4850 50  0001 C CNN
F 3 "~" H 7400 4850 50  0001 C CNN
	1    7400 4850
	1    0    0    -1  
$EndComp
$Comp
L Connector:Screw_Terminal_01x02 J1
U 1 1 60879D93
P 2050 1850
F 0 "J1" H 1968 1525 50  0000 C CNN
F 1 "Power" H 1968 1616 50  0000 C CNN
F 2 "Connector_Wago250:250-202" H 2050 1850 50  0001 C CNN
F 3 "~" H 2050 1850 50  0001 C CNN
	1    2050 1850
	-1   0    0    1   
$EndComp
$Comp
L Connector:Screw_Terminal_01x03 J3
U 1 1 6087A59B
P 2050 3250
F 0 "J3" H 1968 2925 50  0000 C CNN
F 1 "Bew. Melder" H 1968 3016 50  0000 C CNN
F 2 "Connector_Wago250:250-203" H 2050 3250 50  0001 C CNN
F 3 "~" H 2050 3250 50  0001 C CNN
	1    2050 3250
	-1   0    0    1   
$EndComp
$Comp
L Connector:Screw_Terminal_01x04 J4
U 1 1 6087AB3B
P 2050 4100
F 0 "J4" H 1968 3675 50  0000 C CNN
F 1 "Kontakte" H 1968 3766 50  0000 C CNN
F 2 "Connector_Wago250:250-204" H 2050 4100 50  0001 C CNN
F 3 "~" H 2050 4100 50  0001 C CNN
	1    2050 4100
	-1   0    0    1   
$EndComp
Wire Wire Line
	2600 1850 2600 2000
Wire Wire Line
	2600 2000 3000 2000
Text Notes 1550 1750 0    50   ~ 0
+12V in
Text Notes 1550 1900 0    50   ~ 0
-12v in
Text Notes 1650 3200 0    50   ~ 0
GND
Text Notes 1650 3300 0    50   ~ 0
Signal
Text Notes 1650 3400 0    50   ~ 0
+5V
Text Notes 1550 3950 0    50   ~ 0
Bilge -
Text Notes 1550 4050 0    50   ~ 0
Bilge in
Text Notes 1550 4150 0    50   ~ 0
Reed -
Text Notes 1550 4250 0    50   ~ 0
Reed in
$Comp
L Connector:Screw_Terminal_01x02 J2
U 1 1 6087DA53
P 2050 2550
F 0 "J2" H 1950 2200 50  0000 L CNN
F 1 "Scharf / unscharf" H 2000 2350 50  0000 C TNN
F 2 "Connector_Wago250:250-202" H 2050 2550 50  0001 C CNN
F 3 "~" H 2050 2550 50  0001 C CNN
	1    2050 2550
	-1   0    0    1   
$EndComp
$Comp
L Device:R_Small R1
U 1 1 6087F36F
P 3000 2850
F 0 "R1" H 3059 2896 50  0000 L CNN
F 1 "10k" H 3059 2805 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" H 3000 2850 50  0001 C CNN
F 3 "~" H 3000 2850 50  0001 C CNN
	1    3000 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	4450 1600 4450 2700
Wire Wire Line
	4450 2700 4750 2700
Wire Wire Line
	4000 2000 4000 3150
Wire Wire Line
	4000 3700 4750 3700
Wire Wire Line
	5050 3600 4800 3600
Wire Wire Line
	4800 3600 4800 3700
Connection ~ 4800 3700
Wire Wire Line
	4800 3700 5050 3700
Wire Wire Line
	3900 1600 4000 1600
Connection ~ 4000 1600
Wire Wire Line
	4000 1600 4450 1600
Connection ~ 4450 1600
Wire Wire Line
	4450 1600 5200 1600
Wire Wire Line
	4000 2000 5200 2000
Wire Wire Line
	5400 2000 5400 1700
Wire Wire Line
	5400 1700 5900 1700
Connection ~ 4000 2000
Connection ~ 4000 3150
Wire Wire Line
	4000 3150 4000 3700
Connection ~ 3000 3150
Wire Wire Line
	3000 3150 4000 3150
Wire Wire Line
	2250 3900 3000 3900
Wire Wire Line
	2250 4100 3000 4100
Wire Wire Line
	3000 4100 3000 3900
Connection ~ 3000 3900
Wire Wire Line
	3000 2950 3000 3150
Wire Wire Line
	3000 3150 3000 3900
Wire Wire Line
	2250 2550 3000 2550
Wire Wire Line
	3000 2550 3000 2750
Connection ~ 3000 2550
Wire Wire Line
	3000 2550 3250 2550
Text GLabel 3250 2550 2    50   Output ~ 0
D7
Text GLabel 7200 3400 2    50   Input ~ 0
D7
Wire Wire Line
	7200 3400 6850 3400
$Comp
L power:GND #PWR03
U 1 1 60885CDF
P 4000 4400
F 0 "#PWR03" H 4000 4150 50  0001 C CNN
F 1 "GND" H 4005 4227 50  0000 C CNN
F 2 "" H 4000 4400 50  0001 C CNN
F 3 "" H 4000 4400 50  0001 C CNN
	1    4000 4400
	1    0    0    -1  
$EndComp
Connection ~ 4000 3700
$Comp
L power:+5V #PWR04
U 1 1 6088761C
P 4450 1150
F 0 "#PWR04" H 4450 1000 50  0001 C CNN
F 1 "+5V" H 4465 1323 50  0000 C CNN
F 2 "" H 4450 1150 50  0001 C CNN
F 3 "" H 4450 1150 50  0001 C CNN
	1    4450 1150
	1    0    0    -1  
$EndComp
Wire Wire Line
	4450 1600 4450 1150
$Comp
L power:+5V #PWR02
U 1 1 6088806C
P 3000 2350
F 0 "#PWR02" H 3000 2200 50  0001 C CNN
F 1 "+5V" H 3015 2523 50  0000 C CNN
F 2 "" H 3000 2350 50  0001 C CNN
F 3 "" H 3000 2350 50  0001 C CNN
	1    3000 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	2250 2450 3000 2450
Wire Wire Line
	3000 2450 3000 2350
$Comp
L power:+5V #PWR01
U 1 1 60888B5A
P 2750 3350
F 0 "#PWR01" H 2750 3200 50  0001 C CNN
F 1 "+5V" H 2765 3523 50  0000 C CNN
F 2 "" H 2750 3350 50  0001 C CNN
F 3 "" H 2750 3350 50  0001 C CNN
	1    2750 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	2250 3350 2750 3350
Text GLabel 2400 3250 2    50   Output ~ 0
D8
Wire Wire Line
	2250 3250 2400 3250
Text GLabel 7050 3500 2    50   Input ~ 0
D8
Wire Wire Line
	6850 3500 7050 3500
Wire Wire Line
	4000 3700 4000 4400
Text GLabel 2700 4000 2    50   Output ~ 0
D3
Text GLabel 2700 4200 2    50   Output ~ 0
D2
Wire Wire Line
	2250 4000 2700 4000
Wire Wire Line
	2250 4200 2700 4200
Text GLabel 7200 2900 2    50   Input ~ 0
D2
Text GLabel 7050 3000 2    50   Input ~ 0
D3
Wire Wire Line
	6850 2900 7200 2900
Wire Wire Line
	6850 3000 7050 3000
NoConn ~ 5900 1900
Wire Wire Line
	6850 3800 7650 3800
Wire Wire Line
	6850 3900 7400 3900
Wire Wire Line
	7400 3900 7400 4200
Wire Wire Line
	7650 4100 7650 4550
Wire Wire Line
	7400 4500 7400 4750
Wire Wire Line
	7650 5450 7400 5450
Connection ~ 4750 3700
Wire Wire Line
	4750 3700 4800 3700
Wire Wire Line
	7400 4950 7400 5450
Wire Wire Line
	6800 1600 8600 1600
Wire Wire Line
	8600 1600 8600 3100
Wire Wire Line
	8600 3100 6850 3100
Wire Wire Line
	6800 1700 8450 1700
Wire Wire Line
	8450 1700 8450 3200
Wire Wire Line
	8450 3200 6850 3200
NoConn ~ 6800 1900
$Comp
L power:GND #PWR05
U 1 1 6089F705
P 7150 2150
F 0 "#PWR05" H 7150 1900 50  0001 C CNN
F 1 "GND" H 7155 1977 50  0000 C CNN
F 2 "" H 7150 2150 50  0001 C CNN
F 3 "" H 7150 2150 50  0001 C CNN
	1    7150 2150
	1    0    0    -1  
$EndComp
Wire Wire Line
	6800 1800 7150 1800
Wire Wire Line
	7150 1800 7150 2150
NoConn ~ 5050 2800
NoConn ~ 5050 2950
NoConn ~ 5050 3050
NoConn ~ 5050 3400
NoConn ~ 6850 2700
NoConn ~ 6850 2800
NoConn ~ 6850 3300
NoConn ~ 6850 3600
NoConn ~ 6850 3700
NoConn ~ 6850 4000
NoConn ~ 6850 4100
NoConn ~ 6850 4200
NoConn ~ 6850 4300
NoConn ~ 6850 4400
NoConn ~ 6850 4500
NoConn ~ 6850 4600
NoConn ~ 6850 4700
NoConn ~ 6850 4800
$Comp
L Device:CP C2
U 1 1 608B442C
P 5200 1800
F 0 "C2" H 4850 1900 50  0000 L CNN
F 1 "470µ/16V" H 4700 1700 50  0000 L CNN
F 2 "Capacitor_THT:CP_Radial_D8.0mm_P3.50mm" H 5238 1650 50  0001 C CNN
F 3 "~" H 5200 1800 50  0001 C CNN
	1    5200 1800
	1    0    0    -1  
$EndComp
$Comp
L Device:C C1
U 1 1 608B5DDD
P 4750 2900
F 0 "C1" H 4450 2950 50  0000 L CNN
F 1 "100nf" H 4400 2800 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D5.0mm_W2.5mm_P2.50mm" H 4788 2750 50  0001 C CNN
F 3 "~" H 4750 2900 50  0001 C CNN
	1    4750 2900
	1    0    0    -1  
$EndComp
Wire Wire Line
	5200 1600 5200 1650
Connection ~ 5200 1600
Wire Wire Line
	5200 1600 5900 1600
Wire Wire Line
	4750 2750 4750 2700
Connection ~ 4750 2700
Wire Wire Line
	4750 2700 5050 2700
Wire Wire Line
	4750 3050 4750 3700
Wire Wire Line
	5200 1950 5200 2000
Connection ~ 5200 2000
Wire Wire Line
	5200 2000 5400 2000
$Comp
L power:+5V #PWR0101
U 1 1 608C1AB4
P 8100 5300
F 0 "#PWR0101" H 8100 5150 50  0001 C CNN
F 1 "+5V" H 8115 5473 50  0000 C CNN
F 2 "" H 8100 5300 50  0001 C CNN
F 3 "" H 8100 5300 50  0001 C CNN
	1    8100 5300
	1    0    0    -1  
$EndComp
Wire Wire Line
	8100 5450 7650 5450
Connection ~ 7650 5450
Wire Wire Line
	7650 4750 7650 5450
Wire Wire Line
	8100 5450 8100 5300
$Comp
L arduino:Arduino_nano Ar1
U 1 1 60866DDD
P 5950 3450
F 0 "Ar1" H 5950 4447 60  0000 C CNN
F 1 "Arduino_nano" H 5950 4341 60  0000 C CNN
F 2 "Module:ArduinoNano" H 5950 3450 60  0001 C CNN
F 3 "" H 5950 3450 60  0000 C CNN
	1    5950 3450
	1    0    0    -1  
$EndComp
Wire Wire Line
	2250 1850 2600 1850
Wire Wire Line
	2250 3150 3000 3150
NoConn ~ 5050 3225
$Comp
L Device:Fuse F1
U 1 1 608872A2
P 2675 1600
F 0 "F1" V 2478 1600 50  0000 C CNN
F 1 "2,5A" V 2569 1600 50  0000 C CNN
F 2 "Fuse:Fuseholder_Cylinder-5x20mm_Stelvio-Kontek_PTF78_Horizontal_Open" V 2605 1600 50  0001 C CNN
F 3 "~" H 2675 1600 50  0001 C CNN
	1    2675 1600
	0    1    1    0   
$EndComp
Wire Wire Line
	2825 1600 3000 1600
Wire Wire Line
	2525 1600 2525 1750
Wire Wire Line
	2525 1750 2250 1750
$Comp
L Mechanical:MountingHole H1
U 1 1 6089168C
P 2800 5275
F 0 "H1" H 2900 5321 50  0000 L CNN
F 1 "GSM Module" H 2900 5230 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 2800 5275 50  0001 C CNN
F 3 "~" H 2800 5275 50  0001 C CNN
	1    2800 5275
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H2
U 1 1 6089195A
P 3550 5275
F 0 "H2" H 3650 5321 50  0000 L CNN
F 1 "GSM-Module" H 3650 5230 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 3550 5275 50  0001 C CNN
F 3 "~" H 3550 5275 50  0001 C CNN
	1    3550 5275
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H3
U 1 1 60891F5C
P 4325 5275
F 0 "H3" H 4425 5321 50  0000 L CNN
F 1 "GSM Module" H 4425 5230 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 4325 5275 50  0001 C CNN
F 3 "~" H 4325 5275 50  0001 C CNN
	1    4325 5275
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H4
U 1 1 60898C30
P 2800 5625
F 0 "H4" H 2900 5671 50  0000 L CNN
F 1 "Board" H 2900 5580 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 2800 5625 50  0001 C CNN
F 3 "~" H 2800 5625 50  0001 C CNN
	1    2800 5625
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H5
U 1 1 60898EA1
P 3550 5625
F 0 "H5" H 3650 5671 50  0000 L CNN
F 1 "Board" H 3650 5580 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 3550 5625 50  0001 C CNN
F 3 "~" H 3550 5625 50  0001 C CNN
	1    3550 5625
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H6
U 1 1 60899683
P 4325 5625
F 0 "H6" H 4425 5671 50  0000 L CNN
F 1 "Board" H 4425 5580 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 4325 5625 50  0001 C CNN
F 3 "~" H 4325 5625 50  0001 C CNN
	1    4325 5625
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H7
U 1 1 60899D3B
P 5050 5625
F 0 "H7" H 5150 5671 50  0000 L CNN
F 1 "Board" H 5150 5580 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3" H 5050 5625 50  0001 C CNN
F 3 "~" H 5050 5625 50  0001 C CNN
	1    5050 5625
	1    0    0    -1  
$EndComp
$EndSCHEMATC
