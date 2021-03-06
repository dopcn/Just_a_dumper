//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GCGridViewProtocol-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface HOUSEFeatureServiceView : UIView <GCGridViewProtocol>
{
    UIImageView *_viewForTopBackGround;
    UILabel *_labelForTitle;
    UILabel *_labelForCost;
    UILabel *_labelForBooking;
}

+ (id)viewReuseId:(id)arg1;
+ (struct CGSize)viewSize:(id)arg1;
@property(retain, nonatomic) UILabel *labelForBooking; // @synthesize labelForBooking=_labelForBooking;
@property(retain, nonatomic) UILabel *labelForCost; // @synthesize labelForCost=_labelForCost;
@property(retain, nonatomic) UILabel *labelForTitle; // @synthesize labelForTitle=_labelForTitle;
@property(retain, nonatomic) UIImageView *viewForTopBackGround; // @synthesize viewForTopBackGround=_viewForTopBackGround;
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

