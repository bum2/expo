// Copyright 2018-present 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <UserNotifications/UserNotifications.h>

@protocol ABI38_0_0UMUserNotificationCenterProxyInterface <NSObject>

- (void)getNotificationSettingsWithCompletionHandler:(nonnull void(^)(UNNotificationSettings *__nonnull settings))completionHandler;
- (void)requestAuthorizationWithOptions:(UNAuthorizationOptions)options completionHandler:(nonnull void (^)(BOOL granted, NSError *__nullable error))completionHandler;

@end

