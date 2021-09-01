/*
 *  Copyright (C) 2015-2021 Garrett Brown
 *  Copyright (C) 2015-2021 Team Kodi
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSE.md for more information.
 */

#include "JoystickUtils.h"
#include "Joystick.h"
#include "JoystickTranslator.h"
#include "JoystickTypes.h"

using namespace JOYSTICK;

bool CJoystickUtils::IsGhostJoystick(const CJoystick& joystick)
{
  // Ghost joysticks observed on linux and udev
  if (joystick.Provider() == JoystickTranslator::GetInterfaceProvider(EJoystickInterface::LINUX) ||
      joystick.Provider() == JoystickTranslator::GetInterfaceProvider(EJoystickInterface::UDEV))
  {
    // Wireless receiver names
    if (joystick.Name() == "Xbox 360 Wireless Receiver" ||
        joystick.Name() == "Xbox 360 Wireless Receiver (XBOX)")
    {
      return true;
    }
  }

  return false;
}
