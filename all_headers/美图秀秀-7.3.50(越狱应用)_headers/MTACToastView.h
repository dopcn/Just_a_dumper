//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol MTACToastViewDelegate;

@interface MTACToastView : UIView
{
    _Bool _isTouchDimiss;
    _Bool _inMiddle;
    float _showTime;
    double _positionY;
    id <MTACToastViewDelegate> _delegate;
    CDUnknownBlockType _didShowCompletion;
    struct CGSize _labelSize;
}

@property(copy, nonatomic) CDUnknownBlockType didShowCompletion; // @synthesize didShowCompletion=_didShowCompletion;
@property(nonatomic) __weak id <MTACToastViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double positionY; // @synthesize positionY=_positionY;
@property(nonatomic) struct CGSize labelSize; // @synthesize labelSize=_labelSize;
@property(nonatomic) _Bool inMiddle; // @synthesize inMiddle=_inMiddle;
@property(nonatomic) float showTime; // @synthesize showTime=_showTime;
@property(nonatomic) _Bool isTouchDimiss; // @synthesize isTouchDimiss=_isTouchDimiss;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dismissEnd;
- (void)showEnd;
- (void)showAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)show;
- (id)initWithlabelText:(id)arg1 bgImage:(id)arg2 ParentView:(id)arg3;

@end

