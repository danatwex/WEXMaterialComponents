/*
 Copyright 2017-present The Material Motion Authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

#import "MDMMotionCurve.h"
#import "MDMMotionRepetition.h"

API_DEPRECATED_BEGIN("Use standard UIKit/CALayer animation APIs instead.",
                     ios(12, API_TO_BE_DEPRECATED))

/**
 A representation of timing for an animation.
 */
struct MDMMotionTiming {
  /**
   The amount of time, in seconds, before this animation's value interpolation should begin.
   */
  CFTimeInterval delay;

  /**
   The amount of time, in seconds, over which this animation should interpolate between its values.
   */
  CFTimeInterval duration;

  /**
   The velocity and acceleration of the animation over time.
   */
  MDMMotionCurve curve;

  /**
   The repetition characteristics of the animation.
   */
  MDMMotionRepetition repetition;

} NS_SWIFT_NAME(MotionTiming);
typedef struct MDMMotionTiming MDMMotionTiming;

API_DEPRECATED_END
