//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;
@protocol WXNetDelegate;

@protocol WXSpeechRecognizerConnectionDelegate <NSObject>
- (void)connectionResultData:(NSData *)arg1;
- (void)connectionResultJSonNSString:(NSString *)arg1;
- (_Bool)shouldSendData:(NSData *)arg1 withUrlArgs:(NSString *)arg2 delegate:(id <WXNetDelegate>)arg3;
- (void)connectionDidCancel;
- (void)connectionResultArray:(NSArray *)arg1;
- (void)connectionResultArray:(NSArray *)arg1 isEnd:(_Bool)arg2;
- (void)connectionErrorCode:(long long)arg1 andHttpStatus:(long long)arg2;
@end

