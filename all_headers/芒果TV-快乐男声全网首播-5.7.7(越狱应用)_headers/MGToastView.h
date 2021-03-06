//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MASConstraint, MGToastModel;

@interface MGToastView : UIView
{
    MASConstraint *_orientationConstraint;
    MGToastModel *_toastModel;
}

+ (void)showToast:(id)arg1 overView:(id)arg2;
@property(retain, nonatomic) MGToastModel *toastModel; // @synthesize toastModel=_toastModel;
@property(retain, nonatomic) MASConstraint *orientationConstraint; // @synthesize orientationConstraint=_orientationConstraint;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (void)startAnimation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

