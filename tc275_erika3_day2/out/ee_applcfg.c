/* ###*B*###
 *
 * ERIKA Enterprise - a tiny RTOS for small microcontrollers
 * 
 * Copyright (C) 2002-2018 Evidence Srl
 * 
 * This file is part of ERIKA Enterprise.
 * 
 * See LICENSE file.
 *
 * ###*E*### */

/***************************************************************************
 *
 * This file is generated by RT-Druid.
 * Please do not modify it.
 *
 **************************************************************************/

#include "ee_conf.h"




/***************************************************************************
 *
 * Reserve stack
 *
 **************************************************************************/
extern VAR(OsEE_CTX, OS_STACK) __USTACK0_END[];

static VAR(OsEE_stack, OS_STACK)
  osEE_task_stack_1[OSEE_STACK_WORD_LENGHT(osEE_task_stack_1_StackSize)];


static VAR(OsEE_stack, OS_STACK)
  osEE_task_stack_2[OSEE_STACK_WORD_LENGHT(osEE_task_stack_2_StackSize)];


static VAR(OsEE_stack, OS_STACK)
  osEE_task_stack_3[OSEE_STACK_WORD_LENGHT(osEE_task_stack_3_StackSize)];


static VAR(OsEE_stack, OS_STACK)
  osEE_task_stack_4[OSEE_STACK_WORD_LENGHT(osEE_task_stack_4_StackSize)];


static VAR(OsEE_stack, OS_STACK)
  osEE_task_stack_5[OSEE_STACK_WORD_LENGHT(osEE_task_stack_5_StackSize)];


static VAR(OsEE_stack, OS_STACK)
  osEE_task_stack_6[OSEE_STACK_WORD_LENGHT(osEE_task_stack_6_StackSize)];


static VAR(OsEE_stack, OS_STACK)
  osEE_task_stack_7[OSEE_STACK_WORD_LENGHT(osEE_task_stack_7_StackSize)];


static VAR(OsEE_stack, OS_STACK)
  osEE_task_stack_8[OSEE_STACK_WORD_LENGHT(osEE_task_stack_8_StackSize)];


static VAR(OsEE_stack, OS_STACK)
  osEE_task_stack_9[OSEE_STACK_WORD_LENGHT(osEE_task_stack_9_StackSize)];


static VAR(OsEE_stack, OS_STACK)
  osEE_task_stack_10[OSEE_STACK_WORD_LENGHT(osEE_task_stack_10_StackSize)];


/***************************************************************************
 *
 * Init Stack Control Block
 *
 **************************************************************************/
static VAR(OsEE_SCB, OS_VAR_INIT) osEE_scb_array[(11U)] =
{
  { /* .p_tos = */  (OsEE_CTX *)OSEE_STACK_TOS(osEE_task_stack_1) },
  { /* .p_tos = */  (OsEE_CTX *)OSEE_STACK_TOS(osEE_task_stack_2) },
  { /* .p_tos = */  (OsEE_CTX *)OSEE_STACK_TOS(osEE_task_stack_3) },
  { /* .p_tos = */  (OsEE_CTX *)OSEE_STACK_TOS(osEE_task_stack_4) },
  { /* .p_tos = */  (OsEE_CTX *)OSEE_STACK_TOS(osEE_task_stack_5) },
  { /* .p_tos = */  (OsEE_CTX *)OSEE_STACK_TOS(osEE_task_stack_6) },
  { /* .p_tos = */  (OsEE_CTX *)OSEE_STACK_TOS(osEE_task_stack_7) },
  { /* .p_tos = */  (OsEE_CTX *)OSEE_STACK_TOS(osEE_task_stack_8) },
  { /* .p_tos = */  (OsEE_CTX *)OSEE_STACK_TOS(osEE_task_stack_9) },
  { /* .p_tos = */  (OsEE_CTX *)OSEE_STACK_TOS(osEE_task_stack_10) },
  { /* .p_tos = */  NULL }
};

/***************************************************************************
 *
 * Init Stack Descriptor Block
 *
 **************************************************************************/
static VAR(OsEE_SDB, OS_CONST) osEE_sdb_array[(11U)] =
{
  {
    /* .p_bos = */      (OsEE_CTX *)OSEE_STACK_BOS(osEE_task_stack_1),
    /* .stack_size = */ osEE_task_stack_1_StackSize
  },
  {
    /* .p_bos = */      (OsEE_CTX *)OSEE_STACK_BOS(osEE_task_stack_2),
    /* .stack_size = */ osEE_task_stack_2_StackSize
  },
  {
    /* .p_bos = */      (OsEE_CTX *)OSEE_STACK_BOS(osEE_task_stack_3),
    /* .stack_size = */ osEE_task_stack_3_StackSize
  },
  {
    /* .p_bos = */      (OsEE_CTX *)OSEE_STACK_BOS(osEE_task_stack_4),
    /* .stack_size = */ osEE_task_stack_4_StackSize
  },
  {
    /* .p_bos = */      (OsEE_CTX *)OSEE_STACK_BOS(osEE_task_stack_5),
    /* .stack_size = */ osEE_task_stack_5_StackSize
  },
  {
    /* .p_bos = */      (OsEE_CTX *)OSEE_STACK_BOS(osEE_task_stack_6),
    /* .stack_size = */ osEE_task_stack_6_StackSize
  },
  {
    /* .p_bos = */      (OsEE_CTX *)OSEE_STACK_BOS(osEE_task_stack_7),
    /* .stack_size = */ osEE_task_stack_7_StackSize
  },
  {
    /* .p_bos = */      (OsEE_CTX *)OSEE_STACK_BOS(osEE_task_stack_8),
    /* .stack_size = */ osEE_task_stack_8_StackSize
  },
  {
    /* .p_bos = */      (OsEE_CTX *)OSEE_STACK_BOS(osEE_task_stack_9),
    /* .stack_size = */ osEE_task_stack_9_StackSize
  },
  {
    /* .p_bos = */      (OsEE_CTX *)OSEE_STACK_BOS(osEE_task_stack_10),
    /* .stack_size = */ osEE_task_stack_10_StackSize
  },
  {
    /* .p_bos = */      (OsEE_CTX *)__USTACK0_END,
    /* .stack_size = */ (0x1000U)
  }
};


/***************************************************************************
 *
 * Init Tasks Control Block
 *
 **************************************************************************/

static VAR(OsEE_TCB, OS_VAR_INIT)
  osEE_tcb_array[14] =
{
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 128U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 1U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 1U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 1U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 1U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 1U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 1U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 1U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 1U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 1U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 1U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 1U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 0U,
    /* .current_prio       = */ 1U,
    /* .status             = */ SUSPENDED,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL
  },
  {
    /* .current_num_of_act = */ 1U,
    /* .current_prio       = */ 0U,
    /* .status             = */ RUNNING,
    /* .p_last_m           = */ NULL,
    /* .wait_mask          = */ 0U,
    /* .event_mask         = */ 0U,
    /* .p_own_sn           = */ NULL}
};


/***************************************************************************
 *
 * Init Tasks Descriptor Block
 *
 **************************************************************************/

static VAR(OsEE_TDB, OS_CONST)
  osEE_tdb_array[14]  =
{
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[10U],
      /* .p_scb    = */   &osEE_scb_array[10U],
      /* .isr2_src  = */  OSEE_TC_STM_SR0
    },
    /* .p_tcb          = */ &osEE_tcb_array[0U],
    /* .tid            = */ 0U,
    /* .task_type      = */ OSEE_TASK_TYPE_ISR2,
    /* .task_func      = */ osEE_tricore_system_timer_handler,
    /* .ready_prio     = */ 128U,
    /* .dispatch_prio  = */ OSEE_ISR_ALL_PRIO,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[0U],
      /* .p_scb    = */   &osEE_scb_array[0U],
      /* .isr2_src  = */  OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[1U],
    /* .tid            = */ 1U,
    /* .task_type      = */ OSEE_TASK_TYPE_BASIC,
    /* .task_func      = */ TASK_FUNC(Blink_LED),
    /* .ready_prio     = */ 1U,
    /* .dispatch_prio  = */ 1U,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[1U],
      /* .p_scb    = */   &osEE_scb_array[1U],
      /* .isr2_src  = */  OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[2U],
    /* .tid            = */ 2U,
    /* .task_type      = */ OSEE_TASK_TYPE_BASIC,
    /* .task_func      = */ TASK_FUNC(UART_Echo),
    /* .ready_prio     = */ 1U,
    /* .dispatch_prio  = */ 1U,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[2U],
      /* .p_scb    = */   &osEE_scb_array[2U],
      /* .isr2_src  = */  OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[3U],
    /* .tid            = */ 3U,
    /* .task_type      = */ OSEE_TASK_TYPE_BASIC,
    /* .task_func      = */ TASK_FUNC(DCMotor_Example),
    /* .ready_prio     = */ 1U,
    /* .dispatch_prio  = */ 1U,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[3U],
      /* .p_scb    = */   &osEE_scb_array[3U],
      /* .isr2_src  = */  OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[4U],
    /* .tid            = */ 4U,
    /* .task_type      = */ OSEE_TASK_TYPE_BASIC,
    /* .task_func      = */ TASK_FUNC(Timer_Example),
    /* .ready_prio     = */ 1U,
    /* .dispatch_prio  = */ 1U,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[4U],
      /* .p_scb    = */   &osEE_scb_array[4U],
      /* .isr2_src  = */  OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[5U],
    /* .tid            = */ 5U,
    /* .task_type      = */ OSEE_TASK_TYPE_BASIC,
    /* .task_func      = */ TASK_FUNC(Ultrasonic_Example),
    /* .ready_prio     = */ 1U,
    /* .dispatch_prio  = */ 1U,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[5U],
      /* .p_scb    = */   &osEE_scb_array[5U],
      /* .isr2_src  = */  OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[6U],
    /* .tid            = */ 6U,
    /* .task_type      = */ OSEE_TASK_TYPE_BASIC,
    /* .task_func      = */ TASK_FUNC(Buzzer_Example),
    /* .ready_prio     = */ 1U,
    /* .dispatch_prio  = */ 1U,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[6U],
      /* .p_scb    = */   &osEE_scb_array[6U],
      /* .isr2_src  = */  OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[7U],
    /* .tid            = */ 7U,
    /* .task_type      = */ OSEE_TASK_TYPE_BASIC,
    /* .task_func      = */ TASK_FUNC(TOF_Example),
    /* .ready_prio     = */ 1U,
    /* .dispatch_prio  = */ 1U,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[7U],
      /* .p_scb    = */   &osEE_scb_array[7U],
      /* .isr2_src  = */  OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[8U],
    /* .tid            = */ 8U,
    /* .task_type      = */ OSEE_TASK_TYPE_BASIC,
    /* .task_func      = */ TASK_FUNC(ADC_Example),
    /* .ready_prio     = */ 1U,
    /* .dispatch_prio  = */ 1U,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[8U],
      /* .p_scb    = */   &osEE_scb_array[8U],
      /* .isr2_src  = */  OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[9U],
    /* .tid            = */ 9U,
    /* .task_type      = */ OSEE_TASK_TYPE_BASIC,
    /* .task_func      = */ TASK_FUNC(OS_EE_Task_Init),
    /* .ready_prio     = */ 1U,
    /* .dispatch_prio  = */ 127U,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[10U],
      /* .p_scb    = */   &osEE_scb_array[10U],
      /* .isr2_src  = */  OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[10U],
    /* .tid            = */ 10U,
    /* .task_type      = */ OSEE_TASK_TYPE_BASIC,
    /* .task_func      = */ TASK_FUNC(Task_Motor),
    /* .ready_prio     = */ 1U,
    /* .dispatch_prio  = */ 1U,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[9U],
      /* .p_scb    = */   &osEE_scb_array[9U],
      /* .isr2_src  = */  OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[11U],
    /* .tid            = */ 11U,
    /* .task_type      = */ OSEE_TASK_TYPE_BASIC,
    /* .task_func      = */ TASK_FUNC(Task_AEB),
    /* .ready_prio     = */ 1U,
    /* .dispatch_prio  = */ 1U,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[10U],
      /* .p_scb    = */   &osEE_scb_array[10U],
      /* .isr2_src  = */  OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[12U],
    /* .tid            = */ 12U,
    /* .task_type      = */ OSEE_TASK_TYPE_BASIC,
    /* .task_func      = */ TASK_FUNC(LCD_TEST),
    /* .ready_prio     = */ 1U,
    /* .dispatch_prio  = */ 1U,
    /* .max_num_of_act = */ 1U
  },
  {
    /* .hdb = */ {
      /* .p_sdb    = */   &osEE_sdb_array[10U],
      /* .p_scb    = */   &osEE_scb_array[10U],
      /* .isr_src  = */   OSEE_TC_SRC_INVALID
    },
    /* .p_tcb          = */ &osEE_tcb_array[13U],
    /* .tid            = */ 13U,
    /* .task_type      = */ OSEE_TASK_TYPE_IDLE,
    /* .task_func      = */ osEE_idle_hook_wrapper,
    /* .ready_prio     = */ 0U,
    /* .dispatch_prio  = */ 0U,
    /* .max_num_of_act = */ 1U
  }
};



static CONSTP2VAR(OsEE_TDB, OS_CONST, OS_APPL_DATA)
  osEE_tdb_ptr_array[OSEE_TASK_ARRAY_SIZE + OsNumberOfCores] =
{
  &osEE_tdb_array[0U],
  &osEE_tdb_array[1U],
  &osEE_tdb_array[2U],
  &osEE_tdb_array[3U],
  &osEE_tdb_array[4U],
  &osEE_tdb_array[5U],
  &osEE_tdb_array[6U],
  &osEE_tdb_array[7U],
  &osEE_tdb_array[8U],
  &osEE_tdb_array[9U],
  &osEE_tdb_array[10U],
  &osEE_tdb_array[11U],
  &osEE_tdb_array[12U],
  &osEE_tdb_array[13U]
};



static VAR(OsEE_SN, OS_VAR_INIT)  osEE_sn_array[13] = {
  {
    /* .p_next = */ &osEE_sn_array[1U],
    /* .p_tdb  = */ NULL
  },
  {
    /* .p_next = */ &osEE_sn_array[2U],
    /* .p_tdb  = */ NULL
  },
  {
    /* .p_next = */ &osEE_sn_array[3U],
    /* .p_tdb  = */ NULL
  },
  {
    /* .p_next = */ &osEE_sn_array[4U],
    /* .p_tdb  = */ NULL
  },
  {
    /* .p_next = */ &osEE_sn_array[5U],
    /* .p_tdb  = */ NULL
  },
  {
    /* .p_next = */ &osEE_sn_array[6U],
    /* .p_tdb  = */ NULL
  },
  {
    /* .p_next = */ &osEE_sn_array[7U],
    /* .p_tdb  = */ NULL
  },
  {
    /* .p_next = */ &osEE_sn_array[8U],
    /* .p_tdb  = */ NULL
  },
  {
    /* .p_next = */ &osEE_sn_array[9U],
    /* .p_tdb  = */ NULL
  },
  {
    /* .p_next = */ &osEE_sn_array[10U],
    /* .p_tdb  = */ NULL
  },
  {
    /* .p_next = */ &osEE_sn_array[11U],
    /* .p_tdb  = */ NULL
  },
  {
    /* .p_next = */ &osEE_sn_array[12U],
    /* .p_tdb  = */ NULL
  },
  {
    /* .p_next = */ NULL,
    /* .p_tdb  = */ NULL
  }
};



static VAR(OsEE_ResourceCB, OS_VAR_CLEARED) osEE_res_cb_array[1];



static VAR(OsEE_ResourceDB, OS_CONST) osEE_res_db_array[1] = {
  {
    /* .p_cb              = */ &osEE_res_cb_array[0U],
    /* .prio              = */ 1U
  }
};



static CONSTP2VAR(OsEE_ResourceDB, OS_CONST, OS_APPL_DATA)
  osEE_res_db_ptr_array[OSEE_RESOURCE_ARRAY_SIZE] =
{
  &osEE_res_db_array[0U]
};



/***************************************************************************
 *
 * Counters Core0
 *
 **************************************************************************/

static VAR(OsEE_CounterCB, OS_VAR_CLEARED)
  osEE_counter_cb_array[1];



static VAR(OsEE_CounterDB, OS_CONST)
  osEE_counter_db_array[1] = {
  {
    /* .p_count_cb      = */ &osEE_counter_cb_array[0U],
    /* .info            = */ {
      /* .maxallowedvalue = */ (2147483647U),
      /* .ticksperbase    = */ (1U)
    }  }
};



static CONSTP2VAR(OsEE_CounterDB, OS_CONST, OS_APPL_DATA)
  osEE_counter_db_ptr_array[OSEE_COUNTERS_ARRAY_SIZE] =
{
  &osEE_counter_db_array[0U] 
};


/***************************************************************************
 *
 * Alarms Core0
 *
 **************************************************************************/

static VAR(OsEE_AlarmCB, OS_VAR_CLEARED)
  osEE_alarm_cb_array[1];



static VAR(OsEE_AlarmDB, OS_CONST)
  osEE_alarm_db_array[1] = {
  {
    /* .p_trigger_cb = */ &osEE_alarm_cb_array[0U],
    /* .p_counter_db = */ &osEE_counter_db_array[0U],
    /* .action       = */ {
      /* .param      = */   {
        /* .f            = */ NULL,
        /* .p_tdb        = */ &osEE_tdb_array[5U],
        /* .p_counter_db = */ NULL,
        /* .mask         = */ 0U},
      /* .type       = */ OSEE_ACTION_TASK
    }
  }
};



static CONSTP2VAR(OsEE_AlarmDB, OS_CONST, OS_APPL_DATA)
  osEE_alarm_db_ptr_array[OSEE_ALARMS_ARRAY_SIZE] =
{
  &osEE_alarm_db_array[0] 
};


/***************************************************************************
 *
 * Init Cpu Control Block Core0
 *
 **************************************************************************/


VAR(OsEE_CCB, OS_VAR_INIT) osEE_ccb_var = {
  /* .p_curr      = */  &osEE_tdb_array[13U],
  /* .rq          = */  NULL,
  /* .p_free_sn   = */  &osEE_sn_array[0U],
  /* .p_stk_sn    = */  NULL,
  /* .os_status   = */  OSEE_KERNEL_INITIALIZED,
  /* .app_mode    = */  INVALID_APPMODE,
  /* .last_error  = */  E_OK,
  /* .prev_s_isr_all_status = */ 0U,
  /* .prev_s_isr_os_status  = */ 0U,
  /* .s_isr_all_cnt         = */ 0U,
  /* .s_isr_os_cnt          = */ 0U,
  /* .d_isr_all_cnt         = */ 0U
};


/***************************************************************************
 *
 * Init Cpu Descriptor Block
 *
 **************************************************************************/

VAR(OsEE_CDB, OS_CONST) osEE_cdb_var = {
  /* .p_ccb                         = */ &osEE_ccb_var,
  /* .p_idle_task                   = */ &osEE_tdb_array[13U],
  /* .p_sys_counter_db              = */ &osEE_counter_db_array[0U]
};


VAR(OsEE_KCB, OS_VAR_CLEARED) osEE_kcb_var;


VAR(OsEE_KDB, OS_CONST) osEE_kdb_var = {
  /* .p_kcb               = */ &osEE_kcb_var,
  /* .p_tdb_ptr_array     = */ (P2SYM_CONSTP2VAR(OsEE_TDB, OS_APPL_CONST, TYPEDEF)[])&osEE_tdb_ptr_array,
  /* .tdb_array_size      = */ OSEE_ARRAY_ELEMENT_COUNT(osEE_tdb_ptr_array),
  /* .p_res_ptr_array     = */ (P2SYM_CONSTP2VAR(OsEE_ResourceDB, OS_APPL_CONST, TYPEDEF)[])&osEE_res_db_ptr_array,
  /* .res_array_size      = */ OSEE_ARRAY_ELEMENT_COUNT(osEE_res_db_ptr_array),
  /* .p_counter_ptr_array = */ (P2SYM_CONSTP2VAR(OsEE_CounterDB, OS_APPL_CONST, TYPEDEF)[])&osEE_counter_db_ptr_array,
  /* .counter_array_size  = */ OSEE_ARRAY_ELEMENT_COUNT(osEE_counter_db_ptr_array),
  /* .p_alarm_ptr_array   = */ (P2SYM_CONSTP2VAR(OsEE_AlarmDB, OS_APPL_CONST, TYPEDEF)[])&osEE_alarm_db_ptr_array,
  /* .alarm_array_size    = */ OSEE_ARRAY_ELEMENT_COUNT(osEE_alarm_db_ptr_array)
};


/***************************************************************************
 *
 * End
 *
 **************************************************************************/

