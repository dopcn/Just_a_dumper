//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMRouteBaseCell.h"

@class BaiDubutton, UIImageView, UILabel;
@protocol BMRouteRtBusGuideCellDeleage;

@interface BMRouteRTBusGuideCell : BMRouteBaseCell
{
    id <BMRouteRtBusGuideCellDeleage> _delegate;
    UILabel *_guideLabel;
    BaiDubutton *_guideButton;
    UIImageView *_guideImageView;
}

+ (double)heightOfRouteRTBusGuideCell;
@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(retain, nonatomic) BaiDubutton *guideButton; // @synthesize guideButton=_guideButton;
@property(retain, nonatomic) UILabel *guideLabel; // @synthesize guideLabel=_guideLabel;
@property(nonatomic) __weak id <BMRouteRtBusGuideCellDeleage> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

