/*
 * Copyright (c) 2023 STMicroelectronics
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_FLASH_OSPI_STM32_H_
#define ZEPHYR_DRIVERS_FLASH_OSPI_STM32_H_

#if defined(CONFIG_SOC_SERIES_STM32H5X)

#define NbData DataLength
#define AddressSize AddressWidth
#define InstructionDtrMode InstructionDTRMode
#define AddressDtrMode AddressDTRMode
#define DataDtrMode DataDTRMode
#define InstructionSize InstructionWidth
#define FifoThreshold FifoThresholdByte
#define ChipSelectHighTime ChipSelectHighTimeCycle
#define FlashId IOSelect
#define Match MatchValue
#define Mask MatchMask
#define Interval IntervalTime
#define DeviceSize MemorySize
#define DualQuad MemoryMode

#define OSPI_InitTypeDef XSPI_InitTypeDef
#define OSPI_HandleTypeDef XSPI_HandleTypeDef
#define OSPI_RegularCmdTypeDef XSPI_RegularCmdTypeDef
#define OSPI_AutoPollingTypeDef XSPI_AutoPollingTypeDef

#define HAL_OSPI_Init HAL_XSPI_Init
#define HAL_OSPI_Command HAL_XSPI_Command
#define HAL_OSPI_Receive HAL_XSPI_Receive
#define HAL_OSPI_Receive_DMA HAL_XSPI_Receive_DMA
#define HAL_OSPI_Receive_IT HAL_XSPI_Receive_IT
#define HAL_OSPI_Transmit HAL_XSPI_Transmit
#define HAL_OSPI_Transmit_DMA HAL_XSPI_Transmit_DMA
#define HAL_OSPI_Transmit_IT HAL_XSPI_Transmit_IT
#define HAL_OSPI_AutoPolling HAL_XSPI_AutoPolling
#define HAL_OSPI_AutoPolling_IT HAL_XSPI_AutoPolling_IT
#define HAL_OSPI_IRQHandler HAL_XSPI_IRQHandler
#define HAL_OSPI_Abort HAL_XSPI_Abort

#define HAL_OSPI_ErrorCallback HAL_XSPI_ErrorCallback
#define HAL_OSPI_CmdCpltCallback HAL_XSPI_CmdCpltCallback
#define HAL_OSPI_RxCpltCallback HAL_XSPI_RxCpltCallback
#define HAL_OSPI_TxCpltCallback HAL_XSPI_TxCpltCallback
#define HAL_OSPI_StatusMatchCallback HAL_XSPI_StatusMatchCallback
#define HAL_OSPI_TimeOutCallback HAL_XSPI_TimeOutCallback

#define HAL_OSPI_ADDRESS_NONE HAL_XSPI_ADDRESS_NONE
#define HAL_OSPI_ADDRESS_8_LINES HAL_XSPI_ADDRESS_8_LINES
#define HAL_OSPI_ADDRESS_4_LINES HAL_XSPI_ADDRESS_4_LINES
#define HAL_OSPI_ADDRESS_2_LINES HAL_XSPI_ADDRESS_2_LINES
#define HAL_OSPI_ADDRESS_1_LINE HAL_XSPI_ADDRESS_1_LINE
#define HAL_OSPI_ADDRESS_32_BITS HAL_XSPI_ADDRESS_32_BITS
#define HAL_OSPI_ADDRESS_24_BITS HAL_XSPI_ADDRESS_24_BITS
#define HAL_OSPI_ADDRESS_16_BITS HAL_XSPI_ADDRESS_16_BITS
#define HAL_OSPI_ADDRESS_8_BITS HAL_XSPI_ADDRESS_8_BITS
#define HAL_OSPI_ADDRESS_DTR_ENABLE HAL_XSPI_ADDRESS_DTR_ENABLE
#define HAL_OSPI_ADDRESS_DTR_DISABLE HAL_XSPI_ADDRESS_DTR_DISABLE
#define HAL_OSPI_INSTRUCTION_8_LINES HAL_XSPI_INSTRUCTION_8_LINES
#define HAL_OSPI_INSTRUCTION_4_LINES HAL_XSPI_INSTRUCTION_4_LINES
#define HAL_OSPI_INSTRUCTION_2_LINES HAL_XSPI_INSTRUCTION_2_LINES
#define HAL_OSPI_INSTRUCTION_1_LINE HAL_XSPI_INSTRUCTION_1_LINE
#define HAL_OSPI_INSTRUCTION_32_BITS HAL_XSPI_INSTRUCTION_32_BITS
#define HAL_OSPI_INSTRUCTION_16_BITS HAL_XSPI_INSTRUCTION_16_BITS
#define HAL_OSPI_INSTRUCTION_8_BITS HAL_XSPI_INSTRUCTION_8_BITS
#define HAL_OSPI_INSTRUCTION_DTR_ENABLE HAL_XSPI_INSTRUCTION_DTR_ENABLE
#define HAL_OSPI_INSTRUCTION_DTR_DISABLE HAL_XSPI_INSTRUCTION_DTR_DISABLE

#define HAL_OSPI_ALTERNATE_BYTES_NONE HAL_XSPI_ALT_BYTES_NONE
#define HAL_OSPI_DATA_NONE HAL_XSPI_DATA_NONE
#define HAL_OSPI_DATA_8_LINES HAL_XSPI_DATA_8_LINES
#define HAL_OSPI_DATA_4_LINES HAL_XSPI_DATA_4_LINES
#define HAL_OSPI_DATA_2_LINES HAL_XSPI_DATA_2_LINES
#define HAL_OSPI_DATA_1_LINE HAL_XSPI_DATA_1_LINE
#define HAL_OSPI_DATA_DTR_ENABLE HAL_XSPI_DATA_DTR_ENABLE
#define HAL_OSPI_DATA_DTR_DISABLE HAL_XSPI_DATA_DTR_DISABLE
#define HAL_OSPI_DQS_ENABLE HAL_XSPI_DQS_ENABLE
#define HAL_OSPI_DQS_DISABLE HAL_XSPI_DQS_DISABLE

#define HAL_OSPI_MATCH_MODE_AND HAL_XSPI_MATCH_MODE_AND
#define HAL_OSPI_SIOO_INST_EVERY_CMD HAL_XSPI_SIOO_INST_EVERY_CMD
#define HAL_OSPI_AUTOMATIC_STOP_ENABLE HAL_XSPI_AUTOMATIC_STOP_ENABLE
#define HAL_OSPI_OPTYPE_COMMON_CFG HAL_XSPI_OPTYPE_COMMON_CFG
#define HAL_OSPI_TIMEOUT_DEFAULT_VALUE HAL_XSPI_TIMEOUT_DEFAULT_VALUE

#define HAL_OSPI_CLOCK_MODE_0 HAL_XSPI_CLOCK_MODE_0
#define HAL_OSPI_FLASH_ID_1 HAL_XSPI_SELECT_IO_7_0
#define HAL_OSPI_DUALQUAD_DISABLE HAL_XSPI_SINGLE_MEM
#define HAL_OSPI_DUALQUAD_ENABLE HAL_XSPI_DUAL_MEM
#define HAL_OSPI_SAMPLE_SHIFTING_NONE HAL_XSPI_SAMPLE_SHIFT_NONE
#define HAL_OSPI_SAMPLE_SHIFTING_HALFCYCLE HAL_XSPI_SAMPLE_SHIFT_HALFCYCLE
#define HAL_OSPI_DELAY_BLOCK_USED HAL_XSPI_DELAY_BLOCK_ON
#define HAL_OSPI_DELAY_BLOCK_BYPASSED HAL_XSPI_DELAY_BLOCK_BYPASS
#define HAL_OSPI_MEMTYPE_MICRON HAL_XSPI_MEMTYPE_MICRON
#define HAL_OSPI_MEMTYPE_MACRONIX HAL_XSPI_MEMTYPE_MACRONIX
#define HAL_OSPI_DHQC_ENABLE HAL_XSPI_DHQC_ENABLE
#define HAL_OSPI_DHQC_DISABLE HAL_XSPI_DHQC_DISABLE
#define HAL_OSPI_WRAP_NOT_SUPPORTED HAL_XSPI_WRAP_NOT_SUPPORTED
#define HAL_OSPI_FREERUNCLK_DISABLE HAL_XSPI_FREERUNCLK_DISABLE
#endif /* CONFIG_SOC_SERIES_STM32H5X */

#endif /* ZEPHYR_DRIVERS_FLASH_OSPIH_STM32_H_ */
