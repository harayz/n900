/*
 * OMAP on-chip devices present on OMAP2/3
 *
 * Copyright (C) 2007-2008 Texas Instruments, Inc.
 * Copyright (C) 2007-2008 Nokia Corporation
 * Paul Walmsley
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#ifndef ARCH_ARM_MACH_OMAP2_OMAPDEV_COMMON_H
#define ARCH_ARM_MACH_OMAP2_OMAPDEV_COMMON_H

#include <mach/omapdev.h>

#include "omapdev242x.h"
#include "omapdev243x.h"
#include "omapdev3xxx.h"

static struct omapdev *omapdevs[] = {

#ifdef CONFIG_ARCH_OMAP2420
	&mpu_242x_omapdev,
	&iva_242x_omapdev,
	&gfx_242x_omapdev,
	&prcm_242x_omapdev,
	&l3_242x_omapdev,
	&l4_core_242x_omapdev,
	&dsp_242x_omapdev,
	&dsp_mmu_242x_omapdev,
	&control_242x_omapdev,
	&tap_242x_omapdev,
	&gpio2_242x_omapdev,
	&gpio3_242x_omapdev,
	&gpio4_242x_omapdev,
	&gptimer12_242x_omapdev,
	&uart3_242x_omapdev,
	&mcbsp2_242x_omapdev,
	&wdtimer4_242x_omapdev,
	&gptimer2_242x_omapdev,
	&gptimer3_242x_omapdev,
	&gptimer4_242x_omapdev,
	&gptimer5_242x_omapdev,
	&gptimer6_242x_omapdev,
	&gptimer7_242x_omapdev,
	&gptimer8_242x_omapdev,
	&gptimer9_242x_omapdev,
	&etb_242x_omapdev,
	&cwt_242x_omapdev,
	&xti_242x_omapdev,
	&dap_242x_omapdev,
	&dsi_242x_omapdev,
	&dsi_pll_242x_omapdev,
	&dss_242x_omapdev,
	&dispc_242x_omapdev,
	&rfbi_242x_omapdev,
	&venc_242x_omapdev,
	&fac_242x_omapdev,
	&cam_242x_omapdev,
	&cam_core_242x_omapdev,
	&cam_dma_242x_omapdev,
	&cam_mmu_242x_omapdev,
	&mpu_intc_242x_omapdev,
	&sms_242x_omapdev,
	&gpmc_242x_omapdev,
	&sdrc_242x_omapdev,
	&ocm_ram_242x_omapdev,
	&ocm_rom_242x_omapdev,
	&ssi_242x_omapdev,
	&ohci_242x_omapdev,
	&otg_242x_omapdev,
	&sdma_242x_omapdev,
	&i2c1_242x_omapdev,
	&i2c2_242x_omapdev,
	&uart1_242x_omapdev,
	&uart2_242x_omapdev,
	&mcbsp1_242x_omapdev,
	&gptimer10_242x_omapdev,
	&gptimer11_242x_omapdev,
	&mailbox_242x_omapdev,
	&mcspi1_242x_omapdev,
	&mcspi2_242x_omapdev,
	&mg_242x_omapdev,
	&hdq_242x_omapdev,
	&mspro_242x_omapdev,
	&wdtimer3_242x_omapdev,
	&vlynq_242x_omapdev,
	&eac_242x_omapdev,
	&mmc_242x_omapdev,
	&gptimer1_242x_omapdev,
	&omap_32ksynct_242x_omapdev,
	&gpio1_242x_omapdev,
	&wdtimer2_242x_omapdev,
	&wdtimer1_242x_omapdev,
	&rng_242x_omapdev,
	&sha1md5_242x_omapdev,
	&des_242x_omapdev,
	&aes_242x_omapdev,
	&pka_242x_omapdev,
#endif

#ifdef CONFIG_ARCH_OMAP2430
	&mpu_243x_omapdev,
	&iva2_243x_omapdev,
	&iva2_mmu_243x_omapdev,
	&gfx_243x_omapdev,
	&l3_243x_omapdev,
	&l4_core_243x_omapdev,
	&l4_wkup_243x_omapdev,
	&dsp_243x_omapdev,
	&control_243x_omapdev,
	&tap_243x_omapdev,
	&gpio2_243x_omapdev,
	&gpio3_243x_omapdev,
	&gpio4_243x_omapdev,
	&gptimer12_243x_omapdev,
	&uart3_243x_omapdev,
	&mcbsp2_243x_omapdev,
	&wdtimer4_243x_omapdev,
	&gptimer2_243x_omapdev,
	&gptimer3_243x_omapdev,
	&gptimer4_243x_omapdev,
	&gptimer5_243x_omapdev,
	&gptimer6_243x_omapdev,
	&gptimer7_243x_omapdev,
	&gptimer8_243x_omapdev,
	&gptimer9_243x_omapdev,
	&etb_243x_omapdev,
	&cwt_243x_omapdev,
	&xti_243x_omapdev,
	&dap_243x_omapdev,
	&dsi_243x_omapdev,
	&dsi_pll_243x_omapdev,
	&dss_243x_omapdev,
	&dispc_243x_omapdev,
	&rfbi_243x_omapdev,
	&venc_243x_omapdev,
	&fac_243x_omapdev,
	&cam_243x_omapdev,
	&cam_core_243x_omapdev,
	&cam_dma_243x_omapdev,
	&cam_mmu_243x_omapdev,
	&mpu_intc_243x_omapdev,
	&modem_intc_243x_omapdev,
	&sms_243x_omapdev,
	&gpmc_243x_omapdev,
	&sdrc_243x_omapdev,
	&ocm_ram_243x_omapdev,
	&ocm_rom_243x_omapdev,
	&sad2d_243x_omapdev,
	&ssi_243x_omapdev,
	&ohci_243x_omapdev,
	&fsotg_243x_omapdev,
	&hsotg_243x_omapdev,
	&sdma_243x_omapdev,
	&i2c1_243x_omapdev,
	&i2c2_243x_omapdev,
	&uart1_243x_omapdev,
	&uart2_243x_omapdev,
	&mcbsp1_243x_omapdev,
	&gptimer10_243x_omapdev,
	&gptimer11_243x_omapdev,
	&mailbox_243x_omapdev,
	&mcspi1_243x_omapdev,
	&mcspi2_243x_omapdev,
	&mg_243x_omapdev,
	&hdq_243x_omapdev,
	&mspro_243x_omapdev,
	&mcbsp5_243x_omapdev,
	&hsmmc1_243x_omapdev,
	&hsmmc2_243x_omapdev,
	&mcspi3_243x_omapdev,
	&gptimer1_243x_omapdev,
	&prm_243x_omapdev,
	&cm_243x_omapdev,
	&omap_32ksynct_243x_omapdev,
	&gpio1_243x_omapdev,
	&wdtimer2_243x_omapdev,
	&wdtimer1_243x_omapdev,
	&rng_243x_omapdev,
	&sha1md5_243x_omapdev,
	&des_243x_omapdev,
	&aes_243x_omapdev,
	&pka_243x_omapdev,
	&modem_243x_omapdev,
	&icr_243x_omapdev,
	&mcbsp3_243x_omapdev,
	&mcbsp4_243x_omapdev,
	&gpio5_243x_omapdev,
#endif

#ifdef CONFIG_ARCH_OMAP3
	&mpu_3xxx_omapdev,
	&iva2_3xxx_omapdev,
	&iva2_mmu_3xxx_omapdev,
	&gfx_3xxx_omapdev,
	&l3_3xxx_omapdev,
	&l4_core_3xxx_omapdev,
	&l4_wkup_3xxx_omapdev,
	&mpu_intc_3xxx_omapdev,
	&modem_intc_3xxx_omapdev,
	&sms_3xxx_omapdev,
	&gpmc_3xxx_omapdev,
	&sdrc_3xxx_omapdev,
	&ocm_ram_3xxx_omapdev,
	&ocm_rom_3xxx_omapdev,
	&sad2d_3xxx_omapdev,
	&ssi_3xxx_omapdev,
	&sdma_3xxx_omapdev,
	&i2c1_3xxx_omapdev,
	&i2c2_3xxx_omapdev,
	&uart1_3xxx_omapdev,
	&uart2_3xxx_omapdev,
	&mcbsp1_3xxx_omapdev,
	&gptimer10_3xxx_omapdev,
	&gptimer11_3xxx_omapdev,
	&mailbox_3xxx_omapdev,
	&mcspi1_3xxx_omapdev,
	&mcspi2_3xxx_omapdev,
	&mg_3xxx_omapdev,
	&hdq_3xxx_omapdev,
	&mspro_3xxx_omapdev,
	&mcbsp5_3xxx_omapdev,
	&hsmmc1_3xxx_omapdev,
	&hsmmc2_3xxx_omapdev,
	&mcspi3_3xxx_omapdev,
	&gptimer1_3xxx_omapdev,
	&prm_3xxx_omapdev,
	&cm_3xxx_omapdev,
	&omap_32ksynct_3xxx_omapdev,
	&gpio1_3xxx_omapdev,
	&wdtimer2_3xxx_omapdev,
	&wdtimer1_3xxx_omapdev,
	&rng_3xxx_omapdev,
	&sha1md5_3xxx_omapdev,
	&des_3xxx_omapdev,
	&aes_3xxx_omapdev,
	&pka_3xxx_omapdev,
	&neon_3xxx_omapdev,
	&sgx_3xxx_omapdev,
	&l4_per_3xxx_omapdev,
	&l4_emu_3xxx_omapdev,
	&icr_3xxx_omapdev,
	&wugen_3xxx_omapdev,
	&mad2d_3xxx_omapdev,
	&control_3xxx_omapdev,
	&i2c3_3xxx_omapdev,
	&hsmmc3_3xxx_omapdev,
	&mcspi4_3xxx_omapdev,
	&sr1_3xxx_omapdev,
	&sr2_3xxx_omapdev,
	&usbhost_es1_3xxx_omapdev,
	&usbotg_es1_3xxx_omapdev,
	&uart3_3xxx_omapdev,
	&mcbsp2_3xxx_omapdev,
	&mcbsp3_3xxx_omapdev,
	&mcbsp4_3xxx_omapdev,
	&mcbsp2_sidetone_3xxx_omapdev,
	&mcbsp3_sidetone_3xxx_omapdev,
	&wdtimer3_3xxx_omapdev,
	&gptimer2_3xxx_omapdev,
	&gptimer3_3xxx_omapdev,
	&gptimer4_3xxx_omapdev,
	&gptimer5_3xxx_omapdev,
	&gptimer6_3xxx_omapdev,
	&gptimer7_3xxx_omapdev,
	&gptimer8_3xxx_omapdev,
	&gptimer9_3xxx_omapdev,
	&gpio2_3xxx_omapdev,
	&gpio3_3xxx_omapdev,
	&gpio4_3xxx_omapdev,
	&gpio5_3xxx_omapdev,
	&gpio6_3xxx_omapdev,
	&tap_3xxx_omapdev,
	&mpuemu_3xxx_omapdev,
	&tpiu_3xxx_omapdev,
	&etb_3xxx_omapdev,
	&dapctl_3xxx_omapdev,
	&sdti_3xxx_omapdev,
	&dap_3xxx_omapdev,
	&usbhost_3xxx_omapdev,
	&usbotg_3xxx_omapdev,
	&usbtll_3xxx_omapdev,
	&dsi_3xxx_omapdev,
	&dsi_phy_3xxx_omapdev,
	&dsi_pll_3xxx_omapdev,
	&dss_3xxx_omapdev,
	&dispc_3xxx_omapdev,
	&rfbi_3xxx_omapdev,
	&venc_3xxx_omapdev,
	&isp_3xxx_omapdev,
	&isp_cbuff_3xxx_omapdev,
	&ccp2_3xxx_omapdev,
	&ccdc_3xxx_omapdev,
	&hist_3xxx_omapdev,
	&h3a_3xxx_omapdev,
	&prv_3xxx_omapdev,
	&rsz_3xxx_omapdev,
	&sbl_3xxx_omapdev,
	&csi2_3xxx_omapdev,
#endif

	NULL,
};

#endif