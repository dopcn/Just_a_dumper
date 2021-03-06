//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ZYBCourseEvaluationLineViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, UILabel, UIScrollView, ZYBCourseEvaluationViewModel, ZYBLiveHighLightButton;

@interface ZYBCourseEvaluationView : UIView <ZYBCourseEvaluationLineViewDelegate>
{
    CDUnknownBlockType _data;
    UILabel *_titleLabel;
    UILabel *_remindLabel;
    UIScrollView *_scrollView;
    ZYBLiveHighLightButton *_submitButton;
    ZYBLiveHighLightButton *_closeButton;
    UIActivityIndicatorView *_indicatorView;
    long long _courseId;
    long long _lessonId;
    ZYBCourseEvaluationViewModel *_viewModel;
    NSMutableArray *_viewArray;
}

@property(retain, nonatomic) NSMutableArray *viewArray; // @synthesize viewArray=_viewArray;
@property(retain, nonatomic) ZYBCourseEvaluationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) long long lessonId; // @synthesize lessonId=_lessonId;
@property(nonatomic) long long courseId; // @synthesize courseId=_courseId;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) ZYBLiveHighLightButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) ZYBLiveHighLightButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *remindLabel; // @synthesize remindLabel=_remindLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)dealloc;
- (id)changeArrayToJson:(id)arg1;
- (void)stoploading;
- (void)showloading;
- (void)cannotchange:(_Bool)arg1;
- (void)submitCourseEvaluation;
- (void)courseEvaluationLineNum:(long long)arg1;
- (void)loadEvaluation;
- (void)hideview;
- (void)requestData;
- (void)layoutSubviews;
- (void)setupSubViews;
- (void)showInView:(id)arg1 withCourseId:(long long)arg2 lessonId:(long long)arg3;
- (void)dissMissWithSubmitSuccess:(_Bool)arg1;
- (void)dissMiss;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

