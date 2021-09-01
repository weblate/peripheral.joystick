/*
 *  Copyright (C) 2015-2021 Garrett Brown
 *  Copyright (C) 2015-2021 Team Kodi
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSE.md for more information.
 */

#pragma once

#include "JoystickManager.h"
#include "utils/CommonMacros.h"

class CPeripheralJoystick;

namespace JOYSTICK
{
  class DLL_PRIVATE CPeripheralScanner : public IScannerCallback
  {
  public:
    CPeripheralScanner(CPeripheralJoystick* peripheralLib);

    virtual ~CPeripheralScanner(void) { }

    /*!
     * \brief Trigger a scan through the Peripheral API
     */
    virtual void TriggerScan(void) override;

  private:
    CPeripheralJoystick* const m_peripheralLib;
  };
}
