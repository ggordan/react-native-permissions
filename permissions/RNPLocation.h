//
//  RNPLocation.h
//  ReactNativePermissions
//
//  Created by Yonah Forst on 11/07/16.
//  Copyright © 2016 Yonah Forst. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "React/RCTConvert+RNPStatus.h"

@interface RNPLocation : NSObject

+ (NSString *)getStatus;
- (void)request:(NSString *)type completionHandler:(void (^)(NSString *))completionHandler;

@end
