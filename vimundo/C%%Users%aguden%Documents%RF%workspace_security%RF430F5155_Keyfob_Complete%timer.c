Vim�UnDo� õ�)�Y^x�c����J���y-�s#RԜ�~�  /                               Q�Q�    _�                     �        ����                                                                                                                                                                                                                                                                                                                            �          �          V   Q��Q��    �   �   �          /*}*/�   �   �          	/*TD1CTL0 |= MC_2;*/�   �   �          	/*TD1CCR0 = timerCount - 1;*/�   �   �           �   �   �          	/*}*/�   �   �          		/*TD1CTL0 |= TDIDEX_7;*/�   �   �          		/*TD1CTL0 |= ID__8;*/�   �   �          p		/*timerCount = (unsigned int) (CLOCK_TICK_RATE / (tickRate_HZ * MAX_INPUT_1_DIVIDER * MAX_INPUT_2_DIVIDER));*/�   �   �          		/*}*/�   �   �          			/*tickRate_HZ = 2;*/�   �   �          		/*{*/�   �   �          ?		/*if (tickRate_HZ < 2) // 500 ms slowest allowable tickRate*/�   �   �          	/*{*/�   �   �          "	/*else // max division possible*/�   �   �          	/*}*/�   �   �          		/*}*/�   �   �          			/*timerCount /= 5;*/�   �   �          			/*TD1CTL1 |= TDIDEX_4;*/�   �   �          		/*{*/�   �   �          2		/*if ((tickRate_HZ % 5) == 0) // Prescale by 5*/�   �   �           �   �   �          		/*TD1CTL0 |= ID__8;*/�   �   �          Z		/*timerCount = (unsigned int) (CLOCK_TICK_RATE / (tickRate_HZ * MAX_INPUT_1_DIVIDER));*/�   �   �          	/*{*/�   �   �           	/*else if (tickRate_HZ >= 10)*/�   �   �          	/*}*/�   �   �          		/*}*/�   �   �          			/*timerCount /= 5;*/�   �   �          			/*TD1CTL1 |= TDIDEX_4;*/�   �   �          		/*{*/�   �   �          7		/*else if ((tickRate_HZ % 5) == 0) // Prescale by 5*/�   �   �          		/*}*/�   �   �          			/*timerCount /= 8;*/�   �   �          			/*TD1CTL0 |= ID__8;*/�   �   �          		/*{*/�   �   �          b		/*if ((tickRate_HZ % MAX_INPUT_1_DIVIDER) == 0) // Can prescale timer - divide by 8 (optimize)*/�   �   �          B		/*timerCount = (unsigned int) (CLOCK_TICK_RATE / tickRate_HZ);*/�   �   �          	/*{*/�   �   �          R	/*if (tickRate_HZ >= 100)	// Max Hz timer can handle without necessary division*/�   �   �           �   �   �          	/*TD1CCTL0 |= CCIE;*/�   �   �           �   �   �          	/*TD1CTL1 = TDCLKM_0;*/�   �   �          .	/*TD1CTL0 = TDSSEL_2 + MC_0 + TDCLR + TDIE;*/�   �   �           �   �   �          (	/*SysTickCounter.uiTimerHighBits = 0;*/�   �   �          '	/*SysTickCounter.ulTimerLowBits = 0;*/�   �   �           �   �   �          !	/*unsigned int timerCount = 0;*/�   �   �          /*{*/�   �   �          6/*void Timer_Init_SysTick(unsigned long tickRate_HZ)*/5�_�                           ����                                                                                                                                                                                                                                                                                                                            �          �          V   Q��Q��    �              $	/*SW_State.b1_SysTickWake = true;*/5�_�                           ����                                                                                                                                                                                                                                                                                                                            �          �          V   Q�Q�    �               	SW_State.b1_SysTickWake = true;5�_�                           ����                                                                                                                                                                                                                                                                                                                            �          �          V   Q�Q�    �              	LPM4_EXIT;5�_�                           ����                                                                                                                                                                                                                                                                                                                            �          �          V   Q��Q��     �              	/*UHF_LED_TOGGLE;*/5�_�                           ����                                                                                                                                                                                                                                                                                                                            �          �          V   Q��Q��     �              	UHF_LED_TOGGLE;5�_�                           ����                                                                                                                                                                                                                                                                                                                            �          �          V   Q��Q��    �              	/*UHF_LED_TOGGLE;*/5�_�      	                     ����                                                                                                                                                                                                                                                                                                                            �          �          V   Q�#Q�#     �              	/*LPM4_EXIT;*/5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                            �          �          V   Q�$Q�$     �              	/*[>LPM4_EXIT;<]*/5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                            �          �          V   Q�$Q�$    �              	/*LPM4_EXIT;*/5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                              V   	Q��Q��     �              //	_BIS_SR(GIE);�              //			P1IFG &= ~BIT7;�              A//			P1IE |= BIT7;		       				// enable interrupt on WAKE signal�              B//	_BIC_SR(GIE);				       		// clear general interrupt enable bit5�_�                           ����                                                                                                                                                                                                                                                                                                                                              V   	Q��Q��    �              	LPM4_EXIT;5�_�                           ����                                                                                                                                                                                                                                                                                                                                              V   	Q��Q��     �      /    5�_�                           ����                                                                                                                                                                                                                                                                                                                                              V   	Q��Q��    �      0       5�_�                          ����                                                                                                                                                                                                                                                                                                                                              V   	Q�Q�     �      0      	_bis_SR_register(5�_�                          ����                                                                                                                                                                                                                                                                                                                                              V   	Q�Q�   
 �      0      	_bic_SR_register(5�_�                          ����                                                                                                                                                                                                                                                                                                                                              V   	Q�Q�     �              	_BIS_SR(GIE);5�_�                           ����                                                                                                                                                                                                                                                                                                                                              V   	Q�Q�     �      /    5�_�                            ����                                                                                                                                                                                                                                                                                                                                              V   	Q�Q�    �               5��