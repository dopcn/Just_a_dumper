//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPMJWCommonCell.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, UIImageView, UIScrollView, UIView;

@interface SNPMJWBannerCell : SNPMJWCommonCell <UIScrollViewDelegate>
{
    UIImageView *_bgImgView;
    UIScrollView *_bannerScrollView;
    long long *_pageIndex;
    UIView *_pageblackView;
    UIView *_pageWhiteView;
    NSTimer *_timer;
    NSMutableArray *_subScrollArr;
}

+ (double)cellHeight;
@property(retain, nonatomic) NSMutableArray *subScrollArr; // @synthesize subScrollArr=_subScrollArr;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *pageWhiteView; // @synthesize pageWhiteView=_pageWhiteView;
@property(retain, nonatomic) UIView *pageblackView; // @synthesize pageblackView=_pageblackView;
@property(nonatomic) long long *pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) UIScrollView *bannerScrollView; // @synthesize bannerScrollView=_bannerScrollView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)moveToNextPage;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateWith:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

