//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface FlowAdView : UIView
{
    _Bool _isBannerFlow;
    UIButton *_cancelButton;
    UILabel *_spreadLable;
}

+ (id)createAdViewWithFrame:(struct CGRect)arg1 object:(id)arg2 isBannerFlow:(_Bool)arg3;
@property(retain, nonatomic) UILabel *spreadLable; // @synthesize spreadLable=_spreadLable;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) _Bool isBannerFlow; // @synthesize isBannerFlow=_isBannerFlow;
- (void).cxx_destruct;
- (void)cancelAdEvent;

@end

