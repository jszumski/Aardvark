//
//  ARKLogDistributor+UIAdditions.h
//  Aardvark
//
//  Created by Dan Federman on 7/25/16.
//  Copyright © 2016 Square, Inc. All rights reserved.
//

#if COCOAPODS
#import <Aardvark/ARKLogDistributor.h>
#else
#import <CoreAardvark/ARKLogDistributor.h>
#endif


@interface ARKLogDistributor (UIAdditions)

/// Creates a log message with a screenshot and distributes the log to the log observers.
- (void)logScreenshot;

@end
