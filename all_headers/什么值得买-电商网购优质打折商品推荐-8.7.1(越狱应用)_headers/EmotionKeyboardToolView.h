//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface EmotionKeyboardToolView : UIView
{
    _Bool isEmotionHide;
    UIButton *_emotionButton;
    CDUnknownBlockType _changeModel;
}

@property(copy, nonatomic) CDUnknownBlockType changeModel; // @synthesize changeModel=_changeModel;
@property(retain, nonatomic) UIButton *emotionButton; // @synthesize emotionButton=_emotionButton;
- (void).cxx_destruct;
- (void)setDefaultModel;
- (void)emotionClick;
- (void)createView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

