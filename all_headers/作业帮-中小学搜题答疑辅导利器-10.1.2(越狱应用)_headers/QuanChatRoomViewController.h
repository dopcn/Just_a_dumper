//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HomeWorkBaseViewController.h"

#import "ChatRoomCellEventHandler-Protocol.h"
#import "FocusImageAnimationDelegate-Protocol.h"
#import "ImagePreviewOutputInterface-Protocol.h"
#import "InputBarViewDelegate-Protocol.h"
#import "NormalBussinessImageViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "VoicePlayerDelegate-Protocol.h"
#import "VoiceRecorderDelegate-Protocol.h"

@class ImageBrowserWireframe, InputBarView, NBChatroomToastView, NSString, QuanChatRoomViewModel, QuanMessagePrivateListController, UIImageView, UITableView, VoicePlayer, VoiceRecorder;

@interface QuanChatRoomViewController : HomeWorkBaseViewController <UITableViewDataSource, UITableViewDelegate, InputBarViewDelegate, ChatRoomCellEventHandler, VoicePlayerDelegate, VoiceRecorderDelegate, NormalBussinessImageViewDelegate, FocusImageAnimationDelegate, ImagePreviewOutputInterface>
{
    UITableView *_tableView;
    InputBarView *_inputBarView;
    QuanChatRoomViewModel *_viewModel;
    long long _fid;
    NSString *_friendName;
    VoiceRecorder *_recorder;
    VoicePlayer *_player;
    NBChatroomToastView *_volumeRecord;
    UIImageView *_showBigImageView;
    ImageBrowserWireframe *_imageBrowserWireframe;
    QuanMessagePrivateListController *_containerVC;
}

@property(nonatomic) __weak QuanMessagePrivateListController *containerVC; // @synthesize containerVC=_containerVC;
- (void).cxx_destruct;
- (void)didSelectImageWithURL:(id)arg1;
- (long long)focusImageViewContentMode;
- (id)focusContentView;
- (struct CGRect)focusImageViewFrame;
- (void)showBigImageForBigImage:(id)arg1 pid:(id)arg2;
- (void)player:(id)arg1 didStop:(id)arg2 success:(_Bool)arg3;
- (void)player:(id)arg1 didStartPlayWithModel:(id)arg2;
- (void)player:(id)arg1 errorOccured:(id)arg2;
- (void)voiceRecorderEndRecord:(id)arg1;
- (void)voiceRecorder:(id)arg1 recordFailed:(id)arg2;
- (void)voiceRecorder:(id)arg1 volumeChange:(double)arg2 duriation:(float)arg3;
- (void)voiceRecorder:(id)arg1 recordSuccessedWavPath:(id)arg2 amrPath:(id)arg3 duriation:(float)arg4;
- (void)initRecorder;
- (void)initPlayer;
- (void)imagePickerViewCancel:(id)arg1;
- (void)imagePickerView:(id)arg1 didPickerImage:(id)arg2 frame:(struct CGRect)arg3;
- (void)inputBarView:(id)arg1 recordButtonLongPressDidEndLocationInKeyWindow:(struct CGPoint)arg2;
- (void)inputBarView:(id)arg1 recordButtonLongPressDidMoveLocationInKeyWindow:(struct CGPoint)arg2;
- (void)inputBarView:(id)arg1 recordButtonLongPressDidStartLocationInKeyWindow:(struct CGPoint)arg2;
- (void)addRecordToast;
- (void)inputBarView:(id)arg1 submitBtnClicked:(id)arg2 image:(id)arg3;
- (void)inputBarView:(id)arg1 cameraBtnClicked:(id)arg2;
- (void)inputBarView:(id)arg1 keyBoardWillHide:(double)arg2;
- (void)inputBarView:(id)arg1 keyBoardWillShow:(double)arg2;
- (void)dismissKeyboard;
- (void)showActionSheet;
- (void)chatRoomCellResendData:(id)arg1;
- (void)chatRoomCellShowFullScreenTextView:(id)arg1;
- (void)chatRoomCellPlayAudio:(id)arg1;
- (void)chatRoomCellAvatarDidTap:(id)arg1;
- (void)chatRoomCell:(id)arg1 showBigImageFromImageView:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadLastPage;
- (void)setTableViewOffsetWithOrginRect:(struct CGRect)arg1 lastDataCount:(long long)arg2;
- (struct CGRect)getFirstCellRect;
- (void)loadData;
- (void)tableViewGoBottomAnimate;
- (void)tableViewGoBottom:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)disableMuteControl;
- (void)viewDidLoad;
- (void)initSubViews;
- (void)dealloc;
- (id)initWithFid:(long long)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

