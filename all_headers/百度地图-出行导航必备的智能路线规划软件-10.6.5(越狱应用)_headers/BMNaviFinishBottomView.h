//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol BMNaviFinishBottomViewDelegate;

@interface BMNaviFinishBottomView : UIView
{
    id <BMNaviFinishBottomViewDelegate> _delegate;
    NSArray *_bottomArray;
    NSArray *_buttons;
}

@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *bottomArray; // @synthesize bottomArray=_bottomArray;
@property(nonatomic) __weak id <BMNaviFinishBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickButton:(id)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1 withElements:(id)arg2;

@end

