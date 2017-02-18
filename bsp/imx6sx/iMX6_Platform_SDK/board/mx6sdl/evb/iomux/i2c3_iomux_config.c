/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// File: i2c3_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.0
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for i2c3 module.
void i2c3_iomux_config(void)
{
    // Config i2c3.I2C3_SCL to pad GPIO05(R4)
    // HW_IOMUXC_SW_MUX_CTL_PAD_GPIO05_WR(0x00000016);
    // HW_IOMUXC_SW_PAD_CTL_PAD_GPIO05_WR(0x0001B0B0);
    // HW_IOMUXC_I2C3_SCL_IN_SELECT_INPUT_WR(0x00000002);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_GPIO05(0x020E0230)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: esai signal: ESAI_TX2_RX3
    //     ALT2 (2) - Select instance: kpp signal: KEY_ROW7
    //     ALT3 (3) - Select instance: ccm signal: CCM_CLKO1
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO05
    //     ALT6 (6) - Select instance: i2c3 signal: I2C3_SCL
    //     ALT7 (7) - Select instance: arm signal: ARM_EVENTI
    HW_IOMUXC_SW_MUX_CTL_PAD_GPIO05_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_GPIO05_SION_V(ENABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_GPIO05_MUX_MODE_V(ALT6));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_GPIO05(0x020E0600)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_GPIO05_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO05_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO05_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO05_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO05_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO05_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO05_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO05_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO05_SRE_V(SLOW));
    // Pad GPIO05 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_I2C3_SCL_IN_SELECT_INPUT(0x020E0878)
    //   DAISY [1:0] - MUX Mode Select Field Reset: EIM_DATA17_ALT6
    //                 Selecting Pads Involved in Daisy Chain.
    //     EIM_DATA17_ALT6 (0) - Select signal i2c3 I2C3_SCL as input from pad EIM_DATA17(ALT6).
    //     GPIO03_ALT2 (1) - Select signal i2c3 I2C3_SCL as input from pad GPIO03(ALT2).
    //     GPIO05_ALT6 (2) - Select signal i2c3 I2C3_SCL as input from pad GPIO05(ALT6).
    HW_IOMUXC_I2C3_SCL_IN_SELECT_INPUT_WR(
            BF_IOMUXC_I2C3_SCL_IN_SELECT_INPUT_DAISY_V(GPIO05_ALT6));

    // Config i2c3.I2C3_SDA to pad GPIO16(R2)
    // HW_IOMUXC_SW_MUX_CTL_PAD_GPIO16_WR(0x00000016);
    // HW_IOMUXC_SW_PAD_CTL_PAD_GPIO16_WR(0x0001B0B0);
    // HW_IOMUXC_I2C3_SDA_IN_SELECT_INPUT_WR(0x00000001);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_GPIO16(0x020E0214)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: esai signal: ESAI_TX3_RX2
    //     ALT1 (1) - Select instance: enet signal: ENET_1588_EVENT2_IN
    //     ALT2 (2) - Select instance: enet signal: ENET_REF_CLK
    //     ALT3 (3) - Select instance: usdhc1 signal: SD1_LCTL
    //     ALT4 (4) - Select instance: spdif signal: SPDIF_IN
    //     ALT5 (5) - Select instance: gpio7 signal: GPIO7_IO11
    //     ALT6 (6) - Select instance: i2c3 signal: I2C3_SDA
    //     ALT7 (7) - Select instance: sjc signal: JTAG_DE_B
    HW_IOMUXC_SW_MUX_CTL_PAD_GPIO16_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_GPIO16_SION_V(ENABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_GPIO16_MUX_MODE_V(ALT6));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_GPIO16(0x020E05E4)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_GPIO16_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_SRE_V(SLOW));
    // Pad GPIO16 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_I2C3_SDA_IN_SELECT_INPUT(0x020E087C)
    //   DAISY [1:0] - MUX Mode Select Field Reset: EIM_DATA18_ALT6
    //                 Selecting Pads Involved in Daisy Chain.
    //     EIM_DATA18_ALT6 (0) - Select signal i2c3 I2C3_SDA as input from pad EIM_DATA18(ALT6).
    //     GPIO16_ALT6 (1) - Select signal i2c3 I2C3_SDA as input from pad GPIO16(ALT6).
    //     GPIO06_ALT2 (2) - Select signal i2c3 I2C3_SDA as input from pad GPIO06(ALT2).
    HW_IOMUXC_I2C3_SDA_IN_SELECT_INPUT_WR(
            BF_IOMUXC_I2C3_SDA_IN_SELECT_INPUT_DAISY_V(GPIO16_ALT6));
}
