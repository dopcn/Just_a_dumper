//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UPLabel;

@interface UPDefaultCardView : UIControl
{
    UPLabel *_textLabel;
    double _leftMargin;
    UIImageView *_indicatorImageView;
}

- (void).cxx_destruct;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)makeIndicatorImageView;
- (void)makeTextLabelWithText:(id)arg1;
- (void)makeLines;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2 lineLeftMargin:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2;

@end

