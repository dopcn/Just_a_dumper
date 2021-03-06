//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol TBESDialogEventDelegate;

@interface TBESDialogView : UIView
{
    UIButton *_dialogConfirmButton;
    UIView *_dialogContentView;
    id <TBESDialogEventDelegate> _eventDelegate;
}

@property(nonatomic) __weak id <TBESDialogEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) UIView *dialogContentView; // @synthesize dialogContentView=_dialogContentView;
@property(retain, nonatomic) UIButton *dialogConfirmButton; // @synthesize dialogConfirmButton=_dialogConfirmButton;
- (void).cxx_destruct;
- (void)onClickComfirmButton:(id)arg1;
- (id)roundedCornerImage:(id)arg1 WithCornerRadius:(double)arg2;
- (id)roundGradientImgForView:(id)arg1;
- (id)dialogButtonShadowView;
- (id)init;

@end

