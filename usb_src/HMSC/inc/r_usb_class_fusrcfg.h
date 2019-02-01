/*******************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only
* intended for use with Renesas products. No other uses are authorized. This
* software is owned by Renesas Electronics Corporation and is protected under
* all applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT
* LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
* AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.
* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS
* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE
* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR
* ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE
* BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software
* and to discontinue the availability of this software. By using this software,
* you agree to the additional terms and conditions found by accessing the
* following link:
* http://www.renesas.com/disclaimer *
* Copyright (C) 2013 Renesas Electronics Corporation. All rights reserved.
*******************************************************************************/
/*******************************************************************************
* File Name    : r_usb_class_fusrcfg.h
* Version      : 2.10
* Description  : USB Device class definition
******************************************************************************
* History : DD.MM.YYYY Version Description
*         : 01.08.2013 2.10    Basic Mini FW Ver2.10 Release
******************************************************************************/

/* $Id: r_usb_usrconfig.h 49 2012-02-17 10:10:07Z tmura $ */

#ifndef __R_USB_CLASS_FUSRCFG_H__
#define __R_USB_CLASS_FUSRCFG_H__

/*****************************************************************************
Macro definitions (DEVICE CLASS DEFINE)
******************************************************************************/

#define USB_DEVICE_CLASS_VENDOR     0xff
#define USB_DEVICE_CLASS_HOST_CDC   0x02    
#define USB_DEVICE_CLASS_HOST_HID   0x03
#define USB_DEVICE_CLASS_HOST_MSC   0x08
#define USB_DEVICE_CLASS_PERI_CDC   0x82
#define USB_DEVICE_CLASS_PERI_HID   0x83
#define USB_DEVICE_CLASS_PERI_MSC   0x88

/* Select Device class  */
#define USB_DEVICE_CLASS_PP     USB_DEVICE_CLASS_HOST_MSC

/* Device Class Class Request Process Use */
//#define USB_CLASS_REQUEST_USE_PP

#endif  /* __R_USB_CLASS_FUSRCFG_H__ */
/******************************************************************************
End  Of File
******************************************************************************/