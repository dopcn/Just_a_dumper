//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNThemableView.h"

#import "CCommentDataLoaderDelegate-Protocol.h"
#import "QNCommentCellActionDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CCommentDataLoader, CPushManager, CSimpleImageView, NSArray, NSIndexPath, NSMutableArray, NSString, QNGuestDataSource, QNGuestPropertyCell, QNGuestTableView, QNRootViewController, QNUserItem, UIButton, UIImage, UIImageView, UILabel, UIScrollView, UIView;
@protocol QNGuestMainViewDelegate;

@interface QNGuestMainView : QNThemableView <UITableViewDelegate, QNCommentCellActionDelegate, CCommentDataLoaderDelegate>
{
    _Bool _justMoveNickLbl;
    _Bool _isMyIdol;
    QNUserItem *_guestInfo;
    id <QNGuestMainViewDelegate> _delegate;
    QNRootViewController *_rootController;
    CDUnknownBlockType _onEventTriggered;
    QNGuestTableView *_tableView;
    UIImageView *_headBackground;
    UIView *_headContainerView;
    CSimpleImageView *_headImageView;
    UIView *_headImageBorder;
    UILabel *_nickLbl;
    UIImageView *_sexImageView;
    UILabel *_weiboAuthLbl;
    UIImageView *_weiboAuthImageView;
    UIButton *_switchIdolStateButton;
    UIButton *_sendPrivateLetterButton;
    UIButton *_blockerButton;
    UIButton *_reportButton;
    UIView *_topVerticalLine;
    UIView *_bottomVerticalLine;
    UIView *_bottomVerticalLine2;
    QNGuestPropertyCell *_followCell;
    NSArray *_cellTypeList;
    double _headStandTop;
    double _headStandardOriginY;
    UIImage *_defaultHeadImage;
    UIView *_maskView;
    NSMutableArray *_contentList;
    NSArray *_listIndexs;
    NSIndexPath *_lastSelectedIndexPath;
    QNGuestDataSource *_dataSource;
    CCommentDataLoader *_commentDataLoader;
    CPushManager *_pushManager;
}

@property(retain, nonatomic) CPushManager *pushManager; // @synthesize pushManager=_pushManager;
@property(retain, nonatomic) CCommentDataLoader *commentDataLoader; // @synthesize commentDataLoader=_commentDataLoader;
@property(retain, nonatomic) QNGuestDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(retain, nonatomic) NSArray *listIndexs; // @synthesize listIndexs=_listIndexs;
@property(retain, nonatomic) NSMutableArray *contentList; // @synthesize contentList=_contentList;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImage *defaultHeadImage; // @synthesize defaultHeadImage=_defaultHeadImage;
@property(nonatomic) double headStandardOriginY; // @synthesize headStandardOriginY=_headStandardOriginY;
@property(nonatomic) double headStandTop; // @synthesize headStandTop=_headStandTop;
@property(retain, nonatomic) NSArray *cellTypeList; // @synthesize cellTypeList=_cellTypeList;
@property(retain, nonatomic) QNGuestPropertyCell *followCell; // @synthesize followCell=_followCell;
@property(retain, nonatomic) UIView *bottomVerticalLine2; // @synthesize bottomVerticalLine2=_bottomVerticalLine2;
@property(retain, nonatomic) UIView *bottomVerticalLine; // @synthesize bottomVerticalLine=_bottomVerticalLine;
@property(retain, nonatomic) UIView *topVerticalLine; // @synthesize topVerticalLine=_topVerticalLine;
@property(retain, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(retain, nonatomic) UIButton *blockerButton; // @synthesize blockerButton=_blockerButton;
@property(retain, nonatomic) UIButton *sendPrivateLetterButton; // @synthesize sendPrivateLetterButton=_sendPrivateLetterButton;
@property(retain, nonatomic) UIButton *switchIdolStateButton; // @synthesize switchIdolStateButton=_switchIdolStateButton;
@property(retain, nonatomic) UIImageView *weiboAuthImageView; // @synthesize weiboAuthImageView=_weiboAuthImageView;
@property(retain, nonatomic) UILabel *weiboAuthLbl; // @synthesize weiboAuthLbl=_weiboAuthLbl;
@property(retain, nonatomic) UIImageView *sexImageView; // @synthesize sexImageView=_sexImageView;
@property(retain, nonatomic) UILabel *nickLbl; // @synthesize nickLbl=_nickLbl;
@property(retain, nonatomic) UIView *headImageBorder; // @synthesize headImageBorder=_headImageBorder;
@property(retain, nonatomic) CSimpleImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *headContainerView; // @synthesize headContainerView=_headContainerView;
@property(retain, nonatomic) UIImageView *headBackground; // @synthesize headBackground=_headBackground;
@property(retain, nonatomic) QNGuestTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType onEventTriggered; // @synthesize onEventTriggered=_onEventTriggered;
@property(nonatomic) __weak QNRootViewController *rootController; // @synthesize rootController=_rootController;
@property(nonatomic) __weak id <QNGuestMainViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isMyIdol; // @synthesize isMyIdol=_isMyIdol;
@property(retain, nonatomic) QNUserItem *guestInfo; // @synthesize guestInfo=_guestInfo;
- (void).cxx_destruct;
- (void)commentDataLoaderDataChanged:(id)arg1;
- (void)commentDataLoaderLoadStateChanged:(id)arg1;
- (id)_getFakeListItem:(id)arg1;
- (void)commentCellActionReport:(id)arg1;
- (void)commentCellActionViewArticle:(id)arg1;
- (void)commentCellActionReplyComment:(id)arg1;
- (void)commentCellActionSupport:(id)arg1;
- (_Bool)canPerformCommentCellAction:(SEL)arg1 comment:(id)arg2;
- (id)getCurrentNavigationController;
- (void)reloadLastClickedCell;
- (void)p_checkTableViewLoadStatus;
- (void)p_doRefreshRecommendListData;
- (void)p_getMoreRecommendListData;
- (void)p_requestRecommendData:(_Bool)arg1;
- (void)p_configTableView;
- (void)p_onButtonClicked:(id)arg1;
- (void)p_validateHeaderBackground:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)p_setHeaderViewFrame:(id)arg1;
- (id)p_vipImage;
- (void)layoutHeadView:(_Bool)arg1;
- (void)qnScroll2Top;
- (long long)p_posStyleForIndexPath:(id)arg1;
- (id)p_descriptionOfGuestMainViewCellType:(long long)arg1;
- (void)themeChanged:(long long)arg1;
- (void)p_reportEvent:(long long)arg1;
- (void)p_validateTheme;
- (void)p_validateFollowButton;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)dealloc;
- (void)changeCountOfFansBy:(long long)arg1;
- (void)setContentHidden:(_Bool)arg1;
- (void)showMask:(_Bool)arg1 isLogin:(_Bool)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

