//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface PPao_TipsBaseView : UIView
{
    _Bool _isFocusOnTips;
    CDUnknownBlockType _tapAction;
    CDUnknownBlockType _backgroundClick;
}

@property(nonatomic) _Bool isFocusOnTips; // @synthesize isFocusOnTips=_isFocusOnTips;
@property(copy, nonatomic) CDUnknownBlockType backgroundClick; // @synthesize backgroundClick=_backgroundClick;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)hide;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;

@end

