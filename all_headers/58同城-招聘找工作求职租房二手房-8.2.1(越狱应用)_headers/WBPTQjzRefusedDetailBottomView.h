//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;
@protocol WBPTQjzRefusedDetailBottomViewDelegte;

@interface WBPTQjzRefusedDetailBottomView : UIView
{
    id <WBPTQjzRefusedDetailBottomViewDelegte> _delegate;
    NSString *_buttonTitle;
    UIView *_topContentView;
    UILabel *_topHintLabel;
    UIButton *_taskButton;
}

@property(retain, nonatomic) UIButton *taskButton; // @synthesize taskButton=_taskButton;
@property(retain, nonatomic) UILabel *topHintLabel; // @synthesize topHintLabel=_topHintLabel;
@property(retain, nonatomic) UIView *topContentView; // @synthesize topContentView=_topContentView;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) __weak id <WBPTQjzRefusedDetailBottomViewDelegte> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)taskButtonClick:(id)arg1;
- (void)showHintLabelWithText:(id)arg1;
- (void)showWithoutHintLabel;
- (void)setAbleClick:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

