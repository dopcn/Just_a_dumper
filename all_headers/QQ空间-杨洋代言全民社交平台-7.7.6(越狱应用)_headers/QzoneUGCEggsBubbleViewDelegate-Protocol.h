//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, QZImageSummaryModel, UIButton;

@protocol QzoneUGCEggsBubbleViewDelegate <NSObject>

@optional
- (void)enterWhisperPageButtonClicked:(UIButton *)arg1;
- (void)didEggsBubbleViewDelButtonClicked:(UIButton *)arg1;
- (void)didEggsBubbleViewItemClicked:(QZImageSummaryModel *)arg1 withHitedKeyWord:(NSString *)arg2 posIndex:(long long)arg3;
@end

