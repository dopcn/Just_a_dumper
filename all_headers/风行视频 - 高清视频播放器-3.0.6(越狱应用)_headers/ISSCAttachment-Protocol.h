//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol ISSCAttachment <NSObject>
- (void)loadCustomImages:(void (^)(void))arg1 faultHandler:(void (^)(NSError *))arg2;
- (void)load:(void (^)(void))arg1 faultHandler:(void (^)(NSError *))arg2;
- (_Bool)isRemoteFile;
- (NSString *)mimeType;
- (NSString *)fileName;
- (NSData *)data;
- (NSString *)url;
- (NSString *)path;
@end

