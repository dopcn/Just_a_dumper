//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KGBasicSheet.h"

#import "KGCreateSongListViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UserLoginViewControllerDelegate-Protocol.h"

@class KGProgressView, KGThemeButton, KGThemeImageView, KGThemeLine, NSMutableArray, NSString, UIAlertView, UIButton, UIImageView, UILabel, UITableView, UIView;
@protocol KGCollectionSheetDelegate;

@interface KGCollectionSheet : KGBasicSheet <KGCreateSongListViewControllerDelegate, UserLoginViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UITextFieldDelegate>
{
    NSString *_songTitle;
    NSMutableArray *_songArray;
    _Bool _isMultiCollect;
    UIAlertView *_addPlaylist;
    UIImageView *_createTextFieldBgView;
    UIButton *_addListButton;
    UIView *_addListView;
    UIView *_backgroundView;
    UIView *_blueBar;
    UILabel *_songLabel;
    KGThemeButton *_newListButton;
    UIView *_separeLine;
    UITableView *_contentTableView;
    KGThemeButton *_cancelButton;
    struct CGRect _normalRect;
    _Bool _isEditRect;
    double _keyboardHeight;
    double _needHeight;
    KGProgressView *_progressView;
    KGThemeLine *_bottomSepareLine;
    int _fromPageType;
    id <KGCollectionSheetDelegate> _delegate;
    NSMutableArray *_collectListArray;
    KGThemeImageView *_bgView;
}

@property(retain, nonatomic) KGThemeImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSMutableArray *collectListArray; // @synthesize collectListArray=_collectListArray;
@property(nonatomic) _Bool isMultiCollect; // @synthesize isMultiCollect=_isMultiCollect;
@property(nonatomic) int fromPageType; // @synthesize fromPageType=_fromPageType;
@property(nonatomic) __weak id <KGCollectionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *songTitle; // @synthesize songTitle=_songTitle;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
- (void).cxx_destruct;
- (void)sendCollectionUserActionWithSongs:(id)arg1 AndError:(id)arg2 AndCollectList:(id)arg3;
- (void)addSongsToCollection:(id)arg1;
- (void)onSelectListName:(id)arg1;
- (void)onCreateListReturnBtnListName:(id)arg1;
- (void)onCancelButtonClick;
- (void)showWithStatus:(id)arg1 icon:(id)arg2 duration:(double)arg3;
- (void)makeProgressView;
- (void)showAlerView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isSaveOnNecollectionForName:(id)arg1 needFilterOtherTypeCollect:(_Bool)arg2;
- (void)createSongListViewCtrlExistCollectList:(id)arg1 songListName:(id)arg2 collectListEntity:(id)arg3;
- (void)createSongListViewCtrl:(id)arg1 isSuccess:(_Bool)arg2 songListName:(id)arg3 collectListEntity:(id)arg4;
- (void)toKGCreateSongListViewControllerWitName:(id)arg1;
- (void)newListButtonPressed:(id)arg1;
- (void)loadListData;
- (void)adjustUIContent;
- (void)setUIContent;
- (void)addSongs:(id)arg1;
- (void)setSongInfo:(id)arg1;
- (void)dealloc;
- (void)receivePushNotification;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

