/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief TIM2 ��ʱ�� PWM ���̣�ͨ����׼�ӿ�ʵ��
 *
 * - ʵ������
 *   1. PIOA_0(TIM2_CH1)��� 2KHz �� PWM��ռ�ձ�Ϊ 50%��
 *
 * \par Դ����
 * \snippet demo_aml166_core_std_tim2_pwm.c src_aml166_core_std_tim2_pwm
 *
 * \internal
 * \par Modification history
 * - 1.00 17-04-22  nwt, first implementation
 * \endinternal
 */ 

/**
 * \addtogroup demo_if_aml166_core_std_tim2_pwm
 * \copydoc demo_aml166_core_std_tim2_pwm.c
 */

/** [src_aml166_core_std_tim2_pwm] */
#include <am_aml166_inst_init.h>
#include "ametal.h"
#include "am_vdebug.h"
#include "am_zlg_tim_pwm.h"
#include "demo_std_entries.h"
#include "demo_aml166_core_entries.h"

/**
 * \brief �������
 */
void demo_aml166_core_std_tim2_pwm_entry (void)
{
    AM_DBG_INFO("demo aml166_core std tim2 pwm!\r\n");

    demo_std_timer_pwm_entry(am_zlg116_tim2_pwm_inst_init(), AM_ZLG_TIM_PWM_CH1);
}
/** [src_aml166_core_std_tim2_pwm] */

/* end of file */