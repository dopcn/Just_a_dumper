//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, VSCartNativeService;

@protocol VSCartNativeServiceDelegate <NSObject>
- (void)hideDataReloadView:(VSCartNativeService *)arg1;
- (void)showErrorDefaultView:(VSCartNativeService *)arg1 error:(id)arg2;
- (void)cartRequestCallBack:(VSCartNativeService *)arg1 result:(_Bool)arg2 cartRequestType:(unsigned long long)arg3 response:(id)arg4 message:(NSString *)arg5;
@end

