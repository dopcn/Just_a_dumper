//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class MZTimerLabel, NSLayoutConstraint, NSString, UIButton, UILabel, UITextField, YDWBWordModel;

@interface YDWBSpellPracticeView : UIView <UITextFieldDelegate>
{
    YDWBWordModel *_model;
    UILabel *_explainationLabel;
    UIButton *_forgetButton;
    UIButton *_startSpellButton;
    UITextField *_spellTextField;
    UILabel *_currentTimerLabel;
    UILabel *_bestTimerLabel;
    UILabel *_bestLabel;
    UILabel *_currentLabel;
    MZTimerLabel *_timerLabel;
    NSLayoutConstraint *_currentTimerCenterX;
    NSLayoutConstraint *_currentTimerTopToForget;
    UIView *_spellWordBackgroundView;
    UILabel *_spellWordLabel;
}

@property(retain, nonatomic) UILabel *spellWordLabel; // @synthesize spellWordLabel=_spellWordLabel;
@property(retain, nonatomic) UIView *spellWordBackgroundView; // @synthesize spellWordBackgroundView=_spellWordBackgroundView;
@property(nonatomic) __weak NSLayoutConstraint *currentTimerTopToForget; // @synthesize currentTimerTopToForget=_currentTimerTopToForget;
@property(nonatomic) __weak NSLayoutConstraint *currentTimerCenterX; // @synthesize currentTimerCenterX=_currentTimerCenterX;
@property(retain, nonatomic) MZTimerLabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(nonatomic) __weak UILabel *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(nonatomic) __weak UILabel *bestLabel; // @synthesize bestLabel=_bestLabel;
@property(nonatomic) __weak UILabel *bestTimerLabel; // @synthesize bestTimerLabel=_bestTimerLabel;
@property(nonatomic) __weak UILabel *currentTimerLabel; // @synthesize currentTimerLabel=_currentTimerLabel;
@property(nonatomic) __weak UITextField *spellTextField; // @synthesize spellTextField=_spellTextField;
@property(nonatomic) __weak UIButton *startSpellButton; // @synthesize startSpellButton=_startSpellButton;
@property(nonatomic) __weak UIButton *forgetButton; // @synthesize forgetButton=_forgetButton;
@property(nonatomic) __weak UILabel *explainationLabel; // @synthesize explainationLabel=_explainationLabel;
@property(retain, nonatomic) YDWBWordModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)forget:(id)arg1;
- (void)restore;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)startToSpell:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

