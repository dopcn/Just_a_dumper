//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface BBALoadingView : UIView
{
    UIImageView *_loadingImageview;
    UILabel *_messageLabel;
}

+ (id)showLogoLoadingViewOnSuperView:(id)arg1 andBgModel:(unsigned long long)arg2 andNeedSystemCache:(_Bool)arg3;
+ (id)showLogoLoadingViewOnSuperView:(id)arg1 andBgModel:(unsigned long long)arg2;
+ (id)showLogoLoadingViewOnSuperView:(id)arg1 andBgModel:(unsigned long long)arg2 andBgViewFrame:(struct CGRect)arg3 andBgColor:(id)arg4;
+ (id)loadingViewWithMessage:(id)arg1;
- (void).cxx_destruct;
- (id)initWithMessaege:(id)arg1;

@end

