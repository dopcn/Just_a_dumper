//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SCSToastView : UIView
{
    _Bool _shown;
    double _delayTime;
    UILabel *_detailLabel;
}

+ (void)showToast:(id)arg1 animated:(_Bool)arg2 delay:(double)arg3;
+ (void)showToast:(id)arg1 animated:(_Bool)arg2;
+ (void)showToast:(id)arg1;
+ (struct CGSize)sizeForNSStringText:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize)arg3;
@property(nonatomic) _Bool shown; // @synthesize shown=_shown;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
- (void).cxx_destruct;
- (void)hideToast;
- (void)showToast;
- (void)labTransform;
- (void)layoutSubviews;
- (id)init;

@end

