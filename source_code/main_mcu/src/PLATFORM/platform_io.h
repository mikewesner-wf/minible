/*!  \file     platform_io.h
*    \brief    Platform IO related functions
*    Created:  10/11/2017
*    Author:   Mathieu Stephan
*/

#ifndef PLATFORM_IO_H_
#define PLATFORM_IO_H_

/* Prototypes */
uint16_t platform_io_get_voledin_conversion_result_and_trigger_conversion(void);
BOOL platform_io_is_voledin_conversion_result_ready(void);
void platform_io_init_bat_adc_measurements(void);
void platform_io_init_accelerometer_ports(void);
void platform_io_init_scroll_wheel_ports(void);
void platform_io_power_up_oled(BOOL power_1v2);
void platform_io_disable_switch_and_die(void);
void platform_io_smc_inserted_function(void);
void platform_io_smc_remove_function(void);
void platform_io_release_aux_reset(void);
void platform_io_smc_switch_to_spi(void);
void platform_io_smc_switch_to_bb(void);
void platform_io_init_flash_ports(void);
void platform_io_init_power_ports(void);
void platform_io_init_oled_ports(void);
void platform_io_power_down_oled(void);
void platform_io_init_smc_ports(void);
void platform_io_init_aux_comms(void);
void platform_io_enable_switch(void);
void platform_io_disable_ble(void);
void platform_io_init_ports(void);
void platform_io_enable_ble(void);

#endif /* PLATFORM_IO_H_ */