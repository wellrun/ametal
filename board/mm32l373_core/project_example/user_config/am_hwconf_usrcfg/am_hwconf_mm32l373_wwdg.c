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
 * \brief MM32L373 WWDT 用户配置文件
 * \sa am_hwconf_mm32l373_wwdg.c
 *
 * \internal
 * \par Modification history
 * - 1.00 17-08-24  zcb, first implementation
 * \endinternal
 */

#include "am_mm32_wwdg.h"
#include "am_mm32l373.h"
#include "am_mm32l373_clk.h"
#include "amhw_mm32l373_rcc.h"

/**
 * \addtogroup am_if_src_hwconf_mm32l373_wwdg
 * \copydoc am_hwconf_mm32l373_wwdg.c
 * @{
 */

/** \brief WWDT 平台初始化 */
static void __mm32l373_wwdg_plfm_init (void)
{
    am_clk_enable(CLK_WWDG);
    am_mm32l373_clk_reset(CLK_WWDG);

    /* 检查复位是否由看门狗造成的 */
    if (amhw_mm32l373_rcc_reset_flag() & AMHW_MM32L373_RCC_CSR_WWDGRSTF) {
        amhw_mm32l373_rcc_reset_flag_clear();
    }
}

/** \brief 解除WWDT 平台初始化 */
static void __mm32l373_wwdg_plfm_deinit (void)
{
    am_clk_disable(CLK_WWDG);
}

/** \brief WWDT 设备信息 */
static const am_mm32_wwdg_devinfo_t  __g_wwdg_devinfo = {
    MM32L373_WWDG_BASE,          /**< \brief WWDT寄存器基址 */
    CLK_WWDG,                  /**< \brief 时钟ID */
    __mm32l373_wwdg_plfm_init,   /**< \brief WWDT 平台初始化 */
    __mm32l373_wwdg_plfm_deinit, /**< \brief 解除WWDT 平台初始化 */
};

/** \brief WWDT设备实例 */
static am_mm32_wwdg_dev_t __g_wwdg_dev;

/**
 * \brief WWDT 实例初始化，获得WDT标准服务句柄
 */
am_wdt_handle_t am_mm32l373_wwdg_inst_init (void)
{
    return am_mm32_wwdg_init(&__g_wwdg_dev, &__g_wwdg_devinfo);
}

/**
 * \brief WWDT 实例解初始化
 */
void am_mm32l373_wwdg_inst_deinit (am_wdt_handle_t handle)
{
    am_mm32_wwdg_deinit(handle);
}

/**
 * @}
 */

/* end of file */
