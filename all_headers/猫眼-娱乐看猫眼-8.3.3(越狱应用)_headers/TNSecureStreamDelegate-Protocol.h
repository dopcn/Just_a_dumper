//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, TNSecureProtocolData;

@protocol TNSecureStreamDelegate <NSObject>
- (void)reportDecodeDataError;
- (void)reportSendingStatus:(TNSecureProtocolData *)arg1;
- (void)reportCmd:(NSString *)arg1 code:(long long)arg2 requestBytes:(int)arg3 responseBytes:(int)arg4 responseTime:(double)arg5 ip:(NSString *)arg6 uploadPercent:(int)arg7 extend:(NSString *)arg8;
- (void)reportError:(long long)arg1 secureData:(NSData *)arg2 payload:(NSData *)arg3;
@end

