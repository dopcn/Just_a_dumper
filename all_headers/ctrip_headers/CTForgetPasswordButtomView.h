//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface CTForgetPasswordButtomView : UIView
{
    UIButton *_resetButton;
    UIButton *_helpInfoButton;
    UIButton *_telButton;
    UIView *_tipsView;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIButton *telButton; // @synthesize telButton=_telButton;
@property(retain, nonatomic) UIButton *helpInfoButton; // @synthesize helpInfoButton=_helpInfoButton;
@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

