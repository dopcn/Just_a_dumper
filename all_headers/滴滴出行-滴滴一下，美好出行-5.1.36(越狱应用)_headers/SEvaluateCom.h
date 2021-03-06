//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBaseComponent.h"

#import "SBottomContainerViewSource-Protocol.h"
#import "SEvaluateSheetViewDataSource-Protocol.h"

@class NSArray, NSString, SEvaluateContainer, SEvaluateSheetView, SEvaluateXpanelView, SThanksFeeConfigureModel, SThanksFeeSheetView, SThanksFeeTipInfoModel, UIView;

@interface SEvaluateCom : SBaseComponent <SEvaluateSheetViewDataSource, SBottomContainerViewSource>
{
    _Bool _evaluateReady;
    _Bool _thanksFeeReady;
    _Bool _activityReady;
    _Bool _additionalReady;
    _Bool _noEvaluate;
    SEvaluateContainer *_container;
    long long _containerHeight;
    SThanksFeeSheetView *_thanksFeeSheetView;
    SEvaluateSheetView *_testSheetView;
    long long _enterRating;
    unsigned long long _enterType;
    UIView *_activityView;
    UIView *_additionalView;
    NSArray *_questions;
    NSString *_activityTitle;
    NSString *_evaTitle;
    SEvaluateXpanelView *_evaluateXpanelView;
    SThanksFeeConfigureModel *_thanksFeeConfigureModel;
    SThanksFeeTipInfoModel *_thanksFeeTipInfoModel;
}

@property(retain, nonatomic) SThanksFeeTipInfoModel *thanksFeeTipInfoModel; // @synthesize thanksFeeTipInfoModel=_thanksFeeTipInfoModel;
@property(retain, nonatomic) SThanksFeeConfigureModel *thanksFeeConfigureModel; // @synthesize thanksFeeConfigureModel=_thanksFeeConfigureModel;
@property(retain, nonatomic) SEvaluateXpanelView *evaluateXpanelView; // @synthesize evaluateXpanelView=_evaluateXpanelView;
@property(nonatomic) _Bool noEvaluate; // @synthesize noEvaluate=_noEvaluate;
@property(copy, nonatomic) NSString *evaTitle; // @synthesize evaTitle=_evaTitle;
@property(copy, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
@property(nonatomic) _Bool additionalReady; // @synthesize additionalReady=_additionalReady;
@property(nonatomic) _Bool activityReady; // @synthesize activityReady=_activityReady;
@property(nonatomic) _Bool thanksFeeReady; // @synthesize thanksFeeReady=_thanksFeeReady;
@property(nonatomic) _Bool evaluateReady; // @synthesize evaluateReady=_evaluateReady;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(retain, nonatomic) UIView *additionalView; // @synthesize additionalView=_additionalView;
@property(retain, nonatomic) UIView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) unsigned long long enterType; // @synthesize enterType=_enterType;
@property(nonatomic) long long enterRating; // @synthesize enterRating=_enterRating;
@property(retain, nonatomic) SEvaluateSheetView *testSheetView; // @synthesize testSheetView=_testSheetView;
@property(retain, nonatomic) SThanksFeeSheetView *thanksFeeSheetView; // @synthesize thanksFeeSheetView=_thanksFeeSheetView;
@property(nonatomic) long long containerHeight; // @synthesize containerHeight=_containerHeight;
@property(retain, nonatomic) SEvaluateContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)canShowWithFromPayFinished:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)evaluateXpanelView:(id)arg1 answerQuestionsWithIndexs:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)evaluateXpanelView:(id)arg1 answerQuestionDidSelectedStarWithRating:(long long)arg2;
- (void)evaluateXpanelView:(id)arg1 didChangeRating:(long long)arg2;
- (id)questionsEvaluateXpanelView:(id)arg1;
- (double)heightForXpanelEvaluate;
- (id)xpanelEvaluateView;
- (void)answerQuestionDidSelectedStarRating;
- (void)answerQuestionFinished;
- (void)omgRate_sw;
- (_Bool)shouldActiveBoardsFinishAutoShowEvaluate;
- (_Bool)shouldPayFinishAutoShowEvaluate;
- (_Bool)iSEvaluateComEventSucceed;
- (void)evaluateSheetView:(id)arg1 didSelectWithBtnType:(unsigned long long)arg2 viewStyle:(unsigned long long)arg3;
- (void)willCancelEvaluateSheetView:(id)arg1;
- (void)evaluateComBackToPage;
- (void)cancelEvaluateSheetView:(id)arg1;
- (void)submitCompleted:(_Bool)arg1;
- (void)submit:(_Bool)arg1;
- (void)evaluateSheetView:(id)arg1 answerQuestionDidSelectedStarWithRating:(long long *)arg2;
- (void)evaluateSheetView:(id)arg1 answerQuestionsWithIndexs:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)evaluateSheetView:(id)arg1 submitWithRating:(long long)arg2 inputText:(id)arg3 completed:(CDUnknownBlockType)arg4;
- (void)showDidPayWithParams:(id)arg1;
- (void)showThanksFeeSheet;
- (void)omgEntranceCKWithType:(id)arg1 isommented:(_Bool)arg2 star:(long long)arg3 isFromPayFinished:(_Bool)arg4;
- (void)didTapThanksFeeInSheetView:(id)arg1;
- (void)callThanksbonusWithTipInfoModel:(id)arg1;
- (void)clearTagSelectStateWithStarModel:(id)arg1;
- (void)evaluateSheetView:(id)arg1 didChangeToRating:(long long)arg2;
- (void)evaluateSheetView:(id)arg1 setSelectState:(_Bool)arg2 atRating:(long long)arg3 andIndex:(long long)arg4;
- (long long)evaluateSheetView:(id)arg1 numberOfSelectTagsAtRating:(long long)arg2;
- (_Bool)evaluateSheetView:(id)arg1 isSelectTagAtRating:(long long)arg2 andIndex:(long long)arg3;
- (id)evaluateSheetView:(id)arg1 textForTagAtIndex:(long long)arg2 atRating:(long long)arg3;
- (long long)evaluateSheetView:(id)arg1 numberOfTagsAtRating:(long long)arg2;
- (id)evaluateSheetView:(id)arg1 ratingStringForRating:(long long)arg2;
- (long long)minRatingWhichNotNeedSelectTagInEvaluateSheetView;
- (void)clearSelectdTagsWithOutStar:(long long)arg1;
- (id)getStarModelWithStar:(long long)arg1;
- (id)getSelectStarModel;
- (void)closeSheetView;
- (void)dismiss;
- (id)getContainerView;
- (long long)getCommitRating;
- (void)showContentIfReady:(long long)arg1;
- (void)sendGetTipInfoWithCompleted:(CDUnknownBlockType)arg1;
- (void)checkEvaluateInfoWithDefaultRating:(long long)arg1 type:(unsigned long long)arg2;
- (void)showActivityView;
- (void)showWithRating:(long long)arg1 isFromPayFinished:(_Bool)arg2 animated:(_Bool)arg3 automatic:(_Bool)arg4 type:(unsigned long long)arg5;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 config:(id)arg2;
- (void)at_di_submit_evaluate_failed:(id)arg1;
- (void)at_di_submit_evaluate_success:(id)arg1;
- (void)at_event_enter_end_evaluate_failed:(id)arg1;
- (void)at_event_enter_end_evaluate_success:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

