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
  \file
  \brief HC32 TIM 定时功能用户配置文件
  \sa am_hwconf_hc32f460_tim_timing.c
 *
 *
  \internal
  \par Modification history
  - 1.00 
  \endinternal
 */

#include "ametal.h"
#include "am_clk.h"
#include "am_gpio.h"
#include "am_hc32f460_clk.h"
#include "am_hc32f460_timea_timing.h"
#include "hc32f460_inum.h"

/**
  \addtogroup am_if_src_hwconf_hc32f460_tim_timing
  \copydoc am_hwconf_hc32f460_tim_timing.c
  @{
 */
 
/*******************************************************************************
  TIM0 配置
*******************************************************************************/

/** \brief TIM0 平台初始化 */
void __hc32f460_plfm_timea1_timing_init (void)
{
    am_clk_enable(CLK_TIMERA_1);
}

/** \brief 解除 TIM0 平台初始化 */
void __hc32f460_plfm_timea1_timing_deinit (void)
{
    am_clk_disable(CLK_TIMERA_1);
}

/** \brief TIM0 设备信息 */
const am_hc32f460_timea_timing_devinfo_t  __g_timea1_timing_devinfo = {
    HC32F460_TMRA1_BASE,                   /**< \brief TIMA寄存器块的基地址 */
    INUM_TIMERA_1,                         /**< \brief TIM0中断编号 */
    timea_count_mode_sawtooth_wave,
    timea_count_dir_up,
    0,                                     /**< \brief 是否开启同步模式(使用同步模式，需要开启TMR1)*/
    __hc32f460_plfm_timea1_timing_init,     /**< \brief 平台初始化函数 */
    __hc32f460_plfm_timea1_timing_deinit    /**< \brief 平台解析初始化函数 */
};

/** \brief TIM0 设备定义 */
am_hc32f460_timea_timing_dev_t __g_timea1_timing_dev;

/** \brief 定时器TIM0 Timing实例初始化，获得Timer标准服务句柄 */
am_timer_handle_t am_hc32f460_timea1_timing_inst_init (void)
{
    return am_hc32f460_timea_timing_init(&__g_timea1_timing_dev,
                                     &__g_timea1_timing_devinfo);
}

/** \brief TIM0 Timing实例解初始化 */
void am_hc32f460_timea1_timing_inst_deinit (am_timer_handle_t handle)
{
    am_hc32f460_timea_timing_deinit(handle);
}


/*******************************************************************************
  TIM0 配置
*******************************************************************************/

/** \brief TIM0 平台初始化 */
void __hc32f460_plfm_timea2_timing_init (void)
{
    am_clk_enable(CLK_TIMERA_2);
}

/** \brief 解除 TIM0 平台初始化 */
void __hc32f460_plfm_timea2_timing_deinit (void)
{
    am_clk_disable(CLK_TIMERA_2);
}

/** \brief TIM0 设备信息 */
const am_hc32f460_timea_timing_devinfo_t  __g_timea2_timing_devinfo = {
    HC32F460_TMRA2_BASE,                   /**< \brief TIMA寄存器块的基地址 */
    INUM_TIMERA_2,                         /**< \brief TIM0中断编号 */
    timea_count_mode_sawtooth_wave,
    timea_count_dir_up,
    1,                                     /**< \brief 是否开启同步模式(使用同步模式，需要开启TMR1)*/
    __hc32f460_plfm_timea2_timing_init,     /**< \brief 平台初始化函数 */
    __hc32f460_plfm_timea2_timing_deinit    /**< \brief 平台解析初始化函数 */
};

/** \brief TIM0 设备定义 */
am_hc32f460_timea_timing_dev_t __g_timea2_timing_dev;

/** \brief 定时器TIM0 Timing实例初始化，获得Timer标准服务句柄 */
am_timer_handle_t am_hc32f460_timea2_timing_inst_init (void)
{
    return am_hc32f460_timea_timing_init(&__g_timea2_timing_dev,
                                     &__g_timea2_timing_devinfo);
}

/** \brief TIM0 Timing实例解初始化 */
void am_hc32f460_timea2_timing_inst_deinit (am_timer_handle_t handle)
{
    am_hc32f460_timea_timing_deinit(handle);
}

/*******************************************************************************
  TIM0 配置
*******************************************************************************/

/** \brief TIM0 平台初始化 */
void __hc32f460_plfm_timea3_timing_init (void)
{
    am_clk_enable(CLK_TIMERA_3);
}

/** \brief 解除 TIM0 平台初始化 */
void __hc32f460_plfm_timea3_timing_deinit (void)
{
    am_clk_disable(CLK_TIMERA_3);
}

/** \brief TIM0 设备信息 */
const am_hc32f460_timea_timing_devinfo_t  __g_timea3_timing_devinfo = {
    HC32F460_TMRA3_BASE,                   /**< \brief TIMA寄存器块的基地址 */
    INUM_TIMERA_3,                         /**< \brief TIM0中断编号 */
    timea_count_mode_sawtooth_wave,
    timea_count_dir_up,
    1,                                     /**< \brief 是否开启同步模式(使用同步模式，需要开启TMR1)*/
    __hc32f460_plfm_timea3_timing_init,     /**< \brief 平台初始化函数 */
    __hc32f460_plfm_timea3_timing_deinit    /**< \brief 平台解析初始化函数 */
};

/** \brief TIM0 设备定义 */
am_hc32f460_timea_timing_dev_t __g_timea3_timing_dev;

/** \brief 定时器TIM0 Timing实例初始化，获得Timer标准服务句柄 */
am_timer_handle_t am_hc32f460_timea3_timing_inst_init (void)
{
    return am_hc32f460_timea_timing_init(&__g_timea3_timing_dev,
                                     &__g_timea3_timing_devinfo);
}

/** \brief TIM0 Timing实例解初始化 */
void am_hc32f460_timea3_timing_inst_deinit (am_timer_handle_t handle)
{
    am_hc32f460_timea_timing_deinit(handle);
}

/*******************************************************************************
  TIM0 配置
*******************************************************************************/

/** \brief TIM0 平台初始化 */
void __hc32f460_plfm_timea4_timing_init (void)
{
    am_clk_enable(CLK_TIMERA_4);
}

/** \brief 解除 TIM0 平台初始化 */
void __hc32f460_plfm_timea4_timing_deinit (void)
{
    am_clk_disable(CLK_TIMERA_4);
}

/** \brief TIM0 设备信息 */
const am_hc32f460_timea_timing_devinfo_t  __g_timea4_timing_devinfo = {
    HC32F460_TMRA4_BASE,                   /**< \brief TIMA寄存器块的基地址 */
    INUM_TIMERA_4,                         /**< \brief TIM0中断编号 */
    timea_count_mode_sawtooth_wave,
    timea_count_dir_up,
    1,                                     /**< \brief 是否开启同步模式(使用同步模式，需要开启TMR1)*/
    __hc32f460_plfm_timea4_timing_init,     /**< \brief 平台初始化函数 */
    __hc32f460_plfm_timea4_timing_deinit    /**< \brief 平台解析初始化函数 */
};

/** \brief TIM0 设备定义 */
am_hc32f460_timea_timing_dev_t __g_timea4_timing_dev;

/** \brief 定时器TIM0 Timing实例初始化，获得Timer标准服务句柄 */
am_timer_handle_t am_hc32f460_timea4_timing_inst_init (void)
{
    return am_hc32f460_timea_timing_init(&__g_timea4_timing_dev,
                                     &__g_timea4_timing_devinfo);
}

/** \brief TIM0 Timing实例解初始化 */
void am_hc32f460_timea4_timing_inst_deinit (am_timer_handle_t handle)
{
    am_hc32f460_timea_timing_deinit(handle);
}

/*******************************************************************************
  TIM0 配置
*******************************************************************************/

/** \brief TIM0 平台初始化 */
void __hc32f460_plfm_timea5_timing_init (void)
{
    am_clk_enable(CLK_TIMERA_5);
}

/** \brief 解除 TIM0 平台初始化 */
void __hc32f460_plfm_timea5_timing_deinit (void)
{
    am_clk_disable(CLK_TIMERA_5);
}

/** \brief TIM0 设备信息 */
const am_hc32f460_timea_timing_devinfo_t  __g_timea5_timing_devinfo = {
    HC32F460_TMRA5_BASE,                   /**< \brief TIMA寄存器块的基地址 */
    INUM_TIMERA_5,                         /**< \brief TIM0中断编号 */
    timea_count_mode_sawtooth_wave,
    timea_count_dir_up,
    1,                                     /**< \brief 是否开启同步模式(使用同步模式，需要开启TMR1)*/
    __hc32f460_plfm_timea5_timing_init,     /**< \brief 平台初始化函数 */
    __hc32f460_plfm_timea5_timing_deinit    /**< \brief 平台解析初始化函数 */
};

/** \brief TIM0 设备定义 */
am_hc32f460_timea_timing_dev_t __g_timea5_timing_dev;

/** \brief 定时器TIM0 Timing实例初始化，获得Timer标准服务句柄 */
am_timer_handle_t am_hc32f460_timea5_timing_inst_init (void)
{
    return am_hc32f460_timea_timing_init(&__g_timea5_timing_dev,
                                     &__g_timea5_timing_devinfo);
}

/** \brief TIM0 Timing实例解初始化 */
void am_hc32f460_timea5_timing_inst_deinit (am_timer_handle_t handle)
{
    am_hc32f460_timea_timing_deinit(handle);
}

/*******************************************************************************
  TIM0 配置
*******************************************************************************/

/** \brief TIM0 平台初始化 */
void __hc32f460_plfm_timea6_timing_init (void)
{
    am_clk_enable(CLK_TIMERA_6);
}

/** \brief 解除 TIM0 平台初始化 */
void __hc32f460_plfm_timea6_timing_deinit (void)
{
    am_clk_disable(CLK_TIMERA_6);
}

/** \brief TIM0 设备信息 */
const am_hc32f460_timea_timing_devinfo_t  __g_timea6_timing_devinfo = {
    HC32F460_TMRA6_BASE,                   /**< \brief TIMA寄存器块的基地址 */
    INUM_TIMERA_6,                         /**< \brief TIM0中断编号 */
    timea_count_mode_sawtooth_wave,
    timea_count_dir_up,
    1,                                     /**< \brief 是否开启同步模式(使用同步模式，需要开启TMR1)*/
    __hc32f460_plfm_timea6_timing_init,     /**< \brief 平台初始化函数 */
    __hc32f460_plfm_timea6_timing_deinit    /**< \brief 平台解析初始化函数 */
};

/** \brief TIM0 设备定义 */
am_hc32f460_timea_timing_dev_t __g_timea6_timing_dev;

/** \brief 定时器TIM0 Timing实例初始化，获得Timer标准服务句柄 */
am_timer_handle_t am_hc32f460_timea6_timing_inst_init (void)
{
    return am_hc32f460_timea_timing_init(&__g_timea6_timing_dev,
                                     &__g_timea6_timing_devinfo);
}

/** \brief TIM0 Timing实例解初始化 */
void am_hc32f460_timea6_timing_inst_deinit (am_timer_handle_t handle)
{
    am_hc32f460_timea_timing_deinit(handle);
}

/**
  @}
 */

/* end of file */
