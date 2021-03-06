//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XCFCustomNavBarViewController.h"

#import "XCFAVPlayerControllerDelegate-Protocol.h"
#import "XCFCommonQASectionProviderDelegate-Protocol.h"
#import "XCFSalonContentCellDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSString, XCFArticleModel, XCFColumnDishSectionProvider, XCFCommonQASectionProvider;

@interface XCFColumnArticleDetailViewController : XCFCustomNavBarViewController <XCFSalonContentCellDelegate, XCFAVPlayerControllerDelegate, XCFCommonQASectionProviderDelegate>
{
    NSMutableArray *_dishes;
    NSMutableOrderedSet *_commonQAs;
    XCFArticleModel *_article;
    XCFColumnDishSectionProvider *_dishSectionProvider;
    XCFCommonQASectionProvider *_QASectionProvider;
    NSArray *_columnSecitonProviders;
    double _maximumContentOffset;
}

@property(nonatomic) double maximumContentOffset; // @synthesize maximumContentOffset=_maximumContentOffset;
@property(retain, nonatomic) NSArray *columnSecitonProviders; // @synthesize columnSecitonProviders=_columnSecitonProviders;
@property(retain, nonatomic) XCFCommonQASectionProvider *QASectionProvider; // @synthesize QASectionProvider=_QASectionProvider;
@property(retain, nonatomic) XCFColumnDishSectionProvider *dishSectionProvider; // @synthesize dishSectionProvider=_dishSectionProvider;
@property(retain, nonatomic) XCFArticleModel *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (void)avPlayerControllerDidCancel:(id)arg1;
- (void)previewMetaMediaContents:(id)arg1 focusAtIndex:(long long)arg2 mediaType:(id)arg3 sender:(id)arg4;
- (void)salonContentCell:(id)arg1 previewMediaWithSender:(id)arg2;
- (void)salonContentCell:(id)arg1 didTapTextLink:(id)arg2;
- (void)commonQuestionCancelDigged:(id)arg1;
- (void)commonQuestionDigged:(id)arg1;
- (void)editAnswerWithAnswerModel:(id)arg1;
- (void)deleteAnswerWithAnswerModel:(id)arg1;
- (void)editQuestionWithQuestionModel:(id)arg1;
- (void)deleteQuestionWithQuestionModel:(id)arg1;
- (void)sectionProviderTouchLookMore:(id)arg1;
- (void)sectionProvider:(id)arg1 touchAnswerDeleteButton:(id)arg2 answerModel:(id)arg3;
- (void)sectionProvider:(id)arg1 touchAnswerEditButton:(id)arg2 answerModel:(id)arg3;
- (void)sectionProvider:(id)arg1 touchQuestionLikeButton:(id)arg2 questionModel:(id)arg3;
- (void)sectionProvider:(id)arg1 touchQuestionDeleteButton:(id)arg2 questionModel:(id)arg3;
- (void)sectionProvider:(id)arg1 touchQuestionEditButton:(id)arg2 questionModel:(id)arg3;
- (void)sectionProvider:(id)arg1 touchQuestionReportButton:(id)arg2 questionModel:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setUpTableViewHeaderView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)uploadDish;
- (void)resumeActiveMicroVideos;
- (void)pauseAllMicroVideos;
- (void)markArticleHasRead;
- (void)loadArticleAnsweredQuestions;
- (void)dishDiggChanged:(id)arg1;
- (void)reloadArticleDishs:(id)arg1;
- (void)setBottomToolBar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewFrameDidSetForTheFirstTime;
- (void)viewDidLoad;
- (id)initWithArticleModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

