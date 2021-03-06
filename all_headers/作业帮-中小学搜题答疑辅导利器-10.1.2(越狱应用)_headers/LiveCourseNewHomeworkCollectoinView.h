//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class HomeWorkBaseViewController, LiveCourseFinalExamAnswerCardView, LiveCourseFinalExamStartView, LiveCourseNewHomeworkQuestionBaseCell, LiveCourseNewHomeworkResultView, LiveCourseNewHomeworkViewModel, NSIndexPath, NSMutableArray, NSString, UICollectionView, ZDCourseExamGethomeworkurllist, ZYBLiveLiveCourseFinalExamTimeView, ZybWebView;

@interface LiveCourseNewHomeworkCollectoinView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    double _examTimeViewHeight;
    _Bool _needJsFuction;
    _Bool _isShowFinalExamAnswerCardView;
    _Bool _isShowFinalExamResultView;
    _Bool _showNewHomeworkButton;
    _Bool _needShowFinalExamTimeView;
    _Bool _loadError;
    UICollectionView *_collectionView;
    LiveCourseNewHomeworkResultView *_resultView;
    LiveCourseFinalExamStartView *_finalExamStartView;
    ZYBLiveLiveCourseFinalExamTimeView *_finalExamTimeView;
    LiveCourseFinalExamAnswerCardView *_finalExamAnswerCardView;
    LiveCourseNewHomeworkQuestionBaseCell *_visibleCell;
    LiveCourseNewHomeworkViewModel *_homeworkViewModel;
    long long _pageType;
    long long _courseId;
    long long _lessonId;
    CDUnknownBlockType _backBlock;
    CDUnknownBlockType _showEvaluateItem;
    HomeWorkBaseViewController *_actionViewController;
    NSIndexPath *_scrolToIndexPath;
    ZybWebView *_currentWebView;
    LiveCourseNewHomeworkQuestionBaseCell *_currentCell;
    ZDCourseExamGethomeworkurllist *_homeworkurllist;
    NSMutableArray *_questionPositionRowArr;
    long long _subjectPosition;
    long long _questionPosition;
}

@property(nonatomic) long long questionPosition; // @synthesize questionPosition=_questionPosition;
@property(nonatomic) long long subjectPosition; // @synthesize subjectPosition=_subjectPosition;
@property(nonatomic, getter=isLoadError) _Bool loadError; // @synthesize loadError=_loadError;
@property(nonatomic) _Bool needShowFinalExamTimeView; // @synthesize needShowFinalExamTimeView=_needShowFinalExamTimeView;
@property(retain, nonatomic) NSMutableArray *questionPositionRowArr; // @synthesize questionPositionRowArr=_questionPositionRowArr;
@property(retain, nonatomic) ZDCourseExamGethomeworkurllist *homeworkurllist; // @synthesize homeworkurllist=_homeworkurllist;
@property(nonatomic) _Bool showNewHomeworkButton; // @synthesize showNewHomeworkButton=_showNewHomeworkButton;
@property(retain, nonatomic) LiveCourseNewHomeworkQuestionBaseCell *currentCell; // @synthesize currentCell=_currentCell;
@property(retain, nonatomic) ZybWebView *currentWebView; // @synthesize currentWebView=_currentWebView;
@property(retain, nonatomic) NSIndexPath *scrolToIndexPath; // @synthesize scrolToIndexPath=_scrolToIndexPath;
@property(nonatomic) __weak HomeWorkBaseViewController *actionViewController; // @synthesize actionViewController=_actionViewController;
@property(nonatomic) _Bool isShowFinalExamResultView; // @synthesize isShowFinalExamResultView=_isShowFinalExamResultView;
@property(nonatomic) _Bool isShowFinalExamAnswerCardView; // @synthesize isShowFinalExamAnswerCardView=_isShowFinalExamAnswerCardView;
@property(copy, nonatomic) CDUnknownBlockType showEvaluateItem; // @synthesize showEvaluateItem=_showEvaluateItem;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(nonatomic) long long lessonId; // @synthesize lessonId=_lessonId;
@property(nonatomic) long long courseId; // @synthesize courseId=_courseId;
@property(nonatomic) _Bool needJsFuction; // @synthesize needJsFuction=_needJsFuction;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) LiveCourseNewHomeworkViewModel *homeworkViewModel; // @synthesize homeworkViewModel=_homeworkViewModel;
@property(retain, nonatomic) LiveCourseNewHomeworkQuestionBaseCell *visibleCell; // @synthesize visibleCell=_visibleCell;
@property(retain, nonatomic) LiveCourseFinalExamAnswerCardView *finalExamAnswerCardView; // @synthesize finalExamAnswerCardView=_finalExamAnswerCardView;
@property(retain, nonatomic) ZYBLiveLiveCourseFinalExamTimeView *finalExamTimeView; // @synthesize finalExamTimeView=_finalExamTimeView;
@property(retain, nonatomic) LiveCourseFinalExamStartView *finalExamStartView; // @synthesize finalExamStartView=_finalExamStartView;
@property(retain, nonatomic) LiveCourseNewHomeworkResultView *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)resultViewBlock:(id)arg1;
- (void)finalExamStartViewBlock:(id)arg1;
- (void)finalExamTimeViewBlock:(id)arg1;
- (void)finalExamAnswerCardViewBlock:(id)arg1;
- (void)cellBlock:(id)arg1;
- (void)removeLFinalExamAnswerCardView;
- (id)getCurrentWebView;
- (void)showResultViewWithUrl:(id)arg1;
- (void)collectionScrollToIndexPath:(id)arg1;
- (void)removeSubviews;
- (void)refreshFinalExamUI;
- (void)refreshHomeworkUI;
- (void)addObserver;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)requestHomeworkDataWithCourseId:(long long)arg1 lessonId:(long long)arg2 pageType:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

