//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FMImageTitleButton;

@interface FMFishQuestionBottomComponentView : UIView
{
    FMImageTitleButton *_favorButton;
    FMImageTitleButton *_answerButton;
    UIView *_divisionView;
    UIView *_topLine;
}

@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *divisionView; // @synthesize divisionView=_divisionView;
@property(retain, nonatomic) FMImageTitleButton *answerButton; // @synthesize answerButton=_answerButton;
@property(retain, nonatomic) FMImageTitleButton *favorButton; // @synthesize favorButton=_favorButton;
- (void).cxx_destruct;
- (void)onAnswerButtonClicked:(id)arg1;
- (void)onFavorButtonClicked:(id)arg1;
- (void)bindComponent:(id)arg1;
- (void)setLayout;
- (id)initWithFrame:(struct CGRect)arg1 component:(id)arg2;

@end

