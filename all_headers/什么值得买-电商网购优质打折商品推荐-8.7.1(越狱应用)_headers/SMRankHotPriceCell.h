//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SMBaseArticleCell.h"

@class UIImageView;

@interface SMRankHotPriceCell : SMBaseArticleCell
{
    UIImageView *_orderImageView;
}

@property(retain, nonatomic) UIImageView *orderImageView; // @synthesize orderImageView=_orderImageView;
- (void).cxx_destruct;
- (void)_setOrderImageViewWithIndexPath:(id)arg1;
- (void)resizeFrame;
- (void)setDict:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)configureCellWithDict:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)customSubViews;
- (void)commonInit;

@end

