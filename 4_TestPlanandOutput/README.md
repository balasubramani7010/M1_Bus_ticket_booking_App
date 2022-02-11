##  High Level Test Plan

|*Test ID|Description|Exp input|Exp output|Actual Output*|
|----|----|----|---|---|
|H_01| Customer can book tickets|	Choice|SUCCESS|	SUCCESS
|H_02| Customer can know the availability|	Choice|	SUCCESS|	SUCCESS
|H_03|  Customer can cancel the ticket |	Choice|	SUCCESS|	SUCCESS
|H_04|	Customer can check the speed|	Choice|	SUCCESS|	SUCCESS

## Low Level Test Plan

|*Test ID|HL_ID|Description|Exp input|Exp Output|Actual Output*|
|---|---|---|---|---|---|
|L_01|	H_04|	customer can check the speed |	2s|	50km/h|	50km/h
|L_02|	H_01|	customer can book the tickets|	name,ph no|	booked|	booked
