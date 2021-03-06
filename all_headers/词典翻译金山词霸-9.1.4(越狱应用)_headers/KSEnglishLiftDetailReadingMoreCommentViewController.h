//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSSecondLevelViewController.h"

#import "KSCommentBarDelegate-Protocol.h"
#import "KSEnglishLiftDetailCommentCollectionViewCellDelegate-Protocol.h"
#import "KSMultimediaCommentBarDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class KSCommentBar, KSDailySentenceViewModel, KSEnglishLiftDetailCommentReadingModel, KSEnglishLiftDetailModel, KSMessageCommentModel, KSMultimediaCommentBar, NSIndexPath, NSMutableDictionary, NSString, UICollectionView;

@interface KSEnglishLiftDetailReadingMoreCommentViewController : KSSecondLevelViewController <UICollectionViewDataSource, UICollectionViewDelegate, KSEnglishLiftDetailCommentCollectionViewCellDelegate, KSCommentBarDelegate, KSMultimediaCommentBarDelegate>
{
    _Bool _needLayout;
    _Bool _needRefresh;
    NSString *_articleId;
    UICollectionView *_collectionView;
    KSCommentBar *_commentBar;
    KSMultimediaCommentBar *_multimediaCommentView;
    NSIndexPath *_selectedReplyIndexPath;
    KSMessageCommentModel *_userComment;
    KSEnglishLiftDetailModel *_detailModel;
    KSDailySentenceViewModel *_viewModel;
    KSEnglishLiftDetailCommentReadingModel *_commentModel;
    NSMutableDictionary *_cellCacheForCalculatingHeight;
    NSString *_lastId;
}

@property(nonatomic, getter=isNeedRefresh) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic, getter=isNeedLayout) _Bool needLayout; // @synthesize needLayout=_needLayout;
@property(retain, nonatomic) NSString *lastId; // @synthesize lastId=_lastId;
@property(retain, nonatomic) NSMutableDictionary *cellCacheForCalculatingHeight; // @synthesize cellCacheForCalculatingHeight=_cellCacheForCalculatingHeight;
@property(retain, nonatomic) KSEnglishLiftDetailCommentReadingModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) KSDailySentenceViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) KSEnglishLiftDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) KSMessageCommentModel *userComment; // @synthesize userComment=_userComment;
@property(retain, nonatomic) NSIndexPath *selectedReplyIndexPath; // @synthesize selectedReplyIndexPath=_selectedReplyIndexPath;
@property(retain, nonatomic) KSMultimediaCommentBar *multimediaCommentView; // @synthesize multimediaCommentView=_multimediaCommentView;
@property(nonatomic) __weak KSCommentBar *commentBar; // @synthesize commentBar=_commentBar;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (void)setTheme;
- (void)commitVoiceComment:(id)arg1 withVoiceLength:(id)arg2;
- (void)sendVoiceMessage:(id)arg1 withVoiceLength:(id)arg2;
- (void)commitComment:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)showCommentBarWithComment:(id)arg1;
- (void)prepareCommentForIndexPath:(id)arg1 reply:(_Bool)arg2 index:(unsigned long long)arg3;
- (void)reloadSelectedRow:(id)arg1;
- (void)showBindVC;
- (void)showUserLoginVC;
- (void)commentBar:(id)arg1 didSendButtonClicked:(id)arg2 messageContent:(id)arg3;
- (void)commentBar:(id)arg1 didSendVoiceButtonClicked:(id)arg2 userInfo:(id)arg3;
- (void)multimediaCommentBar:(id)arg1 didClickSendMessageBn:(id)arg2 audioFilePath:(id)arg3 voiceLength:(id)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)commentBar:(id)arg1 willTranstionToCenter:(struct CGPoint *)arg2 withUserInfo:(id)arg3;
- (void)commentBar:(id)arg1 heightGrowing:(double)arg2 duration:(double)arg3;
- (void)setupCommentBar;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)footerRereshing;
- (void)headerRereshing;
- (void)EnglishLiftDetailCommentCollectionViewCell:(id)arg1 didSelectIndexPath:(id)arg2;
- (void)EnglishLiftDetailCommentCollectionViewCell:(id)arg1 button:(id)arg2 clickAtIndex:(long long)arg3;
- (id)cellForCalculatingHeightCellClassName:(id)arg1;
- (id)cellClassNameAtIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 selectedHelp:(id)arg3;
- (id)cellIdentifierAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)requestReplyListReply:(_Bool)arg1;
- (void)registerCollecionViewCell;
- (void)setupCollectionView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

