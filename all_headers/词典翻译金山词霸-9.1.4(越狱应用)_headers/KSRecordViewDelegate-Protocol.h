//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IFlySpeechError, KSRecordView, NSString;

@protocol KSRecordViewDelegate <NSObject>
- (void)recordView:(KSRecordView *)arg1;
- (void)recordView:(KSRecordView *)arg1 error:(IFlySpeechError *)arg2;
- (void)recordView:(KSRecordView *)arg1 result:(NSString *)arg2 isLast:(_Bool)arg3;
@end

