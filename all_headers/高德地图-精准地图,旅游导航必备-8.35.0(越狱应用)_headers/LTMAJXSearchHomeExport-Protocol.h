//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AJXModuleProtocol-Protocol.h"

@class NSString;

@protocol LTMAJXSearchHomeExport <AJXModuleProtocol>
- (void)getHistoryRecord:(long long)arg1 count:(long long)arg2 callback:(void (^)(NSArray *))arg3;

@optional
- (void)getHistoryRecord:(long long)arg1 count:(long long)arg2 callback:(void (^)(NSArray *))arg3:(id)arg4 __AJX_EXPORT_AS__getHistoryRecord:(id)arg5;
- (void)goSearch:(NSString *)arg1;
- (void)delHistroyRecord:(NSString *)arg1;
- (void)clearHistoryRecord:(void (^)(NSArray *))arg1;
- (void)getUserLocationCityInfo:(void (^)(NSArray *))arg1;
- (void)getMapCenterCityInfo:(void (^)(NSArray *))arg1;
- (void)getGeoobjString:(void (^)(NSArray *))arg1;
- (void)setKeyboardHidden:(_Bool)arg1;
- (void)regiestKeyboardStatusChangedCallBack:(void (^)(NSArray *))arg1;
@end

