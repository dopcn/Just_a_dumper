//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ChatCustomTruthViewControllerDelegate-Protocol.h"
#import "KTVAlbumPhotoPickerViewControllerDelegate-Protocol.h"
#import "KTVChatKeyboardMoreViewControllerDelegate-Protocol.h"
#import "SelectChatContentDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIButton, UIImagePickerController, UIImageView;
@protocol KTVChatKeyboardMoreDelegate;

@interface KTVChatKeyboardMoreViewController : UIViewController <KTVChatKeyboardMoreViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, SelectChatContentDelegate, KTVAlbumPhotoPickerViewControllerDelegate, ChatCustomTruthViewControllerDelegate>
{
    id <KTVChatKeyboardMoreDelegate> _delegate;
    unsigned long long _showMoreButtons;
    UIButton *_photoButton;
    UIButton *_cameraButton;
    UIButton *_localSongButton;
    UIButton *_myWorkButton;
    UIButton *_truthButton;
    UIImageView *_truthButtonNewMarkImageView;
    UIButton *_liveRoomButton;
    UIImageView *_liveRoomButtonNewMarkImageView;
    UIImagePickerController *_imagePickerController;
}

@property(retain, nonatomic) UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(nonatomic) __weak UIImageView *liveRoomButtonNewMarkImageView; // @synthesize liveRoomButtonNewMarkImageView=_liveRoomButtonNewMarkImageView;
@property(nonatomic) __weak UIButton *liveRoomButton; // @synthesize liveRoomButton=_liveRoomButton;
@property(nonatomic) __weak UIImageView *truthButtonNewMarkImageView; // @synthesize truthButtonNewMarkImageView=_truthButtonNewMarkImageView;
@property(nonatomic) __weak UIButton *truthButton; // @synthesize truthButton=_truthButton;
@property(nonatomic) __weak UIButton *myWorkButton; // @synthesize myWorkButton=_myWorkButton;
@property(nonatomic) __weak UIButton *localSongButton; // @synthesize localSongButton=_localSongButton;
@property(nonatomic) __weak UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(nonatomic) __weak UIButton *photoButton; // @synthesize photoButton=_photoButton;
@property(nonatomic) unsigned long long showMoreButtons; // @synthesize showMoreButtons=_showMoreButtons;
@property(nonatomic) __weak id <KTVChatKeyboardMoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)chatCustomTruthViewController:(id)arg1 sendTruthId:(id)arg2 truthQuestion:(id)arg3 truthSelections:(id)arg4;
- (void)selectContent:(id)arg1 type:(int)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)albumPhotoPickerViewController:(id)arg1 didSelectedPhotoList:(id)arg2;
- (void)cancelAllNewMark;
- (_Bool)hasNewMarkButtons;
- (void)liveRoomButtonDidClicked:(id)arg1;
- (void)sendCustomTruthQuestion;
- (void)sendTruthQuestionWithType:(long long)arg1;
- (void)truthButtonClicked:(id)arg1;
- (void)myWorkButtonClicked:(id)arg1;
- (void)localSongButtonClicked:(id)arg1;
- (void)cameraButtonClicked:(id)arg1;
- (void)photoButtonClicked:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

