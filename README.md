# E-ink
E-ink software CCS project for Stellar-M3

## Hardware
Stellar-M3: `HS_EL5102-1M_55_02` A Electronic Shelf Lable (ESL) producted by Zhejiang Hanshow Technology Co.,LTD. 

MCU: `CC2640R2F` 

E-paper: `DEPG0213RHS75AF1CP` `(SSD1675B)`

![CC2640R2_STELLAR_M3_A.jpg](/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/boards/CC2640R2_STELLAR_M3/docs/images/CC2640R2_STELLAR_M3_A.jpg)
![CC2640R2_STELLAR_M3_B.jpg](/simplelink_cc2640r2_sdk_5_30_00_03/source/ti/boards/CC2640R2_STELLAR_M3/docs/images/CC2640R2_STELLAR_M3_B.jpg)

## Connection
|CC2640R2F|Stellar-M3|NotesC
|--|--|--|
|DIO_19|SDA|e-paper screen interface
|DIO_18|CK|e-paper screen interface
|DIO_12|CS|e-paper screen interface
|DIO_11|DC|e-paper screen interface
|DIO_10|RST|e-paper screen interface
|DIO_9|BUSY|e-paper screen interface
|DIO_20|POWER_ON| power on the e-paper screen or not
|DIO_21 or DIO_13 ?|Reed Switch|  will read 0 if there is a magnet near
|DIO_6 ?|RED LED|low active
|DIO_7 ?|GREEN LED|low active
|DIO_0 ?|BLUE LED|low active

## Prepare for the CCS project
- Install the simplelink_cc2640r2_sdk_5_30_00_03 from TI.
- Install the CCS Version: 9.1.0.00010 from TI.
- Copy all the files under `/simplelink_cc2640r2_sdk_5_30_00_03` to your `<SDK_INSTALL_DIR>`.
- Import all the CCS projects from `/src` to your CCS workspace.
