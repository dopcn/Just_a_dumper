//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol BainuoCompActionProtocol <NSObject>

@optional
- (void)bainuoCompHandlerActionName:(NSString *)arg1 withParams:(NSDictionary *)arg2 callBackID:(NSString *)arg3 compID:(NSString *)arg4 compPage:(NSString *)arg5 compVersion:(NSString *)arg6 complete:(void (^)(NSDictionary *, NSError *))arg7;
- (void)bainuoCompHandlerActionName:(NSString *)arg1 withParams:(NSDictionary *)arg2 complete:(void (^)(NSDictionary *, NSError *))arg3;
@end

