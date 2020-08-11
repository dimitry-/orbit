// Copyright (c) 2020 The Orbit Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "GlPanel.h"

#include "CaptureWindow.h"

GlPanel* GlPanel::Create(Type a_Type) {
  GlPanel* panel = nullptr;

  switch (a_Type) {
    case CAPTURE:
      panel = new CaptureWindow();
      break;
  }

  panel->m_Type = a_Type;

  // Todo: fix leak...
  return panel;
}

void GlPanel::Destroy(GlPanel* panel) { delete panel; }

GlPanel::GlPanel() {
  m_WindowOffset[0] = 0;
  m_WindowOffset[1] = 0;
  m_MainWindowWidth = 0;
  m_MainWindowHeight = 0;
  m_NeedsRedraw = true;
}

void GlPanel::Initialize() {}

void GlPanel::Resize(int /*a_Width*/, int /*a_Height*/) {}

void GlPanel::Render(int /*a_Width*/, int /*a_Height*/) {}
