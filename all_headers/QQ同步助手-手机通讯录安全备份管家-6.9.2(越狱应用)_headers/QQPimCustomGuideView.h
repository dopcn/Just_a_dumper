//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQPimBaseGuideView.h"

@class NSMutableArray, UIButton, UILabel;

@interface QQPimCustomGuideView : QQPimBaseGuideView
{
    UIButton *_button;
    UILabel *_titleLabel;
    NSMutableArray *_detailViews;
}

@property(retain, nonatomic) NSMutableArray *detailViews; // @synthesize detailViews=_detailViews;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (id)deatilViewAtIndex:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)action:(id)arg1;
- (void)setCanDismissBySelf:(_Bool)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)initWithCustomView:(id)arg1;
- (id)initWithNumOfDetailView:(long long)arg1;

@end

