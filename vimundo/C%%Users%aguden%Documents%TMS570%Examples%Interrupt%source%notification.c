Vim�UnDo� ��^()�'A;=�H�H�h�<�Йtz(��{�   �       E                       P�\�P�\�    _�                             ����                                                                                                                                                                                                                                                                                                                                                         P�V+P�V+     �      
          D*   notification function or place their code sequence in this file �      	          C*   The user needs to either remove this file and use their custom �                C*   linker errors, Driver expects user to define the notification. �                 /** @file notification.c 5�_�                    A        ����                                                                                                                                                                                                                                                                                                                                                         P�WGP�WG     �   @   B   W    5�_�                    A        ����                                                                                                                                                                                                                                                                                                                                                         P�WIP�WI    �   @   B   X       5�_�                    A       ����                                                                                                                                                                                                                                                                                                                                                         P�WPP�WP     �   @   B   X      	gioSetBit()5�_�                    A       ����                                                                                                                                                                                                                                                                                                                                                         P�WSP�WS    �   @   B   X      	gioSetBit();5�_�                            ����                                                                                                                                                                                                                                                                                                                                                         P�Z]P�Z]     �      
          D*   notification function or place their code sequence in this file �      	          C*   The user needs to either remove this file and use their custom �                C*   linker errors, Driver expects user to define the notification. �                 /** @file notification.c �               X   /** @file notification.c   ,*   @brief User Notification Definition File   *   @date 15.Jun.2012   *   @version 03.01.02   *   >*   This file  defines  empty  notification  routines to avoid   B*   linker errors, Driver expects user to define the notification.   B*   The user needs to either remove this file and use their custom   C*   notification function or place their code sequence in this file   ;*   between the provided USER CODE BEGIN and USER CODE END.   *   */       /* Include Files */       #include "esm.h"   #include "sys_selftest.h"   #include "gio.h"   /* USER CODE BEGIN (0) */   /* USER CODE END */       ,void esmGroup1Notification(uint32_t channel)   {   E/*  enter user code between the USER CODE BEGIN and USER CODE END. */   /* USER CODE BEGIN (1) */   /* USER CODE END */   }       /* USER CODE BEGIN (2) */   /* USER CODE END */       ,void esmGroup2Notification(uint32_t channel)   {   E/*  enter user code between the USER CODE BEGIN and USER CODE END. */   /* USER CODE BEGIN (3) */   /* USER CODE END */   }       /* USER CODE BEGIN (4) */   /* USER CODE END */       pvoid memoryPort0TestFailNotification(uint32_t groupSelect, uint32_t dataSelect, uint32_t address, uint32_t data)   {   E/*  enter user code between the USER CODE BEGIN and USER CODE END. */   /* USER CODE BEGIN (5) */   /* USER CODE END */   }       /* USER CODE BEGIN (6) */   /* USER CODE END */       pvoid memoryPort1TestFailNotification(uint32_t groupSelect, uint32_t dataSelect, uint32_t address, uint32_t data)   {   E/*  enter user code between the USER CODE BEGIN and USER CODE END. */   /* USER CODE BEGIN (7) */   /* USER CODE END */   }       /* USER CODE BEGIN (8) */   /* USER CODE END */   "void gioNotification(uint32_t bit)   {   E/*  enter user code between the USER CODE BEGIN and USER CODE END. */   /* USER CODE BEGIN (19) */   	gioSetBit(gioPORTA, bit, 0);   /* USER CODE END */   }       /* USER CODE BEGIN (20) */   /* USER CODE END */                   /* USER CODE BEGIN (43) */   /* USER CODE END */           /* USER CODE BEGIN (47) */   /* USER CODE END */           /* USER CODE BEGIN (50) */   /* USER CODE END */           /* USER CODE BEGIN (53) */   /* USER CODE END */5�_�                            ����                                                                                                                                                                                                                                                                                                                                                         P�[�P�[�     �   I   K          9void sciNotification(sciBASE_t *sci, uint32_t flags)     �      
          D*   notification function or place their code sequence in this file �      	          C*   The user needs to either remove this file and use their custom �                C*   linker errors, Driver expects user to define the notification. �                 /** @file notification.c �               X   /** @file notification.c   ,*   @brief User Notification Definition File   *   @date 15.Jun.2012   *   @version 03.01.02   *   >*   This file  defines  empty  notification  routines to avoid   B*   linker errors, Driver expects user to define the notification.   B*   The user needs to either remove this file and use their custom   C*   notification function or place their code sequence in this file   ;*   between the provided USER CODE BEGIN and USER CODE END.   *   */       /* Include Files */       #include "esm.h"   #include "sys_selftest.h"   #include "gio.h"   /* USER CODE BEGIN (0) */   /* USER CODE END */       ,void esmGroup1Notification(uint32_t channel)   {   E/*  enter user code between the USER CODE BEGIN and USER CODE END. */   /* USER CODE BEGIN (1) */   /* USER CODE END */   }       /* USER CODE BEGIN (2) */   /* USER CODE END */       ,void esmGroup2Notification(uint32_t channel)   {   E/*  enter user code between the USER CODE BEGIN and USER CODE END. */   /* USER CODE BEGIN (3) */   /* USER CODE END */   }       /* USER CODE BEGIN (4) */   /* USER CODE END */       pvoid memoryPort0TestFailNotification(uint32_t groupSelect, uint32_t dataSelect, uint32_t address, uint32_t data)   {   E/*  enter user code between the USER CODE BEGIN and USER CODE END. */   /* USER CODE BEGIN (5) */   /* USER CODE END */   }       /* USER CODE BEGIN (6) */   /* USER CODE END */       pvoid memoryPort1TestFailNotification(uint32_t groupSelect, uint32_t dataSelect, uint32_t address, uint32_t data)   {   E/*  enter user code between the USER CODE BEGIN and USER CODE END. */   /* USER CODE BEGIN (7) */   /* USER CODE END */   }       /* USER CODE BEGIN (8) */   /* USER CODE END */   "void gioNotification(uint32_t bit)   {   E/*  enter user code between the USER CODE BEGIN and USER CODE END. */   /* USER CODE BEGIN (19) */   	gioSetBit(gioPORTA, bit, 0);   /* USER CODE END */   }       /* USER CODE BEGIN (20) */   /* USER CODE END */                   /* USER CODE BEGIN (43) */   /* USER CODE END */           /* USER CODE BEGIN (47) */   /* USER CODE END */           /* USER CODE BEGIN (50) */   /* USER CODE END */           /* USER CODE BEGIN (53) */   /* USER CODE END */5�_�      	              >        ����                                                                                                                                                                                                                                                                                                                                                         P�\�P�\�     �   =   ?   �    5�_�      
           	   >        ����                                                                                                                                                                                                                                                                                                                                                         P�\�P�\�    �   =   ?   �       5�_�   	              
   D       ����                                                                                                                                                                                                                                                                                                                                                         P�\�P�\�     �   C   E          	gioSetBit(gioPORTA, bit, 0);5�_�   
                 D       ����                                                                                                                                                                                                                                                                                                                                                         P�\�P�\�     �   D   F   �    5�_�                     E        ����                                                                                                                                                                                                                                                                                                                                                         P�\�P�\�    �   D   F   �       5��