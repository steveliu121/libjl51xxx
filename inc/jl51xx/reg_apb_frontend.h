//reg_apb_frontend.h
/*
* Automatically generated by gen_c_api.py, don't edit it
*/
#ifndef __JL_REG_APB_FRONTEND_H__
#define __JL_REG_APB_FRONTEND_H__

#include <jl_types.h>

#define APB_FRONTEND_BASE                                                            ((jl_uint32)0x00500000U)
#define APB_FRONTEND_BLOCK_SIZE                                                      ((jl_uint32)0x00000100U)

#define CVTER_OFFSET                                                                 ((jl_uint32)0x00000000U)
#define CVTER_NUM                                                                    ((jl_uint32)0x00000001U)
typedef union CVTER_u {
    struct {
        jl_uint32 p8_rmii_rx_lpi_en:1;                                      //[ 0: 0]
        jl_uint32 p8_rmii_rxd_bad_ssd_en:1;                                 //[ 1: 1]
        jl_uint32 p8_speed:1;                                               //[ 2: 2]
        jl_uint32 p8_mii_tx_lpi_en:1;                                       //[ 3: 3]
        jl_uint32 p9_rmii_rx_lpi_en:1;                                      //[ 4: 4]
        jl_uint32 p9_rmii_rxd_bad_ssd_en:1;                                 //[ 5: 5]
        jl_uint32 p9_speed:1;                                               //[ 6: 6]
        jl_uint32 p9_mii_tx_lpi_en:1;                                       //[ 7: 7]
        jl_uint32 p8_rmii_rx_negedge_en:1;                                  //[ 8: 8]
        jl_uint32 p8_rmii_tx_posedge_en:1;                                  //[ 9: 9]
        jl_uint32 p8_mii_rx_negedge_en:1;                                   //[10:10]
        jl_uint32 p8_mii_tx_posedge_en:1;                                   //[11:11]
        jl_uint32 p9_rmii_rx_negedge_en:1;                                  //[12:12]
        jl_uint32 p9_rmii_tx_posedge_en:1;                                  //[13:13]
        jl_uint32 p8_rmii_half_duplex_en:1;                                 //[14:14]
        jl_uint32 p9_rmii_half_duplex_en:1;                                 //[15:15]
    } bf;
    jl_uint32 val[1];
} CVTER_t;

#define FRONT_END_CFG_OFFSET                                                         ((jl_uint32)0x00000001U)
#define FRONT_END_CFG_NUM                                                            ((jl_uint32)0x00000001U)
typedef union FRONT_END_CFG_u {
    struct {
        jl_uint32 half_duplex_mode:1;                                       //[ 0: 0]
    } bf;
    jl_uint32 val[1];
} FRONT_END_CFG_t;

#define SLEEP_WAKE_OFFSET                                                            ((jl_uint32)0x00000002U)
#define SLEEP_WAKE_NUM                                                               ((jl_uint32)0x00000001U)
typedef union SLEEP_WAKE_u {
    struct {
        jl_uint32 sleep_wake:1;                                             //[ 0: 0]
    } bf;
    jl_uint32 val[1];
} SLEEP_WAKE_t;

#define PHY_DBG_OUT_SEL_OFFSET                                                       ((jl_uint32)0x00000003U)
#define PHY_DBG_OUT_SEL_NUM                                                          ((jl_uint32)0x00000001U)
typedef union PHY_DBG_OUT_SEL_u {
    struct {
        jl_uint32 phy_dbg_out_sel:7;                                        //[ 6: 0]
    } bf;
    jl_uint32 val[1];
} PHY_DBG_OUT_SEL_t;

#define RESERVED_CFG0_OFFSET                                                         ((jl_uint32)0x00000004U)
#define RESERVED_CFG0_NUM                                                            ((jl_uint32)0x00000001U)
typedef union RESERVED_CFG0_u {
    struct {
        jl_uint32 reserved_config0:32;                                      //[31: 0]
    } bf;
    jl_uint32 val[1];
} RESERVED_CFG0_t;

#define RESERVED_CFG1_OFFSET                                                         ((jl_uint32)0x00000005U)
#define RESERVED_CFG1_NUM                                                            ((jl_uint32)0x00000001U)
typedef union RESERVED_CFG1_u {
    struct {
        jl_uint32 reserved_config1:32;                                      //[31: 0]
    } bf;
    jl_uint32 val[1];
} RESERVED_CFG1_t;

#define CPU_RESERVED0_OFFSET                                                         ((jl_uint32)0x00000006U)
#define CPU_RESERVED0_NUM                                                            ((jl_uint32)0x00000001U)
typedef union CPU_RESERVED0_u {
    struct {
        jl_uint32 cpu_mem_access_reserved0:32;                              //[31: 0]
    } bf;
    jl_uint32 val[1];
} CPU_RESERVED0_t;

#define CPU_RESERVED1_OFFSET                                                         ((jl_uint32)0x00000007U)
#define CPU_RESERVED1_NUM                                                            ((jl_uint32)0x00000001U)
typedef union CPU_RESERVED1_u {
    struct {
        jl_uint32 cpu_mem_access_reserved1:32;                              //[31: 0]
    } bf;
    jl_uint32 val[1];
} CPU_RESERVED1_t;

#define CPU_RESERVED2_OFFSET                                                         ((jl_uint32)0x00000008U)
#define CPU_RESERVED2_NUM                                                            ((jl_uint32)0x00000001U)
typedef union CPU_RESERVED2_u {
    struct {
        jl_uint32 cpu_mem_access_reserved2:32;                              //[31: 0]
    } bf;
    jl_uint32 val[1];
} CPU_RESERVED2_t;

#define CPU_RESERVED3_OFFSET                                                         ((jl_uint32)0x00000009U)
#define CPU_RESERVED3_NUM                                                            ((jl_uint32)0x00000001U)
typedef union CPU_RESERVED3_u {
    struct {
        jl_uint32 cpu_mem_access_reserved3:32;                              //[31: 0]
    } bf;
    jl_uint32 val[1];
} CPU_RESERVED3_t;

#define CPU_RESERVED4_OFFSET                                                         ((jl_uint32)0x0000000AU)
#define CPU_RESERVED4_NUM                                                            ((jl_uint32)0x00000001U)
typedef union CPU_RESERVED4_u {
    struct {
        jl_uint32 cpu_mem_access_reserved4:32;                              //[31: 0]
    } bf;
    jl_uint32 val[1];
} CPU_RESERVED4_t;

#define CPU_RESERVED5_OFFSET                                                         ((jl_uint32)0x0000000BU)
#define CPU_RESERVED5_NUM                                                            ((jl_uint32)0x00000001U)
typedef union CPU_RESERVED5_u {
    struct {
        jl_uint32 cpu_mem_access_reserved5:32;                              //[31: 0]
    } bf;
    jl_uint32 val[1];
} CPU_RESERVED5_t;

#define CPU_RESERVED6_OFFSET                                                         ((jl_uint32)0x0000000CU)
#define CPU_RESERVED6_NUM                                                            ((jl_uint32)0x00000001U)
typedef union CPU_RESERVED6_u {
    struct {
        jl_uint32 cpu_mem_access_reserved6:32;                              //[31: 0]
    } bf;
    jl_uint32 val[1];
} CPU_RESERVED6_t;

#define CPU_RESERVED7_OFFSET                                                         ((jl_uint32)0x0000000DU)
#define CPU_RESERVED7_NUM                                                            ((jl_uint32)0x00000001U)
typedef union CPU_RESERVED7_u {
    struct {
        jl_uint32 cpu_mem_access_reserved7:32;                              //[31: 0]
    } bf;
    jl_uint32 val[1];
} CPU_RESERVED7_t;

#define CPU_RESERVED8_OFFSET                                                         ((jl_uint32)0x0000000EU)
#define CPU_RESERVED8_NUM                                                            ((jl_uint32)0x00000001U)
typedef union CPU_RESERVED8_u {
    struct {
        jl_uint32 cpu_mem_access_reserved8:32;                              //[31: 0]
    } bf;
    jl_uint32 val[1];
} CPU_RESERVED8_t;

#define CPU_RESERVED9_OFFSET                                                         ((jl_uint32)0x0000000FU)
#define CPU_RESERVED9_NUM                                                            ((jl_uint32)0x00000001U)
typedef union CPU_RESERVED9_u {
    struct {
        jl_uint32 cpu_mem_access_reserved9:32;                              //[31: 0]
    } bf;
    jl_uint32 val[1];
} CPU_RESERVED9_t;

#define CPU_RESERVED10_OFFSET                                                        ((jl_uint32)0x00000010U)
#define CPU_RESERVED10_NUM                                                           ((jl_uint32)0x00000001U)
typedef union CPU_RESERVED10_u {
    struct {
        jl_uint32 cpu_mem_access_reserved10:32;                             //[31: 0]
    } bf;
    jl_uint32 val[1];
} CPU_RESERVED10_t;

#define STRAP_PIN_STATUS_OFFSET                                                      ((jl_uint32)0x00000011U)
#define STRAP_PIN_STATUS_NUM                                                         ((jl_uint32)0x00000001U)
typedef union STRAP_PIN_STATUS_u {
    struct {
        jl_uint32 p8_dup_sta:1;                                             //[ 0: 0]
        jl_uint32 p8_spd_sta:1;                                             //[ 1: 1]
        jl_uint32 p8_if_mode:1;                                             //[ 2: 2]
        jl_uint32 p8_if_sel:2;                                              //[ 4: 3]
        jl_uint32 en_led1:1;                                                //[ 5: 5]
        jl_uint32 dis_loop_ind:1;                                           //[ 6: 6]
        jl_uint32 dis_eee:1;                                                //[ 7: 7]
        jl_uint32 led_mode1:1;                                              //[ 8: 8]
        jl_uint32 led_mode2:1;                                              //[ 9: 9]
        jl_uint32 rma_mode:1;                                               //[10:10]
        jl_uint32 unknow_multi:1;                                           //[11:11]
        jl_uint32 dis_rst_blnk:1;                                           //[12:12]
        jl_uint32 p8_fctrl_sta:1;                                           //[13:13]
        jl_uint32 p9_dup_sta:1;                                             //[14:14]
        jl_uint32 p9_spd_sta:1;                                             //[15:15]
        jl_uint32 p9_if_sel:1;                                              //[16:16]
        jl_uint32 p9_fcrtl_sta:1;                                           //[17:17]
        jl_uint32 p9_if_mode:1;                                             //[18:18]
        jl_uint32 strap_rsv0:1;                                             //[19:19]
        jl_uint32 strap_rsv1:1;                                             //[20:20]
        jl_uint32 strap_rsv2:1;                                             //[21:21]
        jl_uint32 strap_rsv3:1;                                             //[22:22]
        jl_uint32 strap_rsv4:1;                                             //[23:23]
        jl_uint32 strap_rsv5:1;                                             //[24:24]
        jl_uint32 strap_rsv6:1;                                             //[25:25]
    } bf;
    jl_uint32 val[1];
} STRAP_PIN_STATUS_t;

#define TOP_INTN_OFFSET                                                              ((jl_uint32)0x00000012U)
#define TOP_INTN_NUM                                                                 ((jl_uint32)0x00000001U)
typedef union TOP_INTN_u {
    struct {
        jl_uint32 intn_cfg:1;                                               //[ 0: 0]
        jl_uint32 intn_sel:1;                                               //[ 1: 1]
    } bf;
    jl_uint32 val[1];
} TOP_INTN_t;

#define MDC_IO_CFG_OFFSET                                                            ((jl_uint32)0x00000013U)
#define MDC_IO_CFG_NUM                                                               ((jl_uint32)0x00000001U)
typedef union MDC_IO_CFG_u {
    struct {
        jl_uint32 mdc_io_mode:1;                                            //[ 0: 0]
    } bf;
    jl_uint32 val[1];
} MDC_IO_CFG_t;

#define TSEN_CFG_OFFSET                                                              ((jl_uint32)0x00000014U)
#define TSEN_CFG_NUM                                                                 ((jl_uint32)0x00000001U)
typedef union TSEN_CFG_u {
    struct {
        jl_uint32 tsen_dout:12;                                             //[11: 0]
        jl_uint32 tsen_done:1;                                              //[12:12]
        jl_uint32 trng:1;                                                   //[13:13]
        jl_uint32 tsen_dig_resetb:1;                                        //[14:14]
        jl_uint32 tsen_avg:1;                                               //[15:15]
    } bf;
    jl_uint32 val[1];
} TSEN_CFG_t;

#define FIXUP_ADDR_OFFSET                                                            ((jl_uint32)0x00000015U)
#define FIXUP_ADDR_NUM                                                               ((jl_uint32)0x00000001U)
typedef union FIXUP_ADDR_u {
    struct {
        jl_uint32 fixup_addr:16;                                            //[15: 0]
    } bf;
    jl_uint32 val[1];
} FIXUP_ADDR_t;

#define FIXUP_DATA_HI_OFFSET                                                         ((jl_uint32)0x00000016U)
#define FIXUP_DATA_HI_NUM                                                            ((jl_uint32)0x00000001U)
typedef union FIXUP_DATA_HI_u {
    struct {
        jl_uint32 fixup_data_hi:16;                                         //[15: 0]
    } bf;
    jl_uint32 val[1];
} FIXUP_DATA_HI_t;

#define FIXUP_DATA_LO_OFFSET                                                         ((jl_uint32)0x00000017U)
#define FIXUP_DATA_LO_NUM                                                            ((jl_uint32)0x00000001U)
typedef union FIXUP_DATA_LO_u {
    struct {
        jl_uint32 fixup_data_lo:16;                                         //[15: 0]
    } bf;
    jl_uint32 val[1];
} FIXUP_DATA_LO_t;

#define PHY_RANDOM_OUT_OFFSET                                                        ((jl_uint32)0x00000018U)
#define PHY_RANDOM_OUT_NUM                                                           ((jl_uint32)0x00000001U)
typedef union PHY_RANDOM_OUT_u {
    struct {
        jl_uint32 random_out:1;                                             //[ 0: 0]
    } bf;
    jl_uint32 val[1];
} PHY_RANDOM_OUT_t;

#define INNER_I2C_FW_MODE_OFFSET                                                     ((jl_uint32)0x00000019U)
#define INNER_I2C_FW_MODE_NUM                                                        ((jl_uint32)0x00000001U)
typedef union INNER_I2C_FW_MODE_u {
    struct {
        jl_uint32 inner_i2c_od_mode:1;                                      //[ 0: 0]
        jl_uint32 inner_i2c_fw_mode:1;                                      //[ 1: 1]
        jl_uint32 inner_i2c_scl_oen_cfg:1;                                  //[ 2: 2]
        jl_uint32 inner_i2c_scl_out_cfg:1;                                  //[ 3: 3]
        jl_uint32 inner_i2c_sda_in_cfg:1;                                   //[ 4: 4]
        jl_uint32 inner_i2c_sda_out_cfg:1;                                  //[ 5: 5]
        jl_uint32 inner_i2c_sda_oen_cfg:1;                                  //[ 6: 6]
    } bf;
    jl_uint32 val[1];
} INNER_I2C_FW_MODE_t;

#define PIN_DEBUG_OUT_OFFSET                                                         ((jl_uint32)0x0000001AU)
#define PIN_DEBUG_OUT_NUM                                                            ((jl_uint32)0x00000001U)
typedef union PIN_DEBUG_OUT_u {
    struct {
        jl_uint32 dbg_p7_led0_out:1;                                        //[ 0: 0]
        jl_uint32 dbg_p6_led0_out:1;                                        //[ 1: 1]
        jl_uint32 dbg_p5_led0_out:1;                                        //[ 2: 2]
        jl_uint32 dbg_p4_led0_out:1;                                        //[ 3: 3]
        jl_uint32 dbg_p3_led0_out:1;                                        //[ 4: 4]
        jl_uint32 dbg_p2_led0_out:1;                                        //[ 5: 5]
        jl_uint32 dbg_p1_led0_out:1;                                        //[ 6: 6]
        jl_uint32 dbg_p0_led0_out:1;                                        //[ 7: 7]
        jl_uint32 dbg_loop_ind_out:1;                                       //[ 8: 8]
        jl_uint32 dbg_sleep_wake_out:1;                                     //[ 9: 9]
        jl_uint32 dbg_intn_out:1;                                           //[10:10]
        jl_uint32 dbg_p8_link_stat_out:1;                                   //[11:11]
        jl_uint32 dbg_p8_mii_rxd3_out:1;                                    //[12:12]
        jl_uint32 dbg_p8_mii_rxd2_out:1;                                    //[13:13]
        jl_uint32 dbg_p8_mii_rxd1_out:1;                                    //[14:14]
        jl_uint32 dbg_p8_mii_rxd0_out:1;                                    //[15:15]
        jl_uint32 dbg_p8_mii_rx_dv_out:1;                                   //[16:16]
        jl_uint32 dbg_p8_mii_rx_clk_out:1;                                  //[17:17]
        jl_uint32 dbg_p8_mii_rx_er_out:1;                                   //[18:18]
        jl_uint32 dbg_p8_mii_col_out:1;                                     //[19:19]
        jl_uint32 dbg_p8_mii_crs_out:1;                                     //[20:20]
        jl_uint32 dbg_p8_mii_tx_er_out:1;                                   //[21:21]
        jl_uint32 dbg_p8_mii_tx_clk_out:1;                                  //[22:22]
        jl_uint32 dbg_p8_mii_tx_en_out:1;                                   //[23:23]
        jl_uint32 dbg_p8_mii_txd0_out:1;                                    //[24:24]
        jl_uint32 dbg_p8_mii_txd1_out:1;                                    //[25:25]
        jl_uint32 dbg_p8_mii_txd2_out:1;                                    //[26:26]
        jl_uint32 dbg_p8_mii_txd3_out:1;                                    //[27:27]
    } bf;
    jl_uint32 val[1];
} PIN_DEBUG_OUT_t;

#define PIN_DEBUG_IN_OFFSET                                                          ((jl_uint32)0x0000001BU)
#define PIN_DEBUG_IN_NUM                                                             ((jl_uint32)0x00000001U)
typedef union PIN_DEBUG_IN_u {
    struct {
        jl_uint32 dbg_p7_led0_in:1;                                         //[ 0: 0]
        jl_uint32 dbg_p6_led0_in:1;                                         //[ 1: 1]
        jl_uint32 dbg_p5_led0_in:1;                                         //[ 2: 2]
        jl_uint32 dbg_p4_led0_in:1;                                         //[ 3: 3]
        jl_uint32 dbg_p3_led0_in:1;                                         //[ 4: 4]
        jl_uint32 dbg_p2_led0_in:1;                                         //[ 5: 5]
        jl_uint32 dbg_p1_led0_in:1;                                         //[ 6: 6]
        jl_uint32 dbg_p0_led0_in:1;                                         //[ 7: 7]
        jl_uint32 dbg_loop_ind_in:1;                                        //[ 8: 8]
        jl_uint32 dbg_sleep_wake_in:1;                                      //[ 9: 9]
        jl_uint32 dbg_intn_in:1;                                            //[10:10]
        jl_uint32 dbg_p8_link_stat_in:1;                                    //[11:11]
        jl_uint32 dbg_p8_mii_rxd3_in:1;                                     //[12:12]
        jl_uint32 dbg_p8_mii_rxd2_in:1;                                     //[13:13]
        jl_uint32 dbg_p8_mii_rxd1_in:1;                                     //[14:14]
        jl_uint32 dbg_p8_mii_rxd0_in:1;                                     //[15:15]
        jl_uint32 dbg_p8_mii_rx_dv_in:1;                                    //[16:16]
        jl_uint32 dbg_p8_mii_rx_clk_in:1;                                   //[17:17]
        jl_uint32 dbg_p8_mii_rx_er_in:1;                                    //[18:18]
        jl_uint32 dbg_p8_mii_col_in:1;                                      //[19:19]
        jl_uint32 dbg_p8_mii_crs_in:1;                                      //[20:20]
        jl_uint32 dbg_p8_mii_tx_er_in:1;                                    //[21:21]
        jl_uint32 dbg_p8_mii_tx_clk_in:1;                                   //[22:22]
        jl_uint32 dbg_p8_mii_tx_en_in:1;                                    //[23:23]
        jl_uint32 dbg_p8_mii_txd0_in:1;                                     //[24:24]
        jl_uint32 dbg_p8_mii_txd1_in:1;                                     //[25:25]
        jl_uint32 dbg_p8_mii_txd2_in:1;                                     //[26:26]
        jl_uint32 dbg_p8_mii_txd3_in:1;                                     //[27:27]
    } bf;
    jl_uint32 val[1];
} PIN_DEBUG_IN_t;

#define PIN_DEBUG_OEN_OFFSET                                                         ((jl_uint32)0x0000001CU)
#define PIN_DEBUG_OEN_NUM                                                            ((jl_uint32)0x00000001U)
typedef union PIN_DEBUG_OEN_u {
    struct {
        jl_uint32 dbg_p7_led0_oen:1;                                        //[ 0: 0]
        jl_uint32 dbg_p6_led0_oen:1;                                        //[ 1: 1]
        jl_uint32 dbg_p5_led0_oen:1;                                        //[ 2: 2]
        jl_uint32 dbg_p4_led0_oen:1;                                        //[ 3: 3]
        jl_uint32 dbg_p3_led0_oen:1;                                        //[ 4: 4]
        jl_uint32 dbg_p2_led0_oen:1;                                        //[ 5: 5]
        jl_uint32 dbg_p1_led0_oen:1;                                        //[ 6: 6]
        jl_uint32 dbg_p0_led0_oen:1;                                        //[ 7: 7]
        jl_uint32 dbg_loop_ind_oen:1;                                       //[ 8: 8]
        jl_uint32 dbg_sleep_wake_oen:1;                                     //[ 9: 9]
        jl_uint32 dbg_intn_oen:1;                                           //[10:10]
        jl_uint32 dbg_p8_link_stat_oen:1;                                   //[11:11]
        jl_uint32 dbg_p8_mii_rxd3_oen:1;                                    //[12:12]
        jl_uint32 dbg_p8_mii_rxd2_oen:1;                                    //[13:13]
        jl_uint32 dbg_p8_mii_rxd1_oen:1;                                    //[14:14]
        jl_uint32 dbg_p8_mii_rxd0_oen:1;                                    //[15:15]
        jl_uint32 dbg_p8_mii_rx_dv_oen:1;                                   //[16:16]
        jl_uint32 dbg_p8_mii_rx_clk_oen:1;                                  //[17:17]
        jl_uint32 dbg_p8_mii_rx_er_oen:1;                                   //[18:18]
        jl_uint32 dbg_p8_mii_col_oen:1;                                     //[19:19]
        jl_uint32 dbg_p8_mii_crs_oen:1;                                     //[20:20]
        jl_uint32 dbg_p8_mii_tx_er_oen:1;                                   //[21:21]
        jl_uint32 dbg_p8_mii_tx_clk_oen:1;                                  //[22:22]
        jl_uint32 dbg_p8_mii_tx_en_oen:1;                                   //[23:23]
        jl_uint32 dbg_p8_mii_txd0_oen:1;                                    //[24:24]
        jl_uint32 dbg_p8_mii_txd1_oen:1;                                    //[25:25]
        jl_uint32 dbg_p8_mii_txd2_oen:1;                                    //[26:26]
        jl_uint32 dbg_p8_mii_txd3_oen:1;                                    //[27:27]
    } bf;
    jl_uint32 val[1];
} PIN_DEBUG_OEN_t;

#endif /* __JL_REG_APB_FRONTEND_H__ */
