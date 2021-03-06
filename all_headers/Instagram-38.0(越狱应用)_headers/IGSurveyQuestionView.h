//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGSurveyQuestionControllerDelegate-Protocol.h"

@class IGSurveyQuestion;
@protocol IGSurveyQuestionController, IGSurveyQuestionViewDelegate;

@interface IGSurveyQuestionView : UIView <IGSurveyQuestionControllerDelegate>
{
    id <IGSurveyQuestionViewDelegate> _delegate;
    UIView *_headerView;
    id <IGSurveyQuestionController> _questionController;
    IGSurveyQuestion *_question;
}

@property(retain, nonatomic) IGSurveyQuestion *question; // @synthesize question=_question;
@property(retain, nonatomic) id <IGSurveyQuestionController> questionController; // @synthesize questionController=_questionController;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <IGSurveyQuestionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)surveyAnswerWasSelectedWith:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 question:(id)arg2;
- (void)dealloc;

@end

