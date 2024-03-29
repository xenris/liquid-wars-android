//    This file is part of Liquid Wars.
//
//    Liquid Wars is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    Liquid Wars is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with Liquid Wars.  If not, see <http://www.gnu.org/licenses/>.

#ifndef RENDERER_HPP
#define RENDERER_HPP

#include <jni.h>

extern "C" {
void Java_com_xenris_liquidwarsos_NativeInterface_onSurfaceCreated(JNIEnv * env, jclass jobj);
void Java_com_xenris_liquidwarsos_NativeInterface_onDrawFrame(JNIEnv * env, jclass jobj);
void Java_com_xenris_liquidwarsos_NativeInterface_onSurfaceChanged(JNIEnv * env, jclass jobj, jint width, jint height);
}

void onSurfaceCreated();
void onDrawFrame();
void onSurfaceChanged(int width, int height);

#endif
