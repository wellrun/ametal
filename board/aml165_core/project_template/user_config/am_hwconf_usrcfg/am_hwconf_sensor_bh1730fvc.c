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
 * \brief 传感器 BH1730FVC 配置文件
 *
 * \internal
 * \par Modification history
 * - 1.00 19-02-22  yrz, first implementation.
 * \endinternal
 */

#include <am_aml165_inst_init.h>
#include "am_sensor_bh1730fvc.h"
#include "am_common.h"
#include "zlg116_pin.h"

/** \brief 传感器 BH1730FVC 设备信息实例 */
am_const am_local struct am_sensor_bh1730fvc_devinfo __g_bh1730fvc_info = {
    PIOB_0,            /*< \brief 触发引脚定义    */
    0x29               /*< \breif BH1730FVC I2C地址 */
};

/** \breif 传感器 BH1730FVC 设备结构体定义 */
am_local struct am_sensor_bh1730fvc_dev __g_bh1730fvc_dev;

/** \brief 传感器 BH1730FVC 设备实例化 */
am_sensor_handle_t am_sensor_bh1730fvc_inst_init (void)
{
    return am_sensor_bh1730fvc_init(&__g_bh1730fvc_dev,
                                    &__g_bh1730fvc_info,
                                    am_zlg116_i2c1_inst_init());
}

/** \brief 传感器 BH1730FVC 实例解初始化 */
am_err_t am_sensor_bh1730fvc_inst_deinit (am_sensor_handle_t handle)
{
    return am_sensor_bh1730fvc_deinit(handle);
}

/* end of file */
