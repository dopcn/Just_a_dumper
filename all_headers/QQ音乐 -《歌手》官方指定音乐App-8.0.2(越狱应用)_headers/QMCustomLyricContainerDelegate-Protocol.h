//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, QMCustomLyricContainer;

@protocol QMCustomLyricContainerDelegate <NSObject>

@optional
- (void)showedListenQualityUpgradeTips:(QMCustomLyricContainer *)arg1 tips:(NSString *)arg2;
- (NSString *)stringForListenQualityUpgradeTips:(QMCustomLyricContainer *)arg1;
- (void)didTappedTranslateLyricButton:(QMCustomLyricContainer *)arg1;
- (void)didTappedYinYiButton:(QMCustomLyricContainer *)arg1;
- (void)didTappedSingerNameAtLyricContianer:(QMCustomLyricContainer *)arg1;
@end

