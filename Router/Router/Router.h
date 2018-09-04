//
//  Router.h
//  Router
//
//  Created by 王涛 on 2018/9/4.
//  Copyright © 2018年 tcl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Router : NSObject

+ (instancetype)sharedInstance;

// 远程App调用入口
- (id)performActionWithUrl:(NSURL *)url completion:(void(^)(NSDictionary *info))completion;
// 本地组件调用入口
- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params shouldCacheTarget:(BOOL)shouldCacheTarget;
- (void)releaseCachedTargetWithTargetName:(NSString *)targetName;

@end
