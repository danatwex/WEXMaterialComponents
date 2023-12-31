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

#import <QuartzCore/QuartzCore.h>
#import <Foundation/Foundation.h>

#import "MDMTimingCurve.h"

API_DEPRECATED_BEGIN("Use standard UIKit/CALayer animation APIs instead.",
                     ios(12, API_TO_BE_DEPRECATED))

// A CAMediaTimingFunction is a timing curve - we simply define its conformity to our protocol here.
@interface CAMediaTimingFunction () <MDMTimingCurve>
@end

@interface CAMediaTimingFunction (MotionInterchangeExtension)

/**
 Returns a instance of the timing function with its control points reversed.
 */
- (nonnull CAMediaTimingFunction *)mdm_reversed;

/**
 Returns the first control point of the timing function.
 */
@property(nonatomic, assign, readonly) CGPoint mdm_point1;

/**
 Returns the second control point of the timing function.
 */
@property(nonatomic, assign, readonly) CGPoint mdm_point2;

@end

API_DEPRECATED_END
