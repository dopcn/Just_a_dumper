//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface WMBaseLoadingView : UIView
{
}

+ (_Bool)hasLoadingViewForView:(id)arg1;
+ (void)hideAllLoadingForView:(id)arg1;
+ (id)loadingViewForView:(id)arg1;
+ (_Bool)hideLoadingForView:(id)arg1 animated:(_Bool)arg2;
+ (id)showLoadingAddedTo:(id)arg1 animated:(_Bool)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)hide:(_Bool)arg1;
- (void)removeFromSuperviewAfterHide:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (id)initWithView:(id)arg1;

@end

