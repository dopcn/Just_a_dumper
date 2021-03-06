//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GCGridViewProtocol-Protocol.h"

@class GCPriceView, NSString, NVModelBaseHomeRecommendProduct, UIImageView, UILabel;

@interface HOUSERecomView : UIView <GCGridViewProtocol>
{
    UIImageView *_iconView;
    UILabel *_titleL;
    GCPriceView *_nowPriceView;
    GCPriceView *_oldPriceView;
    UILabel *_subTitleL;
    NVModelBaseHomeRecommendProduct *_model;
}

+ (id)viewReuseId:(id)arg1;
+ (struct CGSize)viewSize:(id)arg1;
@property(retain, nonatomic) NVModelBaseHomeRecommendProduct *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *subTitleL; // @synthesize subTitleL=_subTitleL;
@property(retain, nonatomic) GCPriceView *oldPriceView; // @synthesize oldPriceView=_oldPriceView;
@property(retain, nonatomic) GCPriceView *nowPriceView; // @synthesize nowPriceView=_nowPriceView;
@property(retain, nonatomic) UILabel *titleL; // @synthesize titleL=_titleL;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)layoutSubviews;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

