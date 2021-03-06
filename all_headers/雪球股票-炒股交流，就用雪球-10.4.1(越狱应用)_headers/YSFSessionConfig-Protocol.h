//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, YSFMediaItem, YSF_NIMMessage;
@protocol YSFCellLayoutConfig;

@protocol YSFSessionConfig <NSObject>

@optional
- (id <YSFCellLayoutConfig>)layoutConfigWithMessage:(YSF_NIMMessage *)arg1;
- (double)showTimestampInterval;
- (long long)messageLimit;
- (NSString *)inputViewPlaceholder;
- (long long)maxInputLines;
- (long long)maxInputLength;
- (_Bool)disableInputView;
- (_Bool)shouldHideItem:(YSFMediaItem *)arg1;
- (NSArray *)mediaItems;
@end

