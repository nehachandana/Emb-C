# TEST PLAN:

## Table 1: Low level test plan

| **Test ID** | **Description**                                              | **Exp I/P**   | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-------------- |-------------|----------------|------------------|
|  L_01       |Check if driver is seated                              |Seat check Switch ON|Seat check LED on | PASS          |Requirement based |
|  L_02       |Check if driver is seated status.                              |Seat check Switch OFF|Seat check LED OFF | PASS          |Requirement based |
|  L_03       |Check for the status of heater                                       |Heater switch ON|Heat check LED ON | PASS          |Requirement based |
|  L_04       |Check for the status of heater.                                      |Heater switch OFF|Heat check LED OFF | PASS          |Requirement based |



## Table 2: High level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Temperature control with Knob.                                | Seat Check and Heat Check switches are ON | Temperature shown| PASS         |Requirement based |
|  H_02       | Temperature  with Knob cant be controlled.                                |Any of the Seat Check and Heat Check switches are OFF |Show Nothing| PASS          |Requirement based |
|  H_03       | Temperature  with Knob cant be controlled.                                |Seat Check and Heat Check switches are OFF |Show Nothing| PASS          |Requirement based |