//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol IYWFileUploader <NSObject>
- (NSString *)uploadImageToWantuWithData:(NSData *)arg1 customParams:(NSDictionary *)arg2 progress:(void (^)(double))arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (NSString *)uploadToWantuWithData:(NSData *)arg1 customParams:(NSDictionary *)arg2 progress:(void (^)(double))arg3 completion:(void (^)(NSString *, NSError *))arg4;
@end

