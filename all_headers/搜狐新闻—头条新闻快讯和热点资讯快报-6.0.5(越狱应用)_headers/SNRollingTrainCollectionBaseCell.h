//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SNRollingNews;

@interface SNRollingTrainCollectionBaseCell : UICollectionViewCell
{
    SNRollingNews *_news;
}

@property(retain, nonatomic) SNRollingNews *news; // @synthesize news=_news;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cellDidEndDisplaying;
- (void)cellFullDisplaying;
- (void)cellIsDisplaying;
- (void)updateTheme;
- (void)themeChanged:(id)arg1;
- (void)setItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

